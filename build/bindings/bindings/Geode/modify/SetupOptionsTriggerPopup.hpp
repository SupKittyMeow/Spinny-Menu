#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupOptionsTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_addOption
		#define GEODE_STATICS_addOption
		GEODE_AS_STATIC_FUNCTION(addOption) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupOptionsTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>::ModifyBase;
		using Base = SetupOptionsTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ac540, Default, SetupOptionsTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
		}
	};
}
