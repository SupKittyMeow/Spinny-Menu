#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
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

	#ifndef GEODE_STATICS_onNewGroupX
		#define GEODE_STATICS_onNewGroupX
		GEODE_AS_STATIC_FUNCTION(onNewGroupX) 
	#endif

	#ifndef GEODE_STATICS_onNewGroupY
		#define GEODE_STATICS_onNewGroupY
		GEODE_AS_STATIC_FUNCTION(onNewGroupY) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onCopyWColor
		#define GEODE_STATICS_onCopyWColor
		GEODE_AS_STATIC_FUNCTION(onCopyWColor) 
	#endif

	#ifndef GEODE_STATICS_onCreateLoop
		#define GEODE_STATICS_onCreateLoop
		GEODE_AS_STATIC_FUNCTION(onCreateLoop) 
	#endif

	#ifndef GEODE_STATICS_onExitEditor
		#define GEODE_STATICS_onExitEditor
		GEODE_AS_STATIC_FUNCTION(onExitEditor) 
	#endif

	#ifndef GEODE_STATICS_onExitNoSave
		#define GEODE_STATICS_onExitNoSave
		GEODE_AS_STATIC_FUNCTION(onExitNoSave) 
	#endif

	#ifndef GEODE_STATICS_onBuildHelper
		#define GEODE_STATICS_onBuildHelper
		GEODE_AS_STATIC_FUNCTION(onBuildHelper) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onPasteWColor
		#define GEODE_STATICS_onPasteWColor
		GEODE_AS_STATIC_FUNCTION(onPasteWColor) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndExit
		#define GEODE_STATICS_onSaveAndExit
		GEODE_AS_STATIC_FUNCTION(onSaveAndExit) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndPlay
		#define GEODE_STATICS_onSaveAndPlay
		GEODE_AS_STATIC_FUNCTION(onSaveAndPlay) 
	#endif

	#ifndef GEODE_STATICS_onCreateExtras
		#define GEODE_STATICS_onCreateExtras
		GEODE_AS_STATIC_FUNCTION(onCreateExtras) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllLeft
		#define GEODE_STATICS_onSelectAllLeft
		GEODE_AS_STATIC_FUNCTION(onSelectAllLeft) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllRight
		#define GEODE_STATICS_onSelectAllRight
		GEODE_AS_STATIC_FUNCTION(onSelectAllRight) 
	#endif

	#ifndef GEODE_STATICS_onUnlockAllLayers
		#define GEODE_STATICS_onUnlockAllLayers
		GEODE_AS_STATIC_FUNCTION(onUnlockAllLayers) 
	#endif

	#ifndef GEODE_STATICS_onResetUnusedColors
		#define GEODE_STATICS_onResetUnusedColors
		GEODE_AS_STATIC_FUNCTION(onResetUnusedColors) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSong
		#define GEODE_STATICS_onSong
		GEODE_AS_STATIC_FUNCTION(onSong) 
	#endif

	#ifndef GEODE_STATICS_onAlignX
		#define GEODE_STATICS_onAlignX
		GEODE_AS_STATIC_FUNCTION(onAlignX) 
	#endif

	#ifndef GEODE_STATICS_onAlignY
		#define GEODE_STATICS_onAlignY
		GEODE_AS_STATIC_FUNCTION(onAlignY) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onReGroup
		#define GEODE_STATICS_onReGroup
		GEODE_AS_STATIC_FUNCTION(onReGroup) 
	#endif

	#ifndef GEODE_STATICS_doResetUnused
		#define GEODE_STATICS_doResetUnused
		GEODE_AS_STATIC_FUNCTION(doResetUnused) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleGridOnTop
		#define GEODE_STATICS_toggleGridOnTop
		GEODE_AS_STATIC_FUNCTION(toggleGridOnTop) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGrid
		#define GEODE_STATICS_toggleEditorGrid
		GEODE_AS_STATIC_FUNCTION(toggleEditorGrid) 
	#endif

	#ifndef GEODE_STATICS_updateSongButton
		#define GEODE_STATICS_updateSongButton
		GEODE_AS_STATIC_FUNCTION(updateSongButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectLines
		#define GEODE_STATICS_toggleEffectLines
		GEODE_AS_STATIC_FUNCTION(toggleEffectLines) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewAnim
		#define GEODE_STATICS_togglePreviewAnim
		GEODE_AS_STATIC_FUNCTION(togglePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_toggleRecordOrder
		#define GEODE_STATICS_toggleRecordOrder
		GEODE_AS_STATIC_FUNCTION(toggleRecordOrder) 
	#endif

	#ifndef GEODE_STATICS_uncheckAllPortals
		#define GEODE_STATICS_uncheckAllPortals
		GEODE_AS_STATIC_FUNCTION(uncheckAllPortals) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGround
		#define GEODE_STATICS_toggleEditorGround
		GEODE_AS_STATIC_FUNCTION(toggleEditorGround) 
	#endif

	#ifndef GEODE_STATICS_toggleFollowPlayer
		#define GEODE_STATICS_toggleFollowPlayer
		GEODE_AS_STATIC_FUNCTION(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_toggleSelectFilter
		#define GEODE_STATICS_toggleSelectFilter
		GEODE_AS_STATIC_FUNCTION(toggleSelectFilter) 
	#endif

	#ifndef GEODE_STATICS_toggleHideInvisible
		#define GEODE_STATICS_toggleHideInvisible
		GEODE_AS_STATIC_FUNCTION(toggleHideInvisible) 
	#endif

	#ifndef GEODE_STATICS_togglePlaytestMusic
		#define GEODE_STATICS_togglePlaytestMusic
		GEODE_AS_STATIC_FUNCTION(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectDuration
		#define GEODE_STATICS_toggleEffectDuration
		GEODE_AS_STATIC_FUNCTION(toggleEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewShaders
		#define GEODE_STATICS_togglePreviewShaders
		GEODE_AS_STATIC_FUNCTION(togglePreviewShaders) 
	#endif

	#ifndef GEODE_STATICS_toggleShowObjectInfo
		#define GEODE_STATICS_toggleShowObjectInfo
		GEODE_AS_STATIC_FUNCTION(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorColorMode
		#define GEODE_STATICS_toggleEditorColorMode
		GEODE_AS_STATIC_FUNCTION(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorBackground
		#define GEODE_STATICS_toggleEditorBackground
		GEODE_AS_STATIC_FUNCTION(toggleEditorBackground) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewParticles
		#define GEODE_STATICS_togglePreviewParticles
		GEODE_AS_STATIC_FUNCTION(togglePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorPauseLayer> : ModifyBase<ModifyDerive<Der, EditorPauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorPauseLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorPauseLayer>>::ModifyBase;
		using Base = EditorPauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ee60, Default, EditorPauseLayer, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ef60, Default, EditorPauseLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271e50, Default, EditorPauseLayer, onNewGroupX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271e70, Default, EditorPauseLayer, onNewGroupY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271df0, Default, EditorPauseLayer, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d00, Default, EditorPauseLayer, onCopyWColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d40, Default, EditorPauseLayer, onCreateLoop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271880, Default, EditorPauseLayer, onExitNoSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d20, Default, EditorPauseLayer, onBuildHelper, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ce0, Default, EditorPauseLayer, onPasteWColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271730, Default, EditorPauseLayer, onSaveAndExit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2716c0, Default, EditorPauseLayer, onSaveAndPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271cb0, Default, EditorPauseLayer, onCreateExtras, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271e10, Default, EditorPauseLayer, onSelectAllLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271e30, Default, EditorPauseLayer, onSelectAllRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271c90, Default, EditorPauseLayer, onUnlockAllLayers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271b90, Default, EditorPauseLayer, onResetUnusedColors, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271a20, Default, EditorPauseLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2717a0, Default, EditorPauseLayer, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271980, Default, EditorPauseLayer, onSong, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d80, Default, EditorPauseLayer, onAlignX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271db0, Default, EditorPauseLayer, onAlignY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271650, Default, EditorPauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272090, Default, EditorPauseLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d60, Default, EditorPauseLayer, onReGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272050, Default, EditorPauseLayer, toggleDebugDraw, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ed0, Default, EditorPauseLayer, toggleEditorGrid, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271fd0, Default, EditorPauseLayer, togglePreviewAnim, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ac0, Default, EditorPauseLayer, uncheckAllPortals, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271f30, Default, EditorPauseLayer, toggleEditorGround, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271e90, Default, EditorPauseLayer, toggleIgnoreDamage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271eb0, Default, EditorPauseLayer, toggleSelectFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272030, Default, EditorPauseLayer, toggleHideInvisible, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271f80, Default, EditorPauseLayer, togglePreviewShaders, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ef0, Default, EditorPauseLayer, toggleShowObjectInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272000, Default, EditorPauseLayer, toggleEditorColorMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271fa0, Default, EditorPauseLayer, togglePreviewParticles, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a70, Default, EditorPauseLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272b40, Default, EditorPauseLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2725a0, Default, EditorPauseLayer, saveLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272ca0, Default, EditorPauseLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272d90, Default, EditorPauseLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f8c0, Default, EditorPauseLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272bc0, Default, EditorPauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
