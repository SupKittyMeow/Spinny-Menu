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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTintTo> : ModifyBase<ModifyDerive<Der, cocos2d::CCTintTo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTintTo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTintTo>>::ModifyBase;
		using Base = cocos2d::CCTintTo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x399290, Default, cocos2d::CCTintTo, create, float, unsigned char, unsigned char, unsigned char)
		}
	};
}
