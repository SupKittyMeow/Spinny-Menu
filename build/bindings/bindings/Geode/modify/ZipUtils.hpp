#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_base64DecodeEnc
		#define GEODE_STATICS_base64DecodeEnc
		GEODE_AS_STATIC_FUNCTION(base64DecodeEnc) 
	#endif

	#ifndef GEODE_STATICS_base64EncodeEnc
		#define GEODE_STATICS_base64EncodeEnc
		GEODE_AS_STATIC_FUNCTION(base64EncodeEnc) 
	#endif

	#ifndef GEODE_STATICS_base64URLDecode
		#define GEODE_STATICS_base64URLDecode
		GEODE_AS_STATIC_FUNCTION(base64URLDecode) 
	#endif

	#ifndef GEODE_STATICS_base64URLEncode
		#define GEODE_STATICS_base64URLEncode
		GEODE_AS_STATIC_FUNCTION(base64URLEncode) 
	#endif

	#ifndef GEODE_STATICS_ccChecksumPvr
		#define GEODE_STATICS_ccChecksumPvr
		GEODE_AS_STATIC_FUNCTION(ccChecksumPvr) 
	#endif

	#ifndef GEODE_STATICS_ccDecodeEncodedPvr
		#define GEODE_STATICS_ccDecodeEncodedPvr
		GEODE_AS_STATIC_FUNCTION(ccDecodeEncodedPvr) 
	#endif

	#ifndef GEODE_STATICS_ccDeflateMemory
		#define GEODE_STATICS_ccDeflateMemory
		GEODE_AS_STATIC_FUNCTION(ccDeflateMemory) 
	#endif

	#ifndef GEODE_STATICS_ccInflateCCZFile
		#define GEODE_STATICS_ccInflateCCZFile
		GEODE_AS_STATIC_FUNCTION(ccInflateCCZFile) 
	#endif

	#ifndef GEODE_STATICS_ccInflateGZipFile
		#define GEODE_STATICS_ccInflateGZipFile
		GEODE_AS_STATIC_FUNCTION(ccInflateGZipFile) 
	#endif

	#ifndef GEODE_STATICS_ccInflateMemory
		#define GEODE_STATICS_ccInflateMemory
		GEODE_AS_STATIC_FUNCTION(ccInflateMemory) 
	#endif

	#ifndef GEODE_STATICS_ccInflateMemoryWithHint
		#define GEODE_STATICS_ccInflateMemoryWithHint
		GEODE_AS_STATIC_FUNCTION(ccInflateMemoryWithHint) 
	#endif

	#ifndef GEODE_STATICS_ccSetPvrEncryptionKey
		#define GEODE_STATICS_ccSetPvrEncryptionKey
		GEODE_AS_STATIC_FUNCTION(ccSetPvrEncryptionKey) 
	#endif

	#ifndef GEODE_STATICS_ccSetPvrEncryptionKeyPart
		#define GEODE_STATICS_ccSetPvrEncryptionKeyPart
		GEODE_AS_STATIC_FUNCTION(ccSetPvrEncryptionKeyPart) 
	#endif

	#ifndef GEODE_STATICS_compressString
		#define GEODE_STATICS_compressString
		GEODE_AS_STATIC_FUNCTION(compressString) 
	#endif

	#ifndef GEODE_STATICS_decompressString2
		#define GEODE_STATICS_decompressString2
		GEODE_AS_STATIC_FUNCTION(decompressString2) 
	#endif

	#ifndef GEODE_STATICS_decompressString
		#define GEODE_STATICS_decompressString
		GEODE_AS_STATIC_FUNCTION(decompressString) 
	#endif

	#ifndef GEODE_STATICS_encryptDecrypt
		#define GEODE_STATICS_encryptDecrypt
		GEODE_AS_STATIC_FUNCTION(encryptDecrypt) 
	#endif

	#ifndef GEODE_STATICS_encryptDecryptWKey
		#define GEODE_STATICS_encryptDecryptWKey
		GEODE_AS_STATIC_FUNCTION(encryptDecryptWKey) 
	#endif

	#ifndef GEODE_STATICS_hexToChar
		#define GEODE_STATICS_hexToChar
		GEODE_AS_STATIC_FUNCTION(hexToChar) 
	#endif

	#ifndef GEODE_STATICS_urlDecode
		#define GEODE_STATICS_urlDecode
		GEODE_AS_STATIC_FUNCTION(urlDecode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::ZipUtils> : ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>>::ModifyBase;
		using Base = cocos2d::ZipUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e4960, Default, cocos2d::ZipUtils, base64URLEncode, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e3e60, Default, cocos2d::ZipUtils, ccDeflateMemory, unsigned char*, unsigned int, unsigned char**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e3c50, Default, cocos2d::ZipUtils, compressString, gd::string const&, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e4290, Default, cocos2d::ZipUtils, decompressString, gd::string const&, bool, int)
		}
	};
}
