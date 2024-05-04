#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		#define GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(PVRImagesHavePremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_defaultAlphaPixelFormat
		#define GEODE_STATICS_defaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(defaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_setDefaultAlphaPixelFormat
		#define GEODE_STATICS_setDefaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(setDefaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_initPremultipliedATextureWithImage
		#define GEODE_STATICS_initPremultipliedATextureWithImage
		GEODE_AS_STATIC_FUNCTION(initPremultipliedATextureWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithData
		#define GEODE_STATICS_initWithData
		GEODE_AS_STATIC_FUNCTION(initWithData) 
	#endif

	#ifndef GEODE_STATICS_initWithETCFile
		#define GEODE_STATICS_initWithETCFile
		GEODE_AS_STATIC_FUNCTION(initWithETCFile) 
	#endif

	#ifndef GEODE_STATICS_initWithImage
		#define GEODE_STATICS_initWithImage
		GEODE_AS_STATIC_FUNCTION(initWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithPVRFile
		#define GEODE_STATICS_initWithPVRFile
		GEODE_AS_STATIC_FUNCTION(initWithPVRFile) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_getContentSizeInPixels
		#define GEODE_STATICS_getContentSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getContentSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_setAliasTexParameters
		#define GEODE_STATICS_setAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setAntiAliasTexParameters
		#define GEODE_STATICS_setAntiAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAntiAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setTexParameters
		#define GEODE_STATICS_setTexParameters
		GEODE_AS_STATIC_FUNCTION(setTexParameters) 
	#endif

	#ifndef GEODE_STATICS_bitsPerPixelForFormat
		#define GEODE_STATICS_bitsPerPixelForFormat
		GEODE_AS_STATIC_FUNCTION(bitsPerPixelForFormat) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_drawAtPoint
		#define GEODE_STATICS_drawAtPoint
		GEODE_AS_STATIC_FUNCTION(drawAtPoint) 
	#endif

	#ifndef GEODE_STATICS_drawInRect
		#define GEODE_STATICS_drawInRect
		GEODE_AS_STATIC_FUNCTION(drawInRect) 
	#endif

	#ifndef GEODE_STATICS_generateMipmap
		#define GEODE_STATICS_generateMipmap
		GEODE_AS_STATIC_FUNCTION(generateMipmap) 
	#endif

	#ifndef GEODE_STATICS_hasMipmaps
		#define GEODE_STATICS_hasMipmaps
		GEODE_AS_STATIC_FUNCTION(hasMipmaps) 
	#endif

	#ifndef GEODE_STATICS_hasPremultipliedAlpha
		#define GEODE_STATICS_hasPremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(hasPremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_keepData
		#define GEODE_STATICS_keepData
		GEODE_AS_STATIC_FUNCTION(keepData) 
	#endif

	#ifndef GEODE_STATICS_releaseData
		#define GEODE_STATICS_releaseData
		GEODE_AS_STATIC_FUNCTION(releaseData) 
	#endif

	#ifndef GEODE_STATICS_releaseGLTexture
		#define GEODE_STATICS_releaseGLTexture
		GEODE_AS_STATIC_FUNCTION(releaseGLTexture) 
	#endif

	#ifndef GEODE_STATICS_stringForFormat
		#define GEODE_STATICS_stringForFormat
		GEODE_AS_STATIC_FUNCTION(stringForFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelFormat
		#define GEODE_STATICS_getPixelFormat
		GEODE_AS_STATIC_FUNCTION(getPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelsWide
		#define GEODE_STATICS_getPixelsWide
		GEODE_AS_STATIC_FUNCTION(getPixelsWide) 
	#endif

	#ifndef GEODE_STATICS_getPixelsHigh
		#define GEODE_STATICS_getPixelsHigh
		GEODE_AS_STATIC_FUNCTION(getPixelsHigh) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_getMaxS
		#define GEODE_STATICS_getMaxS
		GEODE_AS_STATIC_FUNCTION(getMaxS) 
	#endif

	#ifndef GEODE_STATICS_setMaxS
		#define GEODE_STATICS_setMaxS
		GEODE_AS_STATIC_FUNCTION(setMaxS) 
	#endif

	#ifndef GEODE_STATICS_getMaxT
		#define GEODE_STATICS_getMaxT
		GEODE_AS_STATIC_FUNCTION(getMaxT) 
	#endif

	#ifndef GEODE_STATICS_setMaxT
		#define GEODE_STATICS_setMaxT
		GEODE_AS_STATIC_FUNCTION(setMaxT) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_getShaderProgram
		#define GEODE_STATICS_getShaderProgram
		GEODE_AS_STATIC_FUNCTION(getShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_setShaderProgram
		#define GEODE_STATICS_setShaderProgram
		GEODE_AS_STATIC_FUNCTION(setShaderProgram) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTexture2D> : ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>::ModifyBase;
		using Base = cocos2d::CCTexture2D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457000, Default, cocos2d::CCTexture2D, PVRImagesHavePremultipliedAlpha, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4571c0, Default, cocos2d::CCTexture2D, setDefaultAlphaPixelFormat, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456180, Default, cocos2d::CCTexture2D, initPremultipliedATextureWithImage, cocos2d::CCImage*, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455dc0, Default, cocos2d::CCTexture2D, initWithData, void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456120, Default, cocos2d::CCTexture2D, initWithImage, cocos2d::CCImage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4570f0, Default, cocos2d::CCTexture2D, setAliasTexParameters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457060, Default, cocos2d::CCTexture2D, setTexParameters, cocos2d::_ccTexParams*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x455b70, Default, cocos2d::CCTexture2D)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x455ac0, Default, cocos2d::CCTexture2D, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c10, Default, cocos2d::CCTexture2D, getPixelFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c20, Default, cocos2d::CCTexture2D, getPixelsWide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c30, Default, cocos2d::CCTexture2D, getPixelsHigh, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c40, Default, cocos2d::CCTexture2D, getName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455cd0, Default, cocos2d::CCTexture2D, getMaxS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455ce0, Default, cocos2d::CCTexture2D, setMaxS, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455cf0, Default, cocos2d::CCTexture2D, getMaxT, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455d00, Default, cocos2d::CCTexture2D, setMaxT, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c50, Default, cocos2d::CCTexture2D, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455d10, Default, cocos2d::CCTexture2D, getShaderProgram, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455d20, Default, cocos2d::CCTexture2D, setShaderProgram, cocos2d::CCGLProgram*)
		}
	};
}
