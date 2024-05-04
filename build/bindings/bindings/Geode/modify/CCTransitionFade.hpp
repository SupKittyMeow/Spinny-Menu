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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionFade> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFade>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFade>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFade>>::ModifyBase;
		using Base = cocos2d::CCTransitionFade;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4dd0, Default, cocos2d::CCTransitionFade, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4cd0, Default, cocos2d::CCTransitionFade, create, float, cocos2d::CCScene*, cocos2d::_ccColor3B const&)
		}
	};
}
