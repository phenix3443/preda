#pragma once
#include "common.h"
#include "inttypes.h"
#include "address_blob_hash_types.h"
#include "arraytype.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <cctype>

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
		__prlt_array<__prlt_uint8> __prli_string_to_array(const __prlt_string& data) 
		{
			__prlt_array<__prlt_uint8> result;
			for (auto c : data.ptr->str) {
				result.__prli_push(static_cast<__prlt_uint8>(c));
			}
			return result;
		}

		__prlt_string __prli_array_to_string(const __prlt_array<__prlt_uint8>& data) 
		{
			__prlt_string result;
			for (auto b : data.ptr->v) {
				result.ptr->str += static_cast<char>(b._v);
			}
			return result;
		}

		__prlt_string __prli_hex_encode(const __prlt_array<__prlt_uint8>& input) 
		{
			std::stringstream ss;
			ss << std::hex << std::setfill('0');
			for (auto b : input.ptr->v) {
				ss << std::setw(2) << static_cast<int>(b._v);
			}
			__prlt_string result;
			result.ptr->str = ss.str();
			return result;
		}

		__prlt_array<__prlt_uint8> __prli_hex_decode(const __prlt_string& hex) 
		{
			if (hex.ptr->str.length() % 2 != 0) {
				throw std::invalid_argument("Invalid hex string: length must be even.");
			}

			__prlt_array<__prlt_uint8> bytes;
			bytes.ptr->set_length(hex.ptr->str.length() / 2);
			for (size_t i = 0; i < hex.ptr->str.length(); i += 2) {
				std::string byteString = hex.ptr->str.substr(i, 2);
				uint8_t byte = static_cast<uint8_t>(std::stoi(byteString, nullptr, 16));
				bytes.__prli_push(byte);
			}
			return bytes;
		}

		uint8_t* __prlt_array_to_uint8(const __prlt_array<__prlt_uint8>& data, size_t& out_size) 
		{
			out_size = data.__prli_length()._v;
			std::unique_ptr<uint8_t[]> buffer(new uint8_t[out_size]);
			for (size_t i = 0; i < out_size; ++i) {
				buffer[i] = data[i]._v;
			}
			return buffer.release();
		}

		__prlt_array<__prlt_uint8> vector_to_prlt_array(const std::vector<uint8_t>& input) 
		{
			__prlt_array<__prlt_uint8> result;
			for (auto b : input) {
				result.__prli_push(static_cast<__prlt_uint8>(b));
			}
			return result;
		}

		__prlt_array<__prlt_uint8> __prli_sha3(const __prlt_array<__prlt_uint8>& data) 
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			const uint32_t sha3_output_len = 32;
			std::vector<uint8_t> output_buffer(sha3_output_len);
			PREDA_CALL(Util_SHA3, data_buffer.get(), data_size, output_buffer.data(), sha3_output_len);
			return vector_to_prlt_array(output_buffer);
		}

		__prlt_array<__prlt_uint8> __prli_md5(const __prlt_array<__prlt_uint8>& data)
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			const uint32_t output_len = 16;
			std::vector<uint8_t> output_buffer(output_len);
			PREDA_CALL(Util_MD5, data_buffer.get(), data_size, output_buffer.data(), output_len);
			return vector_to_prlt_array(output_buffer);
		}

		__prlt_array<__prlt_uint8> __prli_sm3(const __prlt_array<__prlt_uint8>& data) 
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			const uint32_t output_len = 32;
			std::vector<uint8_t> output_buffer(output_len);
			PREDA_CALL(Util_SM3, data_buffer.get(), data_size, output_buffer.data(), output_len);
			return vector_to_prlt_array(output_buffer);
		}

		__prlt_array<__prlt_uint8> __prli_sm4_enc(const __prlt_array<__prlt_uint8>& data, const __prlt_array<__prlt_uint8>& key) 
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			size_t key_size;
			auto key_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(key, key_size));

			const uint32_t block_size = 16;
			uint32_t padded_len = data_size + (block_size - (data_size % block_size));
			std::vector<uint8_t> output_buffer(padded_len);
			PREDA_CALL(Util_SM4Enc, data_buffer.get(), data_size, key_buffer.get(), key_size, output_buffer.data(), padded_len);
			return vector_to_prlt_array(output_buffer);
		}

		__prlt_array<__prlt_uint8> __prli_sm4_dec(const __prlt_array<__prlt_uint8>& encrypted, const __prlt_array<__prlt_uint8>& key) 
		{
			size_t encrypted_size;
			auto encrypted_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(encrypted, encrypted_size));
			size_t key_size;
			auto key_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(key, key_size));

			std::vector<uint8_t> output_buffer(encrypted_size);
			uint32_t out_len;
			PREDA_CALL(Util_SM4Dec, encrypted_buffer.get(), encrypted_size, key_buffer.get(), key_size, output_buffer.data(), out_len);
			output_buffer.resize(out_len);
			return vector_to_prlt_array(output_buffer);
		}

		__prlt_array<__prlt_uint8> __prli_sm2_sign(const __prlt_array<__prlt_uint8>& data, const __prlt_array<__prlt_uint8>& private_key) 
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			size_t key_size;
			auto key_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(private_key, key_size));

			const uint32_t signature_len = 64;
			std::vector<uint8_t> signature_buffer(signature_len);
			PREDA_CALL(Util_SM2Sign, data_buffer.get(), data_size, key_buffer.get(), key_size, signature_buffer.data(), signature_len);
			return vector_to_prlt_array(signature_buffer);
		}

		__prlt_bool __prli_sm2_verify(const __prlt_array<__prlt_uint8>& data, const __prlt_array<__prlt_uint8>& signature, const __prlt_array<__prlt_uint8>& public_key) 
		{
			size_t data_size;
			auto data_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(data, data_size));
			size_t signature_size;
			auto signature_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(signature, signature_size));
			size_t key_size;
			auto key_buffer = std::unique_ptr<uint8_t[]>(__prlt_array_to_uint8(public_key, key_size));
			bool result = PREDA_CALL(Util_SM2Verify, data_buffer.get(), data_size, signature_buffer.get(), signature_size, key_buffer.get(), key_size);
			return result ? __prlt_bool(true) : __prlt_bool(false);
		}
	};
}

prlrt::__prlt__util __prli___util;