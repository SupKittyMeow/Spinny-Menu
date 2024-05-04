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

	#ifndef GEODE_STATICS_initWithFade
		#define GEODE_STATICS_initWithFade
		GEODE_AS_STATIC_FUNCTION(initWithFade) 
	#endif

	#ifndef GEODE_STATICS_getDontOpacityFade
		#define GEODE_STATICS_getDontOpacityFade
		GEODE_AS_STATIC_FUNCTION(getDontOpacityFade) 
	#endif

	#ifndef GEODE_STATICS_getM_fMaxSeg
		#define GEODE_STATICS_getM_fMaxSeg
		GEODE_AS_STATIC_FUNCTION(getM_fMaxSeg) 
	#endif

	#ifndef GEODE_STATICS_setDontOpacityFade
		#define GEODE_STATICS_setDontOpacityFade
		GEODE_AS_STATIC_FUNCTION(setDontOpacityFade) 
	#endif

	#ifndef GEODE_STATICS_setFastMode
		#define GEODE_STATICS_setFastMode
		GEODE_AS_STATIC_FUNCTION(setFastMode) 
	#endif

	#ifndef GEODE_STATICS_setM_fMaxSeg
		#define GEODE_STATICS_setM_fMaxSeg
		GEODE_AS_STATIC_FUNCTION(setM_fMaxSeg) 
	#endif

	#ifndef GEODE_STATICS_setStartingPositionInitialized
		#define GEODE_STATICS_setStartingPositionInitialized
		GEODE_AS_STATIC_FUNCTION(setStartingPositionInitialized) 
	#endif

	#ifndef GEODE_STATICS_setStroke
		#define GEODE_STATICS_setStroke
		GEODE_AS_STATIC_FUNCTION(setStroke) 
	#endif

	#ifndef GEODE_STATICS_enableRepeatMode
		#define GEODE_STATICS_enableRepeatMode
		GEODE_AS_STATIC_FUNCTION(enableRepeatMode) 
	#endif

	#ifndef GEODE_STATICS_isFastMode
		#define GEODE_STATICS_isFastMode
		GEODE_AS_STATIC_FUNCTION(isFastMode) 
	#endif

	#ifndef GEODE_STATICS_isStartingPositionInitialized
		#define GEODE_STATICS_isStartingPositionInitialized
		GEODE_AS_STATIC_FUNCTION(isStartingPositionInitialized) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resumeStroke
		#define GEODE_STATICS_resumeStroke
		GEODE_AS_STATIC_FUNCTION(resumeStroke) 
	#endif

	#ifndef GEODE_STATICS_stopStroke
		#define GEODE_STATICS_stopStroke
		GEODE_AS_STATIC_FUNCTION(stopStroke) 
	#endif

	#ifndef GEODE_STATICS_tintWithColor
		#define GEODE_STATICS_tintWithColor
		GEODE_AS_STATIC_FUNCTION(tintWithColor) 
	#endif

	#ifndef GEODE_STATICS_updateFade
		#define GEODE_STATICS_updateFade
		GEODE_AS_STATIC_FUNCTION(updateFade) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMotionStreak> : ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>>::ModifyBase;
		using Base = cocos2d::CCMotionStreak;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5421f0, Default, cocos2d::CCMotionStreak, setStroke, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x541b90, Default, cocos2d::CCMotionStreak, updateFade, float)
		}
	};
}
