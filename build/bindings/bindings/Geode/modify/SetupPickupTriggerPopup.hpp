#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPickupTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupPickupTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupPickupTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPickupTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPickupTriggerPopup>>::ModifyBase;
		using Base = SetupPickupTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c4f0, Default, SetupPickupTriggerPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c530, Default, SetupPickupTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
		}
	};
}
