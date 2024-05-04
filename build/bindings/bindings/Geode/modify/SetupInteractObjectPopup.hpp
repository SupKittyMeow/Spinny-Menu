#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInteractObjectPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateItems
		#define GEODE_STATICS_updateItems
		GEODE_AS_STATIC_FUNCTION(updateItems) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupInteractObjectPopup> : ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>>::ModifyBase;
		using Base = SetupInteractObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4e6b60, Default, SetupInteractObjectPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4e6c50, Default, SetupInteractObjectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4e6ba0, Default, SetupInteractObjectPopup, valueDidChange, int, float)
		}
	};
}
