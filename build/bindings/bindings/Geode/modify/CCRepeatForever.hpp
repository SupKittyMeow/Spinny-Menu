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

	#ifndef GEODE_STATICS_initWithAction
		#define GEODE_STATICS_initWithAction
		GEODE_AS_STATIC_FUNCTION(initWithAction) 
	#endif

	#ifndef GEODE_STATICS_getInnerAction
		#define GEODE_STATICS_getInnerAction
		GEODE_AS_STATIC_FUNCTION(getInnerAction) 
	#endif

	#ifndef GEODE_STATICS_setInnerAction
		#define GEODE_STATICS_setInnerAction
		GEODE_AS_STATIC_FUNCTION(setInnerAction) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRepeatForever> : ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>>::ModifyBase;
		using Base = cocos2d::CCRepeatForever;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x394830, Default, cocos2d::CCRepeatForever, create, cocos2d::CCActionInterval*)
		}
	};
}
