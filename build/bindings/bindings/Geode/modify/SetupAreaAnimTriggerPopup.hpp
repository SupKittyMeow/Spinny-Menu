#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaAnimTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onDeactivateAnimValue
		#define GEODE_STATICS_onDeactivateAnimValue
		GEODE_AS_STATIC_FUNCTION(onDeactivateAnimValue) 
	#endif

	#ifndef GEODE_STATICS_updateTargetIDLabel
		#define GEODE_STATICS_updateTargetIDLabel
		GEODE_AS_STATIC_FUNCTION(updateTargetIDLabel) 
	#endif

	#ifndef GEODE_STATICS_createValueControlAdvancedAnim
		#define GEODE_STATICS_createValueControlAdvancedAnim
		GEODE_AS_STATIC_FUNCTION(createValueControlAdvancedAnim) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaAnimTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>>::ModifyBase;
		using Base = SetupAreaAnimTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b7670, Default, SetupAreaAnimTriggerPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b7810, Default, SetupAreaAnimTriggerPopup, valueDidChange, int, float)
		}
	};
}
