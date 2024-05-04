#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTextureFilename
		#define GEODE_STATICS_initWithTextureFilename
		GEODE_AS_STATIC_FUNCTION(initWithTextureFilename) 
	#endif

	#ifndef GEODE_STATICS_getFrameName
		#define GEODE_STATICS_getFrameName
		GEODE_AS_STATIC_FUNCTION(getFrameName) 
	#endif

	#ifndef GEODE_STATICS_getOffset
		#define GEODE_STATICS_getOffset
		GEODE_AS_STATIC_FUNCTION(getOffset) 
	#endif

	#ifndef GEODE_STATICS_getOffsetInPixels
		#define GEODE_STATICS_getOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(getOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_getOriginalSize
		#define GEODE_STATICS_getOriginalSize
		GEODE_AS_STATIC_FUNCTION(getOriginalSize) 
	#endif

	#ifndef GEODE_STATICS_getOriginalSizeInPixels
		#define GEODE_STATICS_getOriginalSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_getRect
		#define GEODE_STATICS_getRect
		GEODE_AS_STATIC_FUNCTION(getRect) 
	#endif

	#ifndef GEODE_STATICS_getRectInPixels
		#define GEODE_STATICS_getRectInPixels
		GEODE_AS_STATIC_FUNCTION(getRectInPixels) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setFrameName
		#define GEODE_STATICS_setFrameName
		GEODE_AS_STATIC_FUNCTION(setFrameName) 
	#endif

	#ifndef GEODE_STATICS_setOffset
		#define GEODE_STATICS_setOffset
		GEODE_AS_STATIC_FUNCTION(setOffset) 
	#endif

	#ifndef GEODE_STATICS_setOffsetInPixels
		#define GEODE_STATICS_setOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(setOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_setOriginalSize
		#define GEODE_STATICS_setOriginalSize
		GEODE_AS_STATIC_FUNCTION(setOriginalSize) 
	#endif

	#ifndef GEODE_STATICS_setOriginalSizeInPixels
		#define GEODE_STATICS_setOriginalSizeInPixels
		GEODE_AS_STATIC_FUNCTION(setOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_setRect
		#define GEODE_STATICS_setRect
		GEODE_AS_STATIC_FUNCTION(setRect) 
	#endif

	#ifndef GEODE_STATICS_setRectInPixels
		#define GEODE_STATICS_setRectInPixels
		GEODE_AS_STATIC_FUNCTION(setRectInPixels) 
	#endif

	#ifndef GEODE_STATICS_setRotated
		#define GEODE_STATICS_setRotated
		GEODE_AS_STATIC_FUNCTION(setRotated) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_isRotated
		#define GEODE_STATICS_isRotated
		GEODE_AS_STATIC_FUNCTION(isRotated) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteFrame> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>::ModifyBase;
		using Base = cocos2d::CCSpriteFrame;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x337280, Default, cocos2d::CCSpriteFrame, getTexture, )
		}
	};
}
