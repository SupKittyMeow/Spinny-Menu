#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTimerTriggerPopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SetupTimerTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupTimerTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTimerTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTimerTriggerPopup>>::ModifyBase;
		using Base = SetupTimerTriggerPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
