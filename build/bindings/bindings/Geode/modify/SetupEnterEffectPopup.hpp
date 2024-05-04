#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEnterEffectPopup.hpp>
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

	#ifndef GEODE_STATICS_onEnterType
		#define GEODE_STATICS_onEnterType
		GEODE_AS_STATIC_FUNCTION(onEnterType) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEnterChannel
		#define GEODE_STATICS_onNextFreeEnterChannel
		GEODE_AS_STATIC_FUNCTION(onNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEnterEffectID
		#define GEODE_STATICS_onNextFreeEnterEffectID
		GEODE_AS_STATIC_FUNCTION(onNextFreeEnterEffectID) 
	#endif

	#ifndef GEODE_STATICS_onHSV
		#define GEODE_STATICS_onHSV
		GEODE_AS_STATIC_FUNCTION(onHSV) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateHSVButton
		#define GEODE_STATICS_updateHSVButton
		GEODE_AS_STATIC_FUNCTION(updateHSVButton) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
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

	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEnterEffectPopup> : ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>>::ModifyBase;
		using Base = SetupEnterEffectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4f20, Default, SetupEnterEffectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4b00, Default, SetupEnterEffectPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d50c0, Default, SetupEnterEffectPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5090, Default, SetupEnterEffectPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4cc0, Default, SetupEnterEffectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5020, Default, SetupEnterEffectPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5060, Default, SetupEnterEffectPopup, triggerSliderValueFromValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4d90, Default, SetupEnterEffectPopup, hsvPopupClosed, HSVWidgetPopup*, cocos2d::_ccHSVValue)
		}
	};
}
