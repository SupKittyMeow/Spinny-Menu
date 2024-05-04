#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupGameplayOffsetPopup.hpp>
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

	#ifndef GEODE_STATICS_onDefaultValues
		#define GEODE_STATICS_onDefaultValues
		GEODE_AS_STATIC_FUNCTION(onDefaultValues) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupGameplayOffsetPopup> : ModifyBase<ModifyDerive<Der, SetupGameplayOffsetPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupGameplayOffsetPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupGameplayOffsetPopup>>::ModifyBase;
		using Base = SetupGameplayOffsetPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75ad70, Default, SetupGameplayOffsetPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75ae80, Default, SetupGameplayOffsetPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75ae60, Default, SetupGameplayOffsetPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75ae10, Default, SetupGameplayOffsetPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75ae40, Default, SetupGameplayOffsetPopup, triggerSliderValueFromValue, int, float)
		}
	};
}
