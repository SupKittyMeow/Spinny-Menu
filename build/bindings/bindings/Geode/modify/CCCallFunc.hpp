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

	#ifndef GEODE_STATICS_getScriptHandler
		#define GEODE_STATICS_getScriptHandler
		GEODE_AS_STATIC_FUNCTION(getScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_getTargetCallback
		#define GEODE_STATICS_getTargetCallback
		GEODE_AS_STATIC_FUNCTION(getTargetCallback) 
	#endif

	#ifndef GEODE_STATICS_setTargetCallback
		#define GEODE_STATICS_setTargetCallback
		GEODE_AS_STATIC_FUNCTION(setTargetCallback) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_execute
		#define GEODE_STATICS_execute
		GEODE_AS_STATIC_FUNCTION(execute) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCallFunc> : ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>::ModifyBase;
		using Base = cocos2d::CCCallFunc;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76e860, Default, cocos2d::CCCallFunc, create, cocos2d::CCObject*, cocos2d::SEL_CallFunc)
		}
	};
}
