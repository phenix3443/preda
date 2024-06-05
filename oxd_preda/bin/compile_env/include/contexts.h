#pragma once
#include "common.h"
#include "inttypes.h"
#include "address_blob_hash_types.h"
#include "arraytype.h"
#include <iostream>

namespace prlrt {

	struct __prlt___block {
		__prlt_uint64 __prli_get_height()
		{
			return PREDA_CALL(Block_GetHeight, );
		}
		__prlt_uint32 __prli_get_shard_index()
		{
			return PREDA_CALL(Block_GetShardIndex, );
		}
		__prlt_uint32 __prli_get_shard_order()
		{
			return PREDA_CALL(Block_GetShardOrder, );
		}
		__prlt_uint64 __prli_get_timestamp()
		{
			return PREDA_CALL(Block_GetTimestamp, );
		}
		__prlt_uint64 __prli_get_random_number()
		{
			return PREDA_CALL(Block_GetRandomNumber, );
		}
		__prlt_address __prli_get_miner_address()
		{
			__prlt_address value;
			PREDA_CALL(Block_GetMinerAddress, (uint8_t*)&value);
			return value;
		}
	};

}

prlrt::__prlt___block __prli___block;


using __prlt_transaction_type__ = prlrt::transaction_type;
using __prlt_transaction_type = prlrt::enum_wrapper<prlrt::transaction_type, 4>;

namespace prlrt {

	struct __prlt___transaction {
		__prlt_transaction_type __prli_get_type()
		{
			return PREDA_CALL(Transaction_GetType, );
		}
		__prlt_address __prli_get_self_address()
		{
			__prlt_address value;
			PREDA_CALL(Transaction_GetSelfAddress, (uint8_t*)&value);
			return value;
		}
		__prlt_address __prli_get_sender()
		{
			__prlt_address value;
			PREDA_CALL(Transaction_GetSender, (uint8_t*)&value);
			return value;
		}
		__prlt_uint64 __prli_get_timestamp()
		{
			return PREDA_CALL(Transaction_GetTimeStamp, );
		}
		__prlt_array<__prlt_address> __prli_get_signers()
		{
			if (__prli_get_type() != transaction_type::__prli_normal_type && __prli_get_type() != transaction_type::__prli_system_type)
				preda_exception::throw_exception("get_signer not available", prlrt::ExceptionType::AccessUnavailableContextFunction);
			__prlt_array<__prlt_address> ret;
			uint32_t numSigner = PREDA_CALL(Transaction_GetSignerCount, );
			for (uint32_t i = 0; i < numSigner; i++) {
				__prlt_address value;
				PREDA_CALL(Transaction_GetSigner, i, (uint8_t*)&value);
				ret.__prli_push(value);
			}
			return ret;
		}
		__prlt_bool __prli_verify_signer(__prlt_uint32 signerIdx)
		{
			if (__prli_get_type() != transaction_type::__prli_normal_type)
				return false;
			if (signerIdx._v >= PREDA_CALL(Transaction_GetSignerCount, ))
				return false;
			return PREDA_CALL(Transaction_VerifySignerByIndex, signerIdx._v);
		}
		__prlt_bool __prli_verify_signer(const __prlt_address &signerAddress)
		{
			if (__prli_get_type() != transaction_type::__prli_normal_type)
				return false;
			return PREDA_CALL(Transaction_VerifySignerByAddress, (const uint8_t *)&signerAddress);
		}
		__prlt_uint32 __prli_get_originated_shard_index()
		{
			if (__prli_get_type() != transaction_type::__prli_relay_type)
				preda_exception::throw_exception("get_originated_shard_index not available", prlrt::ExceptionType::AccessUnavailableContextFunction);
			return PREDA_CALL(Transaction_GetOriginatedShardIndex, );
		}
		__prlt_uint32 __prli_get_originated_shard_order()
		{
			if (__prli_get_type() != transaction_type::__prli_relay_type)
				preda_exception::throw_exception("get_originated_shard_order not available", prlrt::ExceptionType::AccessUnavailableContextFunction);
			return PREDA_CALL(Transaction_GetOriginatedShardOrder, );
		}
		__prlt_address __prli_get_initiator_address()
		{
			if (__prli_get_type() != transaction_type::__prli_relay_type)
				preda_exception::throw_exception("get_originated_address not available", prlrt::ExceptionType::AccessUnavailableContextFunction);
			__prlt_address value;
			PREDA_CALL(Transaction_GetInitiatorAddress, (uint8_t*)&value);
			return value;
		}
	};

}

prlrt::__prlt___transaction __prli___transaction;


using __prlt_uievent_state__ = prlrt::uievent_state;
using __prlt_uievent_state = prlrt::enum_wrapper<prlrt::uievent_state, 4>;

namespace prlrt {

	struct __prlt___event {
		__prlt_uievent_state __prli_get_user_state()
		{
			return PREDA_CALL(Event_GetUserState, );
		}
		void __prli_push(__prlt_uint32 id, __prlt_string data)
		{
			PREDA_CALL(Event_Push, id._v, data.ptr->str.c_str(), (uint16_t)data.ptr->str.length());
		}
		void __prli_notify(__prlt_uint32 id, __prlt_string data)
		{
			PREDA_CALL(Event_Notify, id._v, data.ptr->str.c_str(), (uint16_t)data.ptr->str.length());
		}
	};

}

prlrt::__prlt___event __prli___event;


namespace prlrt {

	struct __prlt___debug {

		// fallback of print() when preda is compiled with "nodebugprint" option
		void __prli_print_disabled()
		{
		}

		void __prli_print(uint32_t line)
		{
			PREDA_CALL(DebugPrintOutputBuffer, line);
		}

		template<typename TFirstArg, typename ...Args>
		void __prli_print(uint32_t line, const char *typeExportName, TFirstArg &&first_arg, Args &&...args)
		{
			std::vector<uint8_t> buffer(first_arg.get_serialize_size());
			first_arg.serialize_out(&buffer[0], true);
			PREDA_CALL(DebugPrintBufferAppendSerializedData, typeExportName, &buffer[0], (uint32_t)buffer.size());
			__prli_print(line, args...);
		}

		void __prli_assert(__prlt_bool condition, __prlt_uint32 line)
		{
			if (!condition._v)
			{
				PREDA_CALL(DebugAssertionFailure, line._v);
				preda_exception::throw_exception("assertion failure", prlrt::ExceptionType::AssertionFailure);
			}
		}

		void __prli_assert(__prlt_bool condition, __prlt_string message, __prlt_uint32 line)
		{
			if (!condition._v)
			{
				PREDA_CALL(DebugAssertionFailureMessage, line._v, message.ptr->str.c_str(), (uint32_t)message.ptr->str.length());
				preda_exception::throw_exception("assertion failure", prlrt::ExceptionType::AssertionFailure);
			}
		}

	};

}

prlrt::__prlt___debug __prli___debug;


namespace prlrt {
	struct __prlt__util {
		__prlt_array<__prlt_uint8> __prli_sha3(__prlt_array<__prlt_uint8> data)
		{
			prlrt::serialize_size_type s = data.get_serialize_size();
			uint8_t *buffer = new uint8_t[s];
			data.serialize_out(buffer, false);

			const uint32_t sha3_output_len = 32; 
			std::vector<uint8_t> output_buffer(sha3_output_len);

			PREDA_CALL(Util_SHA3, buffer, s, output_buffer.data(), sha3_output_len);

			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < sha3_output_len; ++i) {
        		ret.__prli_push(output_buffer[i]);
    		}
			delete [] buffer;
			return ret;
		}

		__prlt_array<__prlt_uint8> __prli_md5(__prlt_array<__prlt_uint8> data)
		{
			prlrt::serialize_size_type s = data.get_serialize_size();
			uint8_t *buffer = new uint8_t[s];
			data.serialize_out(buffer, false);

			const uint32_t output_len = 16; 
			std::vector<uint8_t> output_buffer(output_len);

			PREDA_CALL(Util_MD5, buffer, s,  output_buffer.data(), output_len);

			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < output_len; ++i) {
				ret.__prli_push(output_buffer[i]);
			}
			delete[] buffer;
			return ret;
		}

		__prlt_array<__prlt_uint8> __prli_sm3(__prlt_array<__prlt_uint8> data)
		{
			prlrt::serialize_size_type s = data.get_serialize_size();
			uint8_t *buffer = new uint8_t[s];
			data.serialize_out(buffer, false);

			const uint32_t output_len = 32; 
			std::vector<uint8_t> output_buffer(output_len);

			PREDA_CALL(Util_SM3,buffer, s,  output_buffer.data(), output_len);
			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < output_len; ++i) {
				ret.__prli_push(output_buffer[i]);
			}
			delete[] buffer;
			return ret;
		}

		__prlt_array<__prlt_uint8> __prli_sm4_enc(__prlt_array<__prlt_uint8> data, __prlt_array<__prlt_uint8> key)
		{
			auto data_size = data.__prli_length()._v;
			auto key_size = key.__prli_length()._v;
		
			uint8_t* data_buffer = new uint8_t[data_size];
			uint8_t* key_buffer = new uint8_t[key_size];

			for (auto i=0; i<data_size; i++) {
				data_buffer[i] = data[i]._v;
			}

			for (auto i=0; i<key_size; i++) {
				key_buffer[i] = key[i]._v;
			}

			const uint32_t block_size = 16;
			uint32_t padded_len = data_size + (block_size - (data_size % 16));
			std::vector<uint8_t> output_buffer(padded_len);

			PREDA_CALL(Util_SM4Enc, data_buffer, data_size, key_buffer, key_size, output_buffer.data(), padded_len);

			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < padded_len; ++i) {
				ret.__prli_push(output_buffer[i]);
			}

			delete[] data_buffer;
			delete[] key_buffer;

			return ret;
		}

		__prlt_array<__prlt_uint8> __prli_sm4_dec(__prlt_array<__prlt_uint8> encrypted, __prlt_array<__prlt_uint8> key)
		{
			auto encrypted_size = encrypted.__prli_length()._v;
			auto key_size = key.__prli_length()._v;

			uint8_t* encrypted_buffer = new uint8_t[encrypted_size];
			uint8_t* key_buffer = new uint8_t[key_size];

			for (auto i=0; i<encrypted_size; i++) {
				encrypted_buffer[i] = encrypted[i]._v;
			}

			for (auto i=0; i<key_size; i++) {
				key_buffer[i] = key[i]._v;
			}

			std::vector<uint8_t> output_buffer(encrypted_size);
			uint32_t out_len = encrypted_size;

			PREDA_CALL(Util_SM4Dec, encrypted_buffer, encrypted_size, key_buffer, key_size, output_buffer.data(), out_len);

			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < out_len; ++i) {
				ret.__prli_push(output_buffer[i]);
			}

			delete[] encrypted_buffer;
			delete[] key_buffer;

			return ret;
		}

		__prlt_array<__prlt_uint8> __prli_sm2_sign(__prlt_array<__prlt_uint8> data, __prlt_array<__prlt_uint8> private_key)
		{
			auto data_size = data.__prli_length()._v;
			auto key_size = private_key.__prli_length()._v;

			uint8_t* data_buffer = new uint8_t[data_size];
			uint8_t* key_buffer = new uint8_t[key_size];

			for (auto i=0; i<data_size; i++) {
				data_buffer[i] = data[i]._v;
			}

			for (auto i=0; i<key_size; i++) {
				key_buffer[i] = private_key[i]._v;
			}

			const uint32_t signature_len = 64;
			std::vector<uint8_t> signature_buffer(signature_len);

			PREDA_CALL(Util_SM2Sign, data_buffer, data_size, key_buffer, key_size, signature_buffer.data(), signature_len);

			__prlt_array<__prlt_uint8> ret;
			for (uint32_t i = 0; i < signature_len; ++i) {
				ret.__prli_push(signature_buffer[i]);
			}

			delete[] data_buffer;
			delete[] key_buffer;

			return ret;
		}

		__prlt_bool __prli_sm2_verify(__prlt_array<__prlt_uint8> data, __prlt_array<__prlt_uint8> signed_data, __prlt_array<__prlt_uint8> public_key)
		{
			auto data_size = data.__prli_length()._v;
			auto signature_size = signed_data.__prli_length()._v;
			auto key_size = public_key.__prli_length()._v;

			uint8_t* data_buffer = new uint8_t[data_size];
			uint8_t* signature_buffer = new uint8_t[signature_size];
			uint8_t* key_buffer = new uint8_t[key_size];

			for (auto i=0; i<data_size; i++) {
				data_buffer[i] = data[i]._v;
			}

			for (auto i=0; i<signature_size; i++) {
				signature_buffer[i] = signed_data[i]._v;
			}

			for (auto i=0; i<key_size; i++) {
				key_buffer[i] = public_key[i]._v;
			}

			bool result = PREDA_CALL(Util_SM2Verify, data_buffer, data_size, signature_buffer, signature_size, key_buffer, key_size);

			delete[] data_buffer;
			delete[] signature_buffer;
			delete[] key_buffer;

			return result ? __prlt_bool(true) : __prlt_bool(false);
		}
	};
}

prlrt::__prlt__util __prli___util;