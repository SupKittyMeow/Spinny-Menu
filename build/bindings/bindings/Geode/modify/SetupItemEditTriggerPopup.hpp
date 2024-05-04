#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupItemEditTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onOpButton
		#define GEODE_STATICS_onOpButton
		GEODE_AS_STATIC_FUNCTION(onOpButton) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_updateOpButton
		#define GEODE_STATICS_updateOpButton
		GEODE_AS_STATIC_FUNCTION(updateOpButton) 
	#endif

	#ifndef GEODE_STATICS_updateFormulaLabel
		#define GEODE_STATICS_updateFormulaLabel
		GEODE_AS_STATIC_FUNCTION(updateFormulaLabel) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupItemEditTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>>::ModifyBase;
		using Base = SetupItemEditTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54b700, Default, SetupItemEditTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54b8e0, Default, SetupItemEditTriggerPopup, valueDidChange, int, float)
		}
	};
}
