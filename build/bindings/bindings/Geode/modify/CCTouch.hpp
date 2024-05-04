#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getID
		#define GEODE_STATICS_getID
		GEODE_AS_STATIC_FUNCTION(getID) 
	#endif

	#ifndef GEODE_STATICS_getLocation
		#define GEODE_STATICS_getLocation
		GEODE_AS_STATIC_FUNCTION(getLocation) 
	#endif

	#ifndef GEODE_STATICS_getLocationInView
		#define GEODE_STATICS_getLocationInView
		GEODE_AS_STATIC_FUNCTION(getLocationInView) 
	#endif

	#ifndef GEODE_STATICS_getPreviousLocationInView
		#define GEODE_STATICS_getPreviousLocationInView
		GEODE_AS_STATIC_FUNCTION(getPreviousLocationInView) 
	#endif

	#ifndef GEODE_STATICS_getStartLocation
		#define GEODE_STATICS_getStartLocation
		GEODE_AS_STATIC_FUNCTION(getStartLocation) 
	#endif

	#ifndef GEODE_STATICS_getStartLocationInView
		#define GEODE_STATICS_getStartLocationInView
		GEODE_AS_STATIC_FUNCTION(getStartLocationInView) 
	#endif

	#ifndef GEODE_STATICS_setTouchInfo
		#define GEODE_STATICS_setTouchInfo
		GEODE_AS_STATIC_FUNCTION(setTouchInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouch> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>::ModifyBase;
		using Base = cocos2d::CCTouch;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c750, Default, cocos2d::CCTouch, getLocation, )
		}
	};
}
