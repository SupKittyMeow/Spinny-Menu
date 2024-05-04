#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupStopTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupStopTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupStopTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupStopTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupStopTriggerPopup>>::ModifyBase;
		using Base = SetupStopTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x551990, Default, SetupStopTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x551a00, Default, SetupStopTriggerPopup, onClose, cocos2d::CCObject*)
		}
	};
}
