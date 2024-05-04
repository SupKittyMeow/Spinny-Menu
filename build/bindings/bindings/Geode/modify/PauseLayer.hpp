#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PauseLayer.hpp>
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

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onNormalMode
		#define GEODE_STATICS_onNormalMode
		GEODE_AS_STATIC_FUNCTION(onNormalMode) 
	#endif

	#ifndef GEODE_STATICS_onRestartFull
		#define GEODE_STATICS_onRestartFull
		GEODE_AS_STATIC_FUNCTION(onRestartFull) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMode
		#define GEODE_STATICS_onPracticeMode
		GEODE_AS_STATIC_FUNCTION(onPracticeMode) 
	#endif

	#ifndef GEODE_STATICS_onRecordReplays
		#define GEODE_STATICS_onRecordReplays
		GEODE_AS_STATIC_FUNCTION(onRecordReplays) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_onTime
		#define GEODE_STATICS_onTime
		GEODE_AS_STATIC_FUNCTION(onTime) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onRestart
		#define GEODE_STATICS_onRestart
		GEODE_AS_STATIC_FUNCTION(onRestart) 
	#endif

	#ifndef GEODE_STATICS_tryShowBanner
		#define GEODE_STATICS_tryShowBanner
		GEODE_AS_STATIC_FUNCTION(tryShowBanner) 
	#endif

	#ifndef GEODE_STATICS_sfxSliderChanged
		#define GEODE_STATICS_sfxSliderChanged
		GEODE_AS_STATIC_FUNCTION(sfxSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_setupProgressBars
		#define GEODE_STATICS_setupProgressBars
		GEODE_AS_STATIC_FUNCTION(setupProgressBars) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_musicSliderChanged
		#define GEODE_STATICS_musicSliderChanged
		GEODE_AS_STATIC_FUNCTION(musicSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_goEdit
		#define GEODE_STATICS_goEdit
		GEODE_AS_STATIC_FUNCTION(goEdit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PauseLayer> : ModifyBase<ModifyDerive<Der, PauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PauseLayer>>;
		using ModifyBase<ModifyDerive<Der, PauseLayer>>::ModifyBase;
		using Base = PauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4400, Default, PauseLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5c20, Default, PauseLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5af0, Default, PauseLayer, onNormalMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5a50, Default, PauseLayer, onRestartFull, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5a90, Default, PauseLayer, onPracticeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5930, Default, PauseLayer, onEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5b40, Default, PauseLayer, onQuit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5a10, Default, PauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5be0, Default, PauseLayer, onRestart, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5c90, Default, PauseLayer, sfxSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4fb0, Default, PauseLayer, setupProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5c50, Default, PauseLayer, musicSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b5fa0, Default, PauseLayer, goEdit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b6010, Default, PauseLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4500, Default, PauseLayer, customSetup, )
		}
	};
}
