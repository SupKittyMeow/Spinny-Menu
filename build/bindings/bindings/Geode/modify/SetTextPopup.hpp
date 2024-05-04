#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetTextPopup.hpp>
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

	#ifndef GEODE_STATICS_onResetValue
		#define GEODE_STATICS_onResetValue
		GEODE_AS_STATIC_FUNCTION(onResetValue) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCancel
		#define GEODE_STATICS_onCancel
		GEODE_AS_STATIC_FUNCTION(onCancel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetTextPopup> : ModifyBase<ModifyDerive<Der, SetTextPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetTextPopup>>;
		using ModifyBase<ModifyDerive<Der, SetTextPopup>>::ModifyBase;
		using Base = SetTextPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289fb0, Default, SetTextPopup, create, gd::string, gd::string, int, gd::string, gd::string, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28a750, Default, SetTextPopup, init, gd::string, gd::string, int, gd::string, gd::string, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28afa0, Default, SetTextPopup, onResetValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28aee0, Default, SetTextPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b030, Default, SetTextPopup, onCancel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b260, Default, SetTextPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b200, Default, SetTextPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b0d0, Default, SetTextPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b110, Default, SetTextPopup, textChanged, CCTextInputNode*)
		}
	};
}
