#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGarageLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getLockFrame
		#define GEODE_STATICS_getLockFrame
		GEODE_AS_STATIC_FUNCTION(getLockFrame) 
	#endif

	#ifndef GEODE_STATICS_getItems
		#define GEODE_STATICS_getItems
		GEODE_AS_STATIC_FUNCTION(getItems) 
	#endif

	#ifndef GEODE_STATICS_onNavigate
		#define GEODE_STATICS_onNavigate
		GEODE_AS_STATIC_FUNCTION(onNavigate) 
	#endif

	#ifndef GEODE_STATICS_onSelectTab
		#define GEODE_STATICS_onSelectTab
		GEODE_AS_STATIC_FUNCTION(onSelectTab) 
	#endif

	#ifndef GEODE_STATICS_onToggleItem
		#define GEODE_STATICS_onToggleItem
		GEODE_AS_STATIC_FUNCTION(onToggleItem) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onShop
		#define GEODE_STATICS_onShop
		GEODE_AS_STATIC_FUNCTION(onShop) 
	#endif

	#ifndef GEODE_STATICS_onArrow
		#define GEODE_STATICS_onArrow
		GEODE_AS_STATIC_FUNCTION(onArrow) 
	#endif

	#ifndef GEODE_STATICS_onPaint
		#define GEODE_STATICS_onPaint
		GEODE_AS_STATIC_FUNCTION(onPaint) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_onShards
		#define GEODE_STATICS_onShards
		GEODE_AS_STATIC_FUNCTION(onShards) 
	#endif

	#ifndef GEODE_STATICS_onSpecial
		#define GEODE_STATICS_onSpecial
		GEODE_AS_STATIC_FUNCTION(onSpecial) 
	#endif

	#ifndef GEODE_STATICS_toggleGlow
		#define GEODE_STATICS_toggleGlow
		GEODE_AS_STATIC_FUNCTION(toggleGlow) 
	#endif

	#ifndef GEODE_STATICS_titleForUnlock
		#define GEODE_STATICS_titleForUnlock
		GEODE_AS_STATIC_FUNCTION(titleForUnlock) 
	#endif

	#ifndef GEODE_STATICS_setupIconSelect
		#define GEODE_STATICS_setupIconSelect
		GEODE_AS_STATIC_FUNCTION(setupIconSelect) 
	#endif

	#ifndef GEODE_STATICS_playShadowEffect
		#define GEODE_STATICS_playShadowEffect
		GEODE_AS_STATIC_FUNCTION(playShadowEffect) 
	#endif

	#ifndef GEODE_STATICS_setupSpecialPage
		#define GEODE_STATICS_setupSpecialPage
		GEODE_AS_STATIC_FUNCTION(setupSpecialPage) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerName
		#define GEODE_STATICS_updatePlayerName
		GEODE_AS_STATIC_FUNCTION(updatePlayerName) 
	#endif

	#ifndef GEODE_STATICS_playRainbowEffect
		#define GEODE_STATICS_playRainbowEffect
		GEODE_AS_STATIC_FUNCTION(playRainbowEffect) 
	#endif

	#ifndef GEODE_STATICS_showUnlockPopupNew
		#define GEODE_STATICS_showUnlockPopupNew
		GEODE_AS_STATIC_FUNCTION(showUnlockPopupNew) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerColors
		#define GEODE_STATICS_updatePlayerColors
		GEODE_AS_STATIC_FUNCTION(updatePlayerColors) 
	#endif

	#ifndef GEODE_STATICS_achievementForUnlock
		#define GEODE_STATICS_achievementForUnlock
		GEODE_AS_STATIC_FUNCTION(achievementForUnlock) 
	#endif

	#ifndef GEODE_STATICS_descriptionForUnlock
		#define GEODE_STATICS_descriptionForUnlock
		GEODE_AS_STATIC_FUNCTION(descriptionForUnlock) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_selectTab
		#define GEODE_STATICS_selectTab
		GEODE_AS_STATIC_FUNCTION(selectTab) 
	#endif

	#ifndef GEODE_STATICS_setupPage
		#define GEODE_STATICS_setupPage
		GEODE_AS_STATIC_FUNCTION(setupPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_listButtonBarSwitchedPage
		#define GEODE_STATICS_listButtonBarSwitchedPage
		GEODE_AS_STATIC_FUNCTION(listButtonBarSwitchedPage) 
	#endif

	#ifndef GEODE_STATICS_showUnlockPopup
		#define GEODE_STATICS_showUnlockPopup
		GEODE_AS_STATIC_FUNCTION(showUnlockPopup) 
	#endif

	#ifndef GEODE_STATICS_updateRate
		#define GEODE_STATICS_updateRate
		GEODE_AS_STATIC_FUNCTION(updateRate) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_playerColorChanged
		#define GEODE_STATICS_playerColorChanged
		GEODE_AS_STATIC_FUNCTION(playerColorChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGarageLayer> : ModifyBase<ModifyDerive<Der, GJGarageLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGarageLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGarageLayer>>::ModifyBase;
		using Base = GJGarageLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c160, Default, GJGarageLayer, getItems, int, int, IconType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b150, Default, GJGarageLayer, onSelectTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cde0, Default, GJGarageLayer, onToggleItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34a9f0, Default, GJGarageLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34ac40, Default, GJGarageLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34ab50, Default, GJGarageLayer, onShop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34abe0, Default, GJGarageLayer, onPaint, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c580, Default, GJGarageLayer, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34abb0, Default, GJGarageLayer, onShards, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x349ee0, Default, GJGarageLayer, setupIconSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34baa0, Default, GJGarageLayer, setupSpecialPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3498d0, Default, GJGarageLayer, updatePlayerColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347bd0, Default, GJGarageLayer, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b2e0, Default, GJGarageLayer, selectTab, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b420, Default, GJGarageLayer, setupPage, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347d60, Default, GJGarageLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34df30, Default, GJGarageLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34ae00, Default, GJGarageLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34af60, Default, GJGarageLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b0f0, Default, GJGarageLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d510, Default, GJGarageLayer, listButtonBarSwitchedPage, ListButtonBar*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d6a0, Default, GJGarageLayer, showUnlockPopup, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34dce0, Default, GJGarageLayer, updateRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34da70, Default, GJGarageLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34db80, Default, GJGarageLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d410, Default, GJGarageLayer, playerColorChanged, )
		}
	};
}
