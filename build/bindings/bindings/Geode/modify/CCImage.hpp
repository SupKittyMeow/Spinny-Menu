#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_initWithImageData
		#define GEODE_STATICS_initWithImageData
		GEODE_AS_STATIC_FUNCTION(initWithImageData) 
	#endif

	#ifndef GEODE_STATICS_initWithImageFile
		#define GEODE_STATICS_initWithImageFile
		GEODE_AS_STATIC_FUNCTION(initWithImageFile) 
	#endif

	#ifndef GEODE_STATICS_initWithImageFileThreadSafe
		#define GEODE_STATICS_initWithImageFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(initWithImageFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_getBitsPerComponent
		#define GEODE_STATICS_getBitsPerComponent
		GEODE_AS_STATIC_FUNCTION(getBitsPerComponent) 
	#endif

	#ifndef GEODE_STATICS_getData
		#define GEODE_STATICS_getData
		GEODE_AS_STATIC_FUNCTION(getData) 
	#endif

	#ifndef GEODE_STATICS_getDataLen
		#define GEODE_STATICS_getDataLen
		GEODE_AS_STATIC_FUNCTION(getDataLen) 
	#endif

	#ifndef GEODE_STATICS_getHeight
		#define GEODE_STATICS_getHeight
		GEODE_AS_STATIC_FUNCTION(getHeight) 
	#endif

	#ifndef GEODE_STATICS_getWidth
		#define GEODE_STATICS_getWidth
		GEODE_AS_STATIC_FUNCTION(getWidth) 
	#endif

	#ifndef GEODE_STATICS__initWithJpgData
		#define GEODE_STATICS__initWithJpgData
		GEODE_AS_STATIC_FUNCTION(_initWithJpgData) 
	#endif

	#ifndef GEODE_STATICS__initWithPngData
		#define GEODE_STATICS__initWithPngData
		GEODE_AS_STATIC_FUNCTION(_initWithPngData) 
	#endif

	#ifndef GEODE_STATICS__initWithRawData
		#define GEODE_STATICS__initWithRawData
		GEODE_AS_STATIC_FUNCTION(_initWithRawData) 
	#endif

	#ifndef GEODE_STATICS__initWithTiffData
		#define GEODE_STATICS__initWithTiffData
		GEODE_AS_STATIC_FUNCTION(_initWithTiffData) 
	#endif

	#ifndef GEODE_STATICS__initWithWebpData
		#define GEODE_STATICS__initWithWebpData
		GEODE_AS_STATIC_FUNCTION(_initWithWebpData) 
	#endif

	#ifndef GEODE_STATICS__saveImageToJPG
		#define GEODE_STATICS__saveImageToJPG
		GEODE_AS_STATIC_FUNCTION(_saveImageToJPG) 
	#endif

	#ifndef GEODE_STATICS__saveImageToPNG
		#define GEODE_STATICS__saveImageToPNG
		GEODE_AS_STATIC_FUNCTION(_saveImageToPNG) 
	#endif

	#ifndef GEODE_STATICS_hasAlpha
		#define GEODE_STATICS_hasAlpha
		GEODE_AS_STATIC_FUNCTION(hasAlpha) 
	#endif

	#ifndef GEODE_STATICS_isPremultipliedAlpha
		#define GEODE_STATICS_isPremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(isPremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_saveToFile
		#define GEODE_STATICS_saveToFile
		GEODE_AS_STATIC_FUNCTION(saveToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCImage> : ModifyBase<ModifyDerive<Der, cocos2d::CCImage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>::ModifyBase;
		using Base = cocos2d::CCImage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x466190, Default, cocos2d::CCImage, initWithImageData, void*, int, cocos2d::CCImage::EImageFormat, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x465e80, Default, cocos2d::CCImage, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x465f00, Default, cocos2d::CCImage)
		}
	};
}
