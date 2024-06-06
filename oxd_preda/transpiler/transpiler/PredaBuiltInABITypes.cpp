#include <assert.h>

#include "PredaTranspiler.h"
#include "PredaBuiltInConcreteTypes.h"
#include "PredaBuiltInABITypes.h"

namespace transpiler {

	/*
		BuiltInBlockStructType : Built-in block struct type
	*/
	BuiltInBlockStructType::BuiltInBlockStructType(PredaTranspilerContext *inTranspilerContext)
		: ConcreteType(ConcreteType::SystemReservedType)
	{
		assert(inTranspilerContext != nullptr);
		pTranspilerContext = inTranspilerContext;
	}

	void BuiltInBlockStructType::Init()
	{
		inputName = "__@block";
		outputFullName = typeOutputPrefix + inputName;
		exportName = inputName;
		supportedOperatorMask = uint64_t(OperatorTypeBitMask::DotBit);

		{
			bool res = true;
			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);

				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(64, false), true, false);
				res = res && (DefineMemberFunction("get_height", signature, false) != nullptr);

				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(32, false), true, false);
				res = res && (DefineMemberFunction("get_shard_index", signature, false) != nullptr);
				res = res && (DefineMemberFunction("get_shard_order", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(64, false), true, false);
				res = res && (DefineMemberFunction("get_timestamp", signature, false) != nullptr);
				res = res && (DefineMemberFunction("get_random_number", signature, false) != nullptr);

				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInAddressType(), true, false);
				res = res && (DefineMemberFunction("get_miner_address", signature, false) != nullptr);
			}

			assert(res);
		}
	}

	std::shared_ptr<BuiltInBlockStructType> BuiltInBlockStructType::CreateType(PredaTranspilerContext *inTranspilerContext)
	{
		std::shared_ptr<BuiltInBlockStructType> ret = Allocator::New<BuiltInBlockStructType>(inTranspilerContext);
		ret->Init();
		return ret;
	}

	/*
		BuiltInTransactionStructType : Built-in transaction struct type
	*/
	BuiltInTransactionStructType::BuiltInTransactionStructType(PredaTranspilerContext *inTranspilerContext)
		: ConcreteType(ConcreteType::SystemReservedType)
	{
		assert(inTranspilerContext != nullptr);
		pTranspilerContext = inTranspilerContext;
	}

	void BuiltInTransactionStructType::Init()
	{
		inputName = "__@transaction";
		outputFullName = typeOutputPrefix + inputName;
		exportName = inputName;
		supportedOperatorMask = uint64_t(OperatorTypeBitMask::DotBit);

		{
			bool res = true;
			uint32_t flags = uint32_t(FunctionFlags::IsConst);
			{
				ConcreteTypePtr transactionTypeEnumType = pTranspilerContext->globalType->CreateInnerEnumType("transaction_type");
				assert(transactionTypeEnumType != nullptr);
				res = res && (transactionTypeEnumType->DefineMemberVariable(transactionTypeEnumType, "normal_type", 0, true, false, true) != nullptr);
				res = res && (transactionTypeEnumType->DefineMemberVariable(transactionTypeEnumType, "relay_type", 0, true, false, true) != nullptr);
				res = res && (transactionTypeEnumType->DefineMemberVariable(transactionTypeEnumType, "system_type", 0, true, false, true) != nullptr);
				res = res && (transactionTypeEnumType->DefineMemberVariable(transactionTypeEnumType, "issue_type", 0, true, false, true) != nullptr);

				res = res && (DefineMemberFunction("get_type", FunctionSignature(QualifiedConcreteType(transactionTypeEnumType, true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);
			}

			res = res && (DefineMemberFunction("get_self_address", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInAddressType(), true, false), std::vector<DefinedIdentifierPtr>(), flags | uint32_t(ScopeType::Address)), false) != nullptr);
			res = res && (DefineMemberFunction("get_sender", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInAddressType(), true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);
			res = res && (DefineMemberFunction("get_timestamp", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(64, false), true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);

			{
				std::vector<ConcreteTypePtr> templateParams(1, pTranspilerContext->GetBuiltInAddressType());
				ConcreteTypePtr arrayOfAddressType = pTranspilerContext->GetBuiltInArrayType()->GetConcreteTypeFromTemplateParams(templateParams);
				res = res && (DefineMemberFunction("get_signers", FunctionSignature(QualifiedConcreteType(arrayOfAddressType, false, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);
			}
			{
				std::vector<DefinedIdentifierPtr> params;
				params.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInIntegerType(32, false), true, true, "signerIndex", 0));
				res = res && (DefineMemberFunction("verify_signer", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInBoolType(), true, false), params, flags), false) != nullptr);
			}
			{
				std::vector<DefinedIdentifierPtr> params;
				params.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInAddressType(), true, true, "signerAddress", 0));
				res = res && (DefineMemberFunction("verify_signer", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInBoolType(), true, false), params, flags), false) != nullptr);
			}

			res = res && (DefineMemberFunction("get_originated_shard_index", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(32, false), true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);
			res = res && (DefineMemberFunction("get_originated_shard_order", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInIntegerType(32, false), true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);

			res = res && (DefineMemberFunction("get_initiator_address", FunctionSignature(QualifiedConcreteType(pTranspilerContext->GetBuiltInAddressType(), true, false), std::vector<DefinedIdentifierPtr>(), flags), false) != nullptr);
			assert(res);
		}
	}

	std::shared_ptr<BuiltInTransactionStructType> BuiltInTransactionStructType::CreateType(PredaTranspilerContext *inTranspilerContext)
	{
		std::shared_ptr<BuiltInTransactionStructType> ret = Allocator::New<BuiltInTransactionStructType>(inTranspilerContext);
		ret->Init();
		return ret;
	}

	/*
		BuiltInEventStructType : Built-in event struct type
	*/
	BuiltInEventStructType::BuiltInEventStructType(PredaTranspilerContext *inTranspilerContext)
		: ConcreteType(ConcreteType::SystemReservedType)
	{
		assert(inTranspilerContext != nullptr);
		pTranspilerContext = inTranspilerContext;
	}

	void BuiltInEventStructType::Init()
	{
		inputName = "__@event";
		outputFullName = typeOutputPrefix + inputName;
		exportName = inputName;
		supportedOperatorMask = uint64_t(OperatorTypeBitMask::DotBit);

		ConcreteTypePtr uiEventStateEnumType = pTranspilerContext->globalType->CreateInnerEnumType("uievent_state");
		assert(uiEventStateEnumType != nullptr);
		bool res = true;
		res = res && (uiEventStateEnumType->DefineMemberVariable(uiEventStateEnumType, "deactivated", 0, true, false, true) != nullptr);
		res = res && (uiEventStateEnumType->DefineMemberVariable(uiEventStateEnumType, "activated", 0, true, false, true) != nullptr);
		res = res && (uiEventStateEnumType->DefineMemberVariable(uiEventStateEnumType, "locked", 0, true, false, true) != nullptr);
		res = res && (uiEventStateEnumType->DefineMemberVariable(uiEventStateEnumType, "unlocked", 0, true, false, true) != nullptr);
		res = res && (DefineMemberFunction("get_user_state", FunctionSignature(QualifiedConcreteType(uiEventStateEnumType, true, false), std::vector<DefinedIdentifierPtr>(), uint32_t(FunctionFlags::IsConst)), false) != nullptr);

		{
			FunctionSignature signature;
			signature.flags = uint32_t(FunctionFlags::IsConst);

			signature.returnType = QualifiedConcreteType(nullptr, true, false);
			signature.parameters.clear();
			signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInIntegerType(32, false), true, true, "eventId", 0));
			signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
			res = res && (DefineMemberFunction("push", signature, false) != nullptr);
			res = res && (DefineMemberFunction("notify", signature, false) != nullptr);
		}
		assert(res);
	}

	std::shared_ptr<BuiltInEventStructType> BuiltInEventStructType::CreateType(PredaTranspilerContext *inTranspilerContext)
	{
		std::shared_ptr<BuiltInEventStructType> ret = Allocator::New<BuiltInEventStructType>(inTranspilerContext);
		ret->Init();
		return ret;
	}

	/*
		BuiltInDebugStructType : Built-in debug struct type
	*/
	BuiltInDebugStructType::BuiltInDebugStructType(PredaTranspilerContext *inTranspilerContext)
		: ConcreteType(ConcreteType::SystemReservedType)
	{
		assert(inTranspilerContext != nullptr);
		pTranspilerContext = inTranspilerContext;
	}

	void BuiltInDebugStructType::Init()
	{
		inputName = "__@debug";
		outputFullName = typeOutputPrefix + inputName;
		exportName = inputName;
		supportedOperatorMask = uint64_t(OperatorTypeBitMask::DotBit);

		{
			bool res = true;
			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);

				signature.returnType = QualifiedConcreteType(nullptr, true, false);
				signature.parameters.clear();
				//signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "message", 0));
				res = res && (DefineMemberFunction("print", signature, false) != nullptr);
				//res = res && (DefineMemberFunction("highlight", signature, false) != nullptr);
				//res = res && (DefineMemberFunction("warning", signature, false) != nullptr);
				//res = res && (DefineMemberFunction("error", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);

				signature.returnType = QualifiedConcreteType(nullptr, true, false);
				signature.parameters.clear();
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInBoolType(), true, true, "condition", 0));
				res = res && (DefineMemberFunction("assert", signature, false) != nullptr);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "message", 0));
				res = res && (DefineMemberFunction("assert", signature, false) != nullptr);
			}

			//res = res && (DefineMemberFunction("halt", FunctionSignature(QualifiedConcreteType(nullptr, true, false), std::vector<DefinedIdentifierPtr>(), uint32_t(PredaFunctionFlags::IsConst)), false) != nullptr);
			//res = res && (DefineMemberFunction("break", FunctionSignature(QualifiedConcreteType(nullptr, true, false), std::vector<DefinedIdentifierPtr>(), uint32_t(PredaFunctionFlags::IsConst)), false) != nullptr);

			//{
			//	FunctionSignature signature;
			//	signature.flags = uint32_t(PredaFunctionFlags::IsConst);

			//	signature.returnType = QualifiedConcreteType(nullptr, true, false);
			//	signature.parameters.clear();
			//	signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInIntegerType(32, false), true, true, "millisecond", 0));
			//	res = res && (DefineMemberFunction("sleep", signature, false) != nullptr);
			//}

			assert(res);
		}
	}

	std::shared_ptr<BuiltInDebugStructType> BuiltInDebugStructType::CreateType(PredaTranspilerContext *inTranspilerContext)
	{
		std::shared_ptr<BuiltInDebugStructType> ret = Allocator::New<BuiltInDebugStructType>(inTranspilerContext);
		ret->Init();
		return ret;
	}

	/*
		BuiltInUtilStructType : Built-in util struct type
	*/
	BuiltInUtilStructType::BuiltInUtilStructType(PredaTranspilerContext *inTranspilerContext)
		: ConcreteType(ConcreteType::SystemReservedType)
	{
		assert(inTranspilerContext != nullptr);
		pTranspilerContext = inTranspilerContext;
	}

	void BuiltInUtilStructType::Init()
	{
		inputName = "__@util";
		outputFullName = typeOutputPrefix + inputName;
		exportName = inputName;
		supportedOperatorMask = uint64_t(OperatorTypeBitMask::DotBit);

		std::vector<ConcreteTypePtr> templateParams(1, pTranspilerContext->GetBuiltInIntegerType(8,false));
		ConcreteTypePtr arrayOfUint8Type = pTranspilerContext->GetBuiltInArrayType()->GetConcreteTypeFromTemplateParams(templateParams);

		{
			bool res = true;
			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				res = res && (DefineMemberFunction("sha3", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				res = res && (DefineMemberFunction("sha3", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				res = res && (DefineMemberFunction("md5", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				res = res && (DefineMemberFunction("md5", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				res = res && (DefineMemberFunction("sm3", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				res = res && (DefineMemberFunction("sm3", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "key", 0));
				res = res && (DefineMemberFunction("sm4_enc", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "key", 0));
				res = res && (DefineMemberFunction("sm4_enc", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "key", 0));
				res = res && (DefineMemberFunction("sm4_dec", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "key", 0));
				res = res && (DefineMemberFunction("sm4_dec", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(arrayOfUint8Type, true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "private_key", 0));
				res = res && (DefineMemberFunction("sm2_sign", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInStringType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "private_key", 0));
				res = res && (DefineMemberFunction("sm2_sign", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInBoolType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "sign", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(arrayOfUint8Type, true, true, "public_key", 0));
				res = res && (DefineMemberFunction("sm2_verify", signature, false) != nullptr);
			}

			{
				FunctionSignature signature;
				signature.flags = uint32_t(FunctionFlags::IsConst);
				signature.returnType = QualifiedConcreteType(pTranspilerContext->GetBuiltInBoolType(), true, false);
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "data", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "sign", 0));
				signature.parameters.push_back(Allocator::New<DefinedIdentifier>(pTranspilerContext->GetBuiltInStringType(), true, true, "public_key", 0));
				res = res && (DefineMemberFunction("sm2_verify", signature, false) != nullptr);
			}

			assert(res);
		}
	}

	std::shared_ptr<BuiltInUtilStructType> BuiltInUtilStructType::CreateType(PredaTranspilerContext *inTranspilerContext)
	{
		std::shared_ptr<BuiltInUtilStructType> ret = Allocator::New<BuiltInUtilStructType>(inTranspilerContext);
		ret->Init();
		return ret;
	}
}
