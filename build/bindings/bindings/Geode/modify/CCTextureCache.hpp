#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedTextureCache
		#define GEODE_STATICS_purgeSharedTextureCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedTextureCache) 
	#endif

	#ifndef GEODE_STATICS_reloadAllTextures
		#define GEODE_STATICS_reloadAllTextures
		GEODE_AS_STATIC_FUNCTION(reloadAllTextures) 
	#endif

	#ifndef GEODE_STATICS_sharedTextureCache
		#define GEODE_STATICS_sharedTextureCache
		GEODE_AS_STATIC_FUNCTION(sharedTextureCache) 
	#endif

	#ifndef GEODE_STATICS_addETCImage
		#define GEODE_STATICS_addETCImage
		GEODE_AS_STATIC_FUNCTION(addETCImage) 
	#endif

	#ifndef GEODE_STATICS_addImage
		#define GEODE_STATICS_addImage
		GEODE_AS_STATIC_FUNCTION(addImage) 
	#endif

	#ifndef GEODE_STATICS_addImageAsync
		#define GEODE_STATICS_addImageAsync
		GEODE_AS_STATIC_FUNCTION(addImageAsync) 
	#endif

	#ifndef GEODE_STATICS_addImageAsyncCallBack
		#define GEODE_STATICS_addImageAsyncCallBack
		GEODE_AS_STATIC_FUNCTION(addImageAsyncCallBack) 
	#endif

	#ifndef GEODE_STATICS_addPVRImage
		#define GEODE_STATICS_addPVRImage
		GEODE_AS_STATIC_FUNCTION(addPVRImage) 
	#endif

	#ifndef GEODE_STATICS_addUIImage
		#define GEODE_STATICS_addUIImage
		GEODE_AS_STATIC_FUNCTION(addUIImage) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_dumpCachedTextureInfo
		#define GEODE_STATICS_dumpCachedTextureInfo
		GEODE_AS_STATIC_FUNCTION(dumpCachedTextureInfo) 
	#endif

	#ifndef GEODE_STATICS_prepareAsyncLoading
		#define GEODE_STATICS_prepareAsyncLoading
		GEODE_AS_STATIC_FUNCTION(prepareAsyncLoading) 
	#endif

	#ifndef GEODE_STATICS_reloadTexture
		#define GEODE_STATICS_reloadTexture
		GEODE_AS_STATIC_FUNCTION(reloadTexture) 
	#endif

	#ifndef GEODE_STATICS_removeAllTextures
		#define GEODE_STATICS_removeAllTextures
		GEODE_AS_STATIC_FUNCTION(removeAllTextures) 
	#endif

	#ifndef GEODE_STATICS_removeTexture
		#define GEODE_STATICS_removeTexture
		GEODE_AS_STATIC_FUNCTION(removeTexture) 
	#endif

	#ifndef GEODE_STATICS_removeTextureForKey
		#define GEODE_STATICS_removeTextureForKey
		GEODE_AS_STATIC_FUNCTION(removeTextureForKey) 
	#endif

	#ifndef GEODE_STATICS_removeUnusedTextures
		#define GEODE_STATICS_removeUnusedTextures
		GEODE_AS_STATIC_FUNCTION(removeUnusedTextures) 
	#endif

	#ifndef GEODE_STATICS_snapshotTextures
		#define GEODE_STATICS_snapshotTextures
		GEODE_AS_STATIC_FUNCTION(snapshotTextures) 
	#endif

	#ifndef GEODE_STATICS_textureForKey
		#define GEODE_STATICS_textureForKey
		GEODE_AS_STATIC_FUNCTION(textureForKey) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextureCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>>::ModifyBase;
		using Base = cocos2d::CCTextureCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b16d0, Default, cocos2d::CCTextureCache, purgeSharedTextureCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b1450, Default, cocos2d::CCTextureCache, sharedTextureCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b2630, Default, cocos2d::CCTextureCache, addImage, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b18d0, Default, cocos2d::CCTextureCache, addImageAsync, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, int, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b3350, Default, cocos2d::CCTextureCache, addUIImage, cocos2d::CCImage*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b38d0, Default, cocos2d::CCTextureCache, removeTextureForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b3950, Default, cocos2d::CCTextureCache, textureForKey, char const*)
		}
	};
}
