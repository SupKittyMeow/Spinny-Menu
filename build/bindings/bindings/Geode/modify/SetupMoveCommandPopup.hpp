#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupMoveCommandPopup.hpp>
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

	#ifndef GEODE_STATICS_updateControlVisibility
		#define GEODE_STATICS_updateControlVisibility
		GEODE_AS_STATIC_FUNCTION(updateControlVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
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
	struct ModifyDerive<Der, SetupMoveCommandPopup> : ModifyBase<ModifyDerive<Der, SetupMoveCommandPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupMoveCommandPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupMoveCommandPopup>>::ModifyBase;
		using Base = SetupMoveCommandPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd6d0, Default, SetupMoveCommandPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd490, Default, SetupMoveCommandPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd450, Default, SetupMoveCommandPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd4d0, Default, SetupMoveCommandPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd370, Default, SetupMoveCommandPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cd3c0, Default, SetupMoveCommandPopup, triggerSliderValueFromValue, int, float)
		}
	};
}
