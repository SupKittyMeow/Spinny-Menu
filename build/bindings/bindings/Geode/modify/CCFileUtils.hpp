#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addSearchPath
		#define GEODE_STATICS_addSearchPath
		GEODE_AS_STATIC_FUNCTION(addSearchPath) 
	#endif

	#ifndef GEODE_STATICS_addSearchResolutionsOrder
		#define GEODE_STATICS_addSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(addSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_addSuffix
		#define GEODE_STATICS_addSuffix
		GEODE_AS_STATIC_FUNCTION(addSuffix) 
	#endif

	#ifndef GEODE_STATICS_createCCArrayWithContentsOfFile
		#define GEODE_STATICS_createCCArrayWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCArrayWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createCCDictionaryWithContentsOfFile
		#define GEODE_STATICS_createCCDictionaryWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCDictionaryWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_fullPathForFilename
		#define GEODE_STATICS_fullPathForFilename
		GEODE_AS_STATIC_FUNCTION(fullPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_fullPathFromRelativeFile
		#define GEODE_STATICS_fullPathFromRelativeFile
		GEODE_AS_STATIC_FUNCTION(fullPathFromRelativeFile) 
	#endif

	#ifndef GEODE_STATICS_getAndroidPath
		#define GEODE_STATICS_getAndroidPath
		GEODE_AS_STATIC_FUNCTION(getAndroidPath) 
	#endif

	#ifndef GEODE_STATICS_getFileData
		#define GEODE_STATICS_getFileData
		GEODE_AS_STATIC_FUNCTION(getFileData) 
	#endif

	#ifndef GEODE_STATICS_getFileDataFromZip
		#define GEODE_STATICS_getFileDataFromZip
		GEODE_AS_STATIC_FUNCTION(getFileDataFromZip) 
	#endif

	#ifndef GEODE_STATICS_getFullPathForDirectoryAndFilename
		#define GEODE_STATICS_getFullPathForDirectoryAndFilename
		GEODE_AS_STATIC_FUNCTION(getFullPathForDirectoryAndFilename) 
	#endif

	#ifndef GEODE_STATICS_getNewFilename
		#define GEODE_STATICS_getNewFilename
		GEODE_AS_STATIC_FUNCTION(getNewFilename) 
	#endif

	#ifndef GEODE_STATICS_getPathForFilename
		#define GEODE_STATICS_getPathForFilename
		GEODE_AS_STATIC_FUNCTION(getPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_getSearchPaths
		#define GEODE_STATICS_getSearchPaths
		GEODE_AS_STATIC_FUNCTION(getSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_getSearchResolutionsOrder
		#define GEODE_STATICS_getSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(getSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_getWritablePath2
		#define GEODE_STATICS_getWritablePath2
		GEODE_AS_STATIC_FUNCTION(getWritablePath2) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isAbsolutePath
		#define GEODE_STATICS_isAbsolutePath
		GEODE_AS_STATIC_FUNCTION(isAbsolutePath) 
	#endif

	#ifndef GEODE_STATICS_isPopupNotify
		#define GEODE_STATICS_isPopupNotify
		GEODE_AS_STATIC_FUNCTION(isPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		#define GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		GEODE_AS_STATIC_FUNCTION(loadFilenameLookupDictionaryFromFile) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedEntries
		#define GEODE_STATICS_purgeCachedEntries
		GEODE_AS_STATIC_FUNCTION(purgeCachedEntries) 
	#endif

	#ifndef GEODE_STATICS_purgeFileUtils
		#define GEODE_STATICS_purgeFileUtils
		GEODE_AS_STATIC_FUNCTION(purgeFileUtils) 
	#endif

	#ifndef GEODE_STATICS_removeAllPaths
		#define GEODE_STATICS_removeAllPaths
		GEODE_AS_STATIC_FUNCTION(removeAllPaths) 
	#endif

	#ifndef GEODE_STATICS_removeFullPath
		#define GEODE_STATICS_removeFullPath
		GEODE_AS_STATIC_FUNCTION(removeFullPath) 
	#endif

	#ifndef GEODE_STATICS_removeSearchPath
		#define GEODE_STATICS_removeSearchPath
		GEODE_AS_STATIC_FUNCTION(removeSearchPath) 
	#endif

	#ifndef GEODE_STATICS_setAndroidPath
		#define GEODE_STATICS_setAndroidPath
		GEODE_AS_STATIC_FUNCTION(setAndroidPath) 
	#endif

	#ifndef GEODE_STATICS_setFilenameLookupDictionary
		#define GEODE_STATICS_setFilenameLookupDictionary
		GEODE_AS_STATIC_FUNCTION(setFilenameLookupDictionary) 
	#endif

	#ifndef GEODE_STATICS_setPopupNotify
		#define GEODE_STATICS_setPopupNotify
		GEODE_AS_STATIC_FUNCTION(setPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_setSearchPaths
		#define GEODE_STATICS_setSearchPaths
		GEODE_AS_STATIC_FUNCTION(setSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_setSearchResolutionsOrder
		#define GEODE_STATICS_setSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(setSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_sharedFileUtils
		#define GEODE_STATICS_sharedFileUtils
		GEODE_AS_STATIC_FUNCTION(sharedFileUtils) 
	#endif

	#ifndef GEODE_STATICS_shouldUseHD
		#define GEODE_STATICS_shouldUseHD
		GEODE_AS_STATIC_FUNCTION(shouldUseHD) 
	#endif

	#ifndef GEODE_STATICS_writeToFile
		#define GEODE_STATICS_writeToFile
		GEODE_AS_STATIC_FUNCTION(writeToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtils> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>::ModifyBase;
		using Base = cocos2d::CCFileUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419590, Default, cocos2d::CCFileUtils, addSuffix, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bb20, Default, cocos2d::CCFileUtils, getFullPathForDirectoryAndFilename, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419400, Default, cocos2d::CCFileUtils, getNewFilename, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4197b0, Default, cocos2d::CCFileUtils, getPathForFilename, gd::string const&, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bd50, Default, cocos2d::CCFileUtils, getWritablePath2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4190a0, Default, cocos2d::CCFileUtils, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bc90, Default, cocos2d::CCFileUtils, isAbsolutePath, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bcc0, Default, cocos2d::CCFileUtils, isPopupNotify, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bcb0, Default, cocos2d::CCFileUtils, setPopupNotify, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5d0020, Default, cocos2d::CCFileUtils, sharedFileUtils, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419560, Default, cocos2d::CCFileUtils, shouldUseHD, )
		}
	};
}
