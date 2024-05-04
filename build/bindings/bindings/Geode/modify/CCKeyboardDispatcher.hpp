#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_convertKeyCode
		#define GEODE_STATICS_convertKeyCode
		GEODE_AS_STATIC_FUNCTION(convertKeyCode) 
	#endif

	#ifndef GEODE_STATICS_getAltKeyPressed
		#define GEODE_STATICS_getAltKeyPressed
		GEODE_AS_STATIC_FUNCTION(getAltKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getBlockRepeat
		#define GEODE_STATICS_getBlockRepeat
		GEODE_AS_STATIC_FUNCTION(getBlockRepeat) 
	#endif

	#ifndef GEODE_STATICS_getCommandKeyPressed
		#define GEODE_STATICS_getCommandKeyPressed
		GEODE_AS_STATIC_FUNCTION(getCommandKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getControlKeyPressed
		#define GEODE_STATICS_getControlKeyPressed
		GEODE_AS_STATIC_FUNCTION(getControlKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getShiftKeyPressed
		#define GEODE_STATICS_getShiftKeyPressed
		GEODE_AS_STATIC_FUNCTION(getShiftKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_setBlockRepeat
		#define GEODE_STATICS_setBlockRepeat
		GEODE_AS_STATIC_FUNCTION(setBlockRepeat) 
	#endif

	#ifndef GEODE_STATICS_addDelegate
		#define GEODE_STATICS_addDelegate
		GEODE_AS_STATIC_FUNCTION(addDelegate) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardMSG
		#define GEODE_STATICS_dispatchKeyboardMSG
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardMSG) 
	#endif

	#ifndef GEODE_STATICS_forceAddDelegate
		#define GEODE_STATICS_forceAddDelegate
		GEODE_AS_STATIC_FUNCTION(forceAddDelegate) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_keyToString
		#define GEODE_STATICS_keyToString
		GEODE_AS_STATIC_FUNCTION(keyToString) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

	#ifndef GEODE_STATICS_updateModifierKeys
		#define GEODE_STATICS_updateModifierKeys
		GEODE_AS_STATIC_FUNCTION(updateModifierKeys) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCKeyboardDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>>::ModifyBase;
		using Base = cocos2d::CCKeyboardDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e2400, Default, cocos2d::CCKeyboardDispatcher, dispatchKeyboardMSG, cocos2d::enumKeyCodes, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e26d0, Default, cocos2d::CCKeyboardDispatcher, keyToString, cocos2d::enumKeyCodes)
		}
	};
}
