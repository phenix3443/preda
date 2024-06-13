#pragma once
#include "shard_data.h"
#include "simu_global.h"


namespace oxd
{

class Simulator;
class SimuShard;
class DataBuffer;

extern int SimulatorMain(const os::CommandLine& cmd);

class Simulator: protected rvm::BlockchainRuntime
			   , public rt::Singleton<Simulator, false>
{
	friend class InputParametrized;
	friend class SimuGlobalShard;

public:
	const rvm::DAppId		DAPP_ID = ( rvm::DAppId)1;
	const rt::SS			DAPP_NAME = "chsimu";
	const rvm::Address		ADDRESS{ {1,2,3,4} };

protected:

	EngineEntry				_Engines[(int)rvm::EngineId::Max];
	bool					_InitEngine(rvm::EngineId eng, const char* dll_name, const char* repo, const char* engine_config = nullptr);

protected:
	ext::fast_map<rt::String_Ref, rt::BufferEx<SimuTxn*>> _TxnPool;
	mutable os::CriticalSection	_CS;

protected:
	rt::Buffer<SimuShard*>	_Shards;
	rt::BufferEx<size_t>	_ShardPendingTxn;
	SimuGlobalShard*		_pGlobalShard = nullptr;
	volatile int32_t		_iShardsExecuted;	// used in !_bShardAsync mode
	uint32_t				_ShardOrder;
	uint32_t				_ShardBitmask;
	bool					_bChainStepping;
	bool					_bShardAsync;		// monoxide
	bool					_bChainPaused;
	volatile int32_t		_PendingTxnCount;
	volatile int32_t		_ExecutedTxnCount;
	os::Event				_ChainIdle;

	void					_InitChain(UINT shard_count);
	static rt::String_Ref	_LookupFunctionName(const rvm::Contract* contract, rvm::OpCode op);

protected:
	///////////////////////////////////////////////////////
	// From rvm::BlockchainRuntime
	virtual rvm::ConstString			GetCoreDAppName() const override
	{
		return {"core", 4};
	}
	virtual rvm::ContractRepository*	GetContractRepository() override
	{
		return nullptr;
	}
	virtual void						DebugPrint(rvm::DebugMessageType type, const rvm::ConstString* string, const rvm::ExecutionState* ctx_opt, const rvm::Contract* contract_opt, int32_t line) override;

	virtual rvm::DAppId					GetDAppByName(const rvm::ConstString* dapp_name) const override
	{
		return _pGlobalShard->GetDAppByName(dapp_name);
	}
	virtual rvm::ContractVersionId		GetContractByName(const rvm::ConstString* dapp_period_contract_name) const override
	{
		return _pGlobalShard->GetContractByName(dapp_period_contract_name);
	}
	virtual rvm::BuildNum				GetContractEffectiveBuild(rvm::ContractId contract) const override 
	{
		return _pGlobalShard->GetContractEffectiveBuild(contract);
	}
	virtual const rvm::DeployedContract*GetContractDeployed(rvm::ContractVersionId contract) const override
	{
		return _pGlobalShard->GetContractDeployed(contract);
	}
	virtual bool						IsTokenMintAllowed(rvm::TokenId tid, rvm::ContractId contract) const override
	{
		return _pGlobalShard->IsTokenMintAllowed(tid, contract);
	}

protected:
	// Scripting
	struct CmdParse
	{
		rt::String_Ref		L1;
		rt::String_Ref		L2;
		rt::String_Ref		Args;
		int					Repeat;
		rt::String_Ref		Identifier;
		bool				Identifier_isArray;
		CmdParse(const rt::String_Ref& cmd, uint32_t LineNum);
	};
	struct TargetParse
	{
		rt::String_Ref		Target;
		rt::String_Ref		ArgsJson;

		TargetParse(const rt::String_Ref& arg_part, rvm::Scope scope, uint32_t LineNum);
		bool				IsError() const { return ArgsJson.IsEmpty(); }
	};

	rt::BufferEx<User>				_Users;
	uint32_t						_UserIndexRandMax;
	rt::String						_ScriptPath;
	bool							_ScriptAborted;
	InputParametrized::Symbols		_ScriptEnv;
	mutable rt::Randomizer			_ScriptRand;
	uint64_t						_ScriptGasLimit;
	os::HighPerformanceCounter		_ScriptStopWatch;
	uint64_t						_ScriptStopWatchPendingTxnCount = 0;
	uint64_t						_ScriptStopWatchExecutedTxnCount = 0;
	rt::Json						_ScriptVizJson;
	uint32_t						_ScriptVizSectionNum;
	bool							_ScriptVizEnabled;
	bool							_VizToConsole;
	rt::String						_DefaultRTMode;
#ifdef _VIZ
	ext::AsyncDataQueueInfinite<std::pair<rt::String, SimuTxn*>, false, 64, true> _IdTxnQueue;
#endif

	bool							_ExecAllocate(const CmdParse& cmd);
	bool							_ExecState(const CmdParse& cmd);
	bool							_ExecChain(const CmdParse& cmd);
	bool							_ExecLog(const CmdParse& cmd);
	bool							_ExecIssueTxn(const CmdParse& cmd);
#ifdef _VIZ
	bool							_ExecVisualize(const CmdParse& cmd, const rt::String_Ref& cmd_in);
	bool							_ExecBlocksLog(const CmdParse& cmd, rt::Json& json);
	bool							_ExecAddrStateLog(const CmdParse& cmd, rt::Json& json);
	bool							_ExecShardStateLog(const CmdParse& cmd, rt::Json& json);
	bool 							_ExecTxnLog(const CmdParse& cmd, rt::Json& json);
	bool							_ExecTraceLog(const CmdParse& cmd, rt::Json& json);
	void							_ExecProfileLog(rt::Json& json);
	bool							_GetContractFunction(const CmdParse& cmd, ContractFunction& fi) const;
	bool							_ProcessTargetRequest(rt::String& out, uint32_t LineNum, bool shardReq);
	bool							_ProcessIdentifierRequest(const CmdParse& cmd, rt::String& id_name, int& index, bool isTrace);
	void							_ConvertQueueToTxnPool();
	rvm::InvokeResult*				_GetTxnResult(const SimuTxn* txn);
	rvm::ConstData					_ComposeState(oxd::SimuShard* s, rvm::BuildNum build, rvm::ContractScopeId csid, InputParametrized& input, const rt::String& in_state, rvm::Address* addr = nullptr);
	bool							_ComposeSolJson(rt::JsonObject inJson, rt::Json& out, rt::String fn);
	void							_RunDeployAsTxn(const CmdParse& cmd);
	bool							_Step();

	rvm::EngineId					ResolveRTEngine(rt::String in, rt::String& filename);
	bool							_ParseSolidityFunc(const rt::String& functionName, rt::String& argument);

#endif
public:
	Simulator();
	~Simulator(){ Term(); }

	rvm::Scope		PrepareTxn(rvm::ContractId cid, rvm::OpCode opcode, rvm::BuildNum& buildnum_inout) const;
	uint32_t		GetShardIndex(const rvm::Address& a) const { return rvm::ADDRESS_SHARD_DWORD(a)&_ShardBitmask; }
	uint32_t		GetShardIndex(const ScopeTarget& a) const { return rvm::SCOPEKEY_SHARD_DWORD(rvm::ScopeKey{ (uint8_t*)&a, a.target_size }) &_ShardBitmask; }
	uint32_t		GetShardCount() const { return 1<<_ShardOrder; }
	auto*			GetShard(uint32_t i){ return _Shards[i]; }
	auto*			GetShard(uint32_t i) const { return _Shards[i]; }
	auto*			GetGlobalShard(){ return _pGlobalShard; }
	auto*			GetGlobalShard() const { return _pGlobalShard; }
	const auto&		GetUsers() const { return _Users; }

	bool			Init(uint32_t shard_order, bool async_shard, bool defaultWASM, bool viz_to_console);
	void			Term();

	void			CreateExecuteUnit(ExecutionUnit* out) const;
	auto&			GetMiner() const { return _Users[0].Addr; }
	bool			CompleteShardExecution();
	bool			IsShardingAsync() const { return _bShardAsync; }
	bool			IsChainStepping() const { return _bChainStepping; }
	bool			IsChainPaused() const { return _bChainPaused; }

	uint32_t		GetScriptRandom32() const { return _ScriptRand.GetNext(); }
	uint64_t		GetScriptRandom64() const { return _ScriptRand.GetNext() | (((uint64_t)_ScriptRand.GetNext())<<32); }
	uint64_t		GetScriptGasLimit() const { return _ScriptGasLimit; }
	auto&			GetScriptEnvSymbols() const { return _ScriptEnv; }
	auto&			GetScriptAddress(uint32_t i) const { return _Users[i]; }
	auto&			GetScriptRandomAddress() const { return _Users[GetScriptRandomAddressIndex()].Addr; }
	uint32_t		GetScriptRandomAddressIndex() const;
	uint32_t		GetScriptAddressCount() const { return (uint32_t)_Users.GetSize(); }

	bool			ExecuteCommand(const rt::String_Ref& cmd);
	void			Run(rt::Buffer<rt::String_Ref>& input_files);
	bool			Deploy(ExecutionUnit& exec_units, const rt::String_Ref* filenames, const rt::String_Ref* ctor_args, uint32_t count, bool within_script, rvm::InvokeResult &ctor_invoke_result);
	const rvm::Contract* Simulator::GetDeployedContract(const rvm::Contract* compiled_contract);
	bool 			CheckDeployedContract(const rvm::Contract* compiled_contract);
	bool 			CheckContractStateVariables(const rvm::Contract* compiled_contract, const rvm::Contract* deployed_contract);
	bool 			CheckContractCustomTypes(const rvm::Contract* compiled_contract, const rvm::Contract* deployed_contract);
	bool 			CheckContractExportedFunctions(const rvm::Contract* compiled_contract, const rvm::Contract* deployed_contract);
	bool			Compile(rvm::EngineId e, rt::Buffer<rt::String>& sources, rt::Buffer<rt::String_Ref>& code_fns);

	void			OnTxnPushed(){ if(os::AtomicIncrement(&_PendingTxnCount) < 2)_ChainIdle.Reset(); }
	void			OnTxnPushed(uint32_t co){ if(os::AtomicAdd(co, &_PendingTxnCount) < (int)(2 + co))_ChainIdle.Reset(); }
	void			OnTxnsConfirmed(uint32_t co)
					{
						os::AtomicAdd(-(int32_t)co, &_PendingTxnCount); //ChainIdle will be set when all shards finish block creation and pendingTxnCount reaches zero
						os::AtomicAdd(co, &_ExecutedTxnCount);
					}
	uint32_t		GetPendingTxnCount() const { return _PendingTxnCount; }
	void			WaitUntilIdle();
	bool			ExportVizHtml(const rt::String_Ref& assets, const rt::String_Ref& output) const;
	rvm::RvmEngine* GetEngine(rvm::EngineId e) const {
		return _Engines[(int)e].pEngine;
	}
	const auto*		GetAllEngines() const { return &_Engines[0]; }
	auto*			GetGlobalStates() const { return (const rvm::GlobalStates*)(_pGlobalShard); }
	rvm::EngineId	GetPredaBuildTarget(const rt::String_Ref& code) const;

	uint32_t		GetLineNum() const { return LineNum; }
	rvm::InvokeResult	DeployFromStatement(const rt::String_Ref& deployStatement);
	void			SetChainIdle() { _ChainIdle.Set();}
public:
	JsonLogError	JsonLog;
	uint32_t		LineNum;
};

} // namespace oxd
