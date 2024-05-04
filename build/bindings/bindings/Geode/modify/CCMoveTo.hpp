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

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMoveTo> : ModifyBase<ModifyDerive<Der, cocos2d::CCMoveTo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMoveTo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMoveTo>>::ModifyBase;
		using Base = cocos2d::CCMoveTo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3964a0, Default, cocos2d::CCMoveTo, create, float, cocos2d::CCPoint const&)
		}
	};
}
