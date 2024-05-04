#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayLayer.hpp>
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

	#ifndef GEODE_STATICS_getEndPosition
		#define GEODE_STATICS_getEndPosition
		GEODE_AS_STATIC_FUNCTION(getEndPosition) 
	#endif

	#ifndef GEODE_STATICS_getRelativeMod
		#define GEODE_STATICS_getRelativeMod
		GEODE_AS_STATIC_FUNCTION(getRelativeMod) 
	#endif

	#ifndef GEODE_STATICS_getTempMilliTime
		#define GEODE_STATICS_getTempMilliTime
		GEODE_AS_STATIC_FUNCTION(getTempMilliTime) 
	#endif

	#ifndef GEODE_STATICS_getCurrentPercent
		#define GEODE_STATICS_getCurrentPercent
		GEODE_AS_STATIC_FUNCTION(getCurrentPercent) 
	#endif

	#ifndef GEODE_STATICS_getLastCheckpoint
		#define GEODE_STATICS_getLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(getLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_getRelativeModNew
		#define GEODE_STATICS_getRelativeModNew
		GEODE_AS_STATIC_FUNCTION(getRelativeModNew) 
	#endif

	#ifndef GEODE_STATICS_getCurrentPercentInt
		#define GEODE_STATICS_getCurrentPercentInt
		GEODE_AS_STATIC_FUNCTION(getCurrentPercentInt) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_playReplay
		#define GEODE_STATICS_playReplay
		GEODE_AS_STATIC_FUNCTION(playReplay) 
	#endif

	#ifndef GEODE_STATICS_resetLevel
		#define GEODE_STATICS_resetLevel
		GEODE_AS_STATIC_FUNCTION(resetLevel) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_colorObject
		#define GEODE_STATICS_colorObject
		GEODE_AS_STATIC_FUNCTION(colorObject) 
	#endif

	#ifndef GEODE_STATICS_commitJumps
		#define GEODE_STATICS_commitJumps
		GEODE_AS_STATIC_FUNCTION(commitJumps) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_showNewBest
		#define GEODE_STATICS_showNewBest
		GEODE_AS_STATIC_FUNCTION(showNewBest) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_canPauseGame
		#define GEODE_STATICS_canPauseGame
		GEODE_AS_STATIC_FUNCTION(canPauseGame) 
	#endif

	#ifndef GEODE_STATICS_prepareMusic
		#define GEODE_STATICS_prepareMusic
		GEODE_AS_STATIC_FUNCTION(prepareMusic) 
	#endif

	#ifndef GEODE_STATICS_showEndLayer
		#define GEODE_STATICS_showEndLayer
		GEODE_AS_STATIC_FUNCTION(showEndLayer) 
	#endif

	#ifndef GEODE_STATICS_addToGroupOld
		#define GEODE_STATICS_addToGroupOld
		GEODE_AS_STATIC_FUNCTION(addToGroupOld) 
	#endif

	#ifndef GEODE_STATICS_levelComplete
		#define GEODE_STATICS_levelComplete
		GEODE_AS_STATIC_FUNCTION(levelComplete) 
	#endif

	#ifndef GEODE_STATICS_spawnFirework
		#define GEODE_STATICS_spawnFirework
		GEODE_AS_STATIC_FUNCTION(spawnFirework) 
	#endif

	#ifndef GEODE_STATICS_stopRecording
		#define GEODE_STATICS_stopRecording
		GEODE_AS_STATIC_FUNCTION(stopRecording) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_markCheckpoint
		#define GEODE_STATICS_markCheckpoint
		GEODE_AS_STATIC_FUNCTION(markCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_showRetryLayer
		#define GEODE_STATICS_showRetryLayer
		GEODE_AS_STATIC_FUNCTION(showRetryLayer) 
	#endif

	#ifndef GEODE_STATICS_startRecording
		#define GEODE_STATICS_startRecording
		GEODE_AS_STATIC_FUNCTION(startRecording) 
	#endif

	#ifndef GEODE_STATICS_tryStartRecord
		#define GEODE_STATICS_tryStartRecord
		GEODE_AS_STATIC_FUNCTION(tryStartRecord) 
	#endif

	#ifndef GEODE_STATICS_updateAttempts
		#define GEODE_STATICS_updateAttempts
		GEODE_AS_STATIC_FUNCTION(updateAttempts) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_queueCheckpoint
		#define GEODE_STATICS_queueCheckpoint
		GEODE_AS_STATIC_FUNCTION(queueCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_storeCheckpoint
		#define GEODE_STATICS_storeCheckpoint
		GEODE_AS_STATIC_FUNCTION(storeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_updateInfoLabel
		#define GEODE_STATICS_updateInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_applyEnterEffect
		#define GEODE_STATICS_applyEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_checkpointWithID
		#define GEODE_STATICS_checkpointWithID
		GEODE_AS_STATIC_FUNCTION(checkpointWithID) 
	#endif

	#ifndef GEODE_STATICS_createCheckpoint
		#define GEODE_STATICS_createCheckpoint
		GEODE_AS_STATIC_FUNCTION(createCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_delayedFullReset
		#define GEODE_STATICS_delayedFullReset
		GEODE_AS_STATIC_FUNCTION(delayedFullReset) 
	#endif

	#ifndef GEODE_STATICS_isGameplayActive
		#define GEODE_STATICS_isGameplayActive
		GEODE_AS_STATIC_FUNCTION(isGameplayActive) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeCheckpoint
		#define GEODE_STATICS_removeCheckpoint
		GEODE_AS_STATIC_FUNCTION(removeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_resumeAndRestart
		#define GEODE_STATICS_resumeAndRestart
		GEODE_AS_STATIC_FUNCTION(resumeAndRestart) 
	#endif

	#ifndef GEODE_STATICS_showCompleteText
		#define GEODE_STATICS_showCompleteText
		GEODE_AS_STATIC_FUNCTION(showCompleteText) 
	#endif

	#ifndef GEODE_STATICS_startGameDelayed
		#define GEODE_STATICS_startGameDelayed
		GEODE_AS_STATIC_FUNCTION(startGameDelayed) 
	#endif

	#ifndef GEODE_STATICS_delayedResetLevel
		#define GEODE_STATICS_delayedResetLevel
		GEODE_AS_STATIC_FUNCTION(delayedResetLevel) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultColors
		#define GEODE_STATICS_loadDefaultColors
		GEODE_AS_STATIC_FUNCTION(loadDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_setupHasCompleted
		#define GEODE_STATICS_setupHasCompleted
		GEODE_AS_STATIC_FUNCTION(setupHasCompleted) 
	#endif

	#ifndef GEODE_STATICS_takeStateSnapshot
		#define GEODE_STATICS_takeStateSnapshot
		GEODE_AS_STATIC_FUNCTION(takeStateSnapshot) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_updateProgressbar
		#define GEODE_STATICS_updateProgressbar
		GEODE_AS_STATIC_FUNCTION(updateProgressbar) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_loadLastCheckpoint
		#define GEODE_STATICS_loadLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroupOld
		#define GEODE_STATICS_removeFromGroupOld
		GEODE_AS_STATIC_FUNCTION(removeFromGroupOld) 
	#endif

	#ifndef GEODE_STATICS_showCompleteEffect
		#define GEODE_STATICS_showCompleteEffect
		GEODE_AS_STATIC_FUNCTION(showCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_showTwoPlayerGuide
		#define GEODE_STATICS_showTwoPlayerGuide
		GEODE_AS_STATIC_FUNCTION(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_STATICS_togglePracticeMode
		#define GEODE_STATICS_togglePracticeMode
		GEODE_AS_STATIC_FUNCTION(togglePracticeMode) 
	#endif

	#ifndef GEODE_STATICS_optimizeColorGroups
		#define GEODE_STATICS_optimizeColorGroups
		GEODE_AS_STATIC_FUNCTION(optimizeColorGroups) 
	#endif

	#ifndef GEODE_STATICS_resetLevelFromStart
		#define GEODE_STATICS_resetLevelFromStart
		GEODE_AS_STATIC_FUNCTION(resetLevelFromStart) 
	#endif

	#ifndef GEODE_STATICS_compareStateSnapshot
		#define GEODE_STATICS_compareStateSnapshot
		GEODE_AS_STATIC_FUNCTION(compareStateSnapshot) 
	#endif

	#ifndef GEODE_STATICS_updateScreenRotation
		#define GEODE_STATICS_updateScreenRotation
		GEODE_AS_STATIC_FUNCTION(updateScreenRotation) 
	#endif

	#ifndef GEODE_STATICS_gravityEffectFinished
		#define GEODE_STATICS_gravityEffectFinished
		GEODE_AS_STATIC_FUNCTION(gravityEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_loadActiveSaveObjects
		#define GEODE_STATICS_loadActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(loadActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_optimizeOpacityGroups
		#define GEODE_STATICS_optimizeOpacityGroups
		GEODE_AS_STATIC_FUNCTION(optimizeOpacityGroups) 
	#endif

	#ifndef GEODE_STATICS_playEndAnimationToPos
		#define GEODE_STATICS_playEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_saveActiveSaveObjects
		#define GEODE_STATICS_saveActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_scanActiveSaveObjects
		#define GEODE_STATICS_scanActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(scanActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_startRecordingDelayed
		#define GEODE_STATICS_startRecordingDelayed
		GEODE_AS_STATIC_FUNCTION(startRecordingDelayed) 
	#endif

	#ifndef GEODE_STATICS_updateEffectPositions
		#define GEODE_STATICS_updateEffectPositions
		GEODE_AS_STATIC_FUNCTION(updateEffectPositions) 
	#endif

	#ifndef GEODE_STATICS_applyCustomEnterEffect
		#define GEODE_STATICS_applyCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_loadDynamicSaveObjects
		#define GEODE_STATICS_loadDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(loadDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_saveDynamicSaveObjects
		#define GEODE_STATICS_saveDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_scanDynamicSaveObjects
		#define GEODE_STATICS_scanDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(scanDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_toggleBGEffectVisibility
		#define GEODE_STATICS_toggleBGEffectVisibility
		GEODE_AS_STATIC_FUNCTION(toggleBGEffectVisibility) 
	#endif

	#ifndef GEODE_STATICS_prepareCreateObjectsFromSetup
		#define GEODE_STATICS_prepareCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(prepareCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_processCreateObjectsFromSetup
		#define GEODE_STATICS_processCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(processCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetupFinished
		#define GEODE_STATICS_createObjectsFromSetupFinished
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetupFinished) 
	#endif

	#ifndef GEODE_STATICS_playPlatformerEndAnimationToPos
		#define GEODE_STATICS_playPlatformerEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playPlatformerEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_showHint
		#define GEODE_STATICS_showHint
		GEODE_AS_STATIC_FUNCTION(showHint) 
	#endif

	#ifndef GEODE_STATICS_addCircle
		#define GEODE_STATICS_addCircle
		GEODE_AS_STATIC_FUNCTION(addCircle) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_fullReset
		#define GEODE_STATICS_fullReset
		GEODE_AS_STATIC_FUNCTION(fullReset) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_startGame
		#define GEODE_STATICS_startGame
		GEODE_AS_STATIC_FUNCTION(startGame) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_checkForEnd
		#define GEODE_STATICS_checkForEnd
		GEODE_AS_STATIC_FUNCTION(checkForEnd) 
	#endif

	#ifndef GEODE_STATICS_testTime
		#define GEODE_STATICS_testTime
		GEODE_AS_STATIC_FUNCTION(testTime) 
	#endif

	#ifndef GEODE_STATICS_updateVerifyDamage
		#define GEODE_STATICS_updateVerifyDamage
		GEODE_AS_STATIC_FUNCTION(updateVerifyDamage) 
	#endif

	#ifndef GEODE_STATICS_updateAttemptTime
		#define GEODE_STATICS_updateAttemptTime
		GEODE_AS_STATIC_FUNCTION(updateAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_activateEndTrigger
		#define GEODE_STATICS_activateEndTrigger
		GEODE_AS_STATIC_FUNCTION(activateEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlatformerEndTrigger
		#define GEODE_STATICS_activatePlatformerEndTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleGlitter
		#define GEODE_STATICS_toggleGlitter
		GEODE_AS_STATIC_FUNCTION(toggleGlitter) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGroundVisibility
		#define GEODE_STATICS_toggleGroundVisibility
		GEODE_AS_STATIC_FUNCTION(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleMGVisibility
		#define GEODE_STATICS_toggleMGVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMGVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleHideAttempts
		#define GEODE_STATICS_toggleHideAttempts
		GEODE_AS_STATIC_FUNCTION(toggleHideAttempts) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_resetSPTriggered
		#define GEODE_STATICS_resetSPTriggered
		GEODE_AS_STATIC_FUNCTION(resetSPTriggered) 
	#endif

	#ifndef GEODE_STATICS_playGravityEffect
		#define GEODE_STATICS_playGravityEffect
		GEODE_AS_STATIC_FUNCTION(playGravityEffect) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_flipArt
		#define GEODE_STATICS_flipArt
		GEODE_AS_STATIC_FUNCTION(flipArt) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif

	#ifndef GEODE_STATICS_checkSnapshot
		#define GEODE_STATICS_checkSnapshot
		GEODE_AS_STATIC_FUNCTION(checkSnapshot) 
	#endif

	#ifndef GEODE_STATICS_toggleProgressbar
		#define GEODE_STATICS_toggleProgressbar
		GEODE_AS_STATIC_FUNCTION(toggleProgressbar) 
	#endif

	#ifndef GEODE_STATICS_toggleInfoLabel
		#define GEODE_STATICS_toggleInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_removeAllCheckpoints
		#define GEODE_STATICS_removeAllCheckpoints
		GEODE_AS_STATIC_FUNCTION(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_toggleMusicInPractice
		#define GEODE_STATICS_toggleMusicInPractice
		GEODE_AS_STATIC_FUNCTION(toggleMusicInPractice) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif

	#ifndef GEODE_STATICS_circleWaveWillBeRemoved
		#define GEODE_STATICS_circleWaveWillBeRemoved
		GEODE_AS_STATIC_FUNCTION(circleWaveWillBeRemoved) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayLayer> : ModifyBase<ModifyDerive<Der, PlayLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayLayer>>;
		using ModifyBase<ModifyDerive<Der, PlayLayer>>::ModifyBase;
		using Base = PlayLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa5d30, Default, PlayLayer, create, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa5db0, Default, PlayLayer, init, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xa5920, Default, PlayLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3970, Default, PlayLayer, getCurrentPercent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb6b70, Default, PlayLayer, getLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad390, Default, PlayLayer, onQuit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xac8d0, Default, PlayLayer, resetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad570, Default, PlayLayer, startMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaf2e0, Default, PlayLayer, showNewBest, bool, int, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad230, Default, PlayLayer, prepareMusic, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad6d0, Default, PlayLayer, levelComplete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8700, Default, PlayLayer, incrementJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb53a0, Default, PlayLayer, markCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb74f0, Default, PlayLayer, storeCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa96e0, Default, PlayLayer, updateInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad440, Default, PlayLayer, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb7590, Default, PlayLayer, removeCheckpoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb88d0, Default, PlayLayer, resumeAndRestart, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xae690, Default, PlayLayer, showCompleteText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad660, Default, PlayLayer, startGameDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4c20, Default, PlayLayer, delayedResetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab730, Default, PlayLayer, loadDefaultColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7210, Default, PlayLayer, setupHasCompleted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab590, Default, PlayLayer, updateProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb7690, Default, PlayLayer, loadFromCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb7640, Default, PlayLayer, loadLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xae230, Default, PlayLayer, showCompleteEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb81f0, Default, PlayLayer, togglePracticeMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7f40, Default, PlayLayer, optimizeColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8330, Default, PlayLayer, resetLevelFromStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8130, Default, PlayLayer, optimizeOpacityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaffb0, Default, PlayLayer, playEndAnimationToPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa91b0, Default, PlayLayer, scanActiveSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4d20, Default, PlayLayer, updateEffectPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb7ba0, Default, PlayLayer, loadDynamicSaveObjects, gd::vector<SavedObjectStateRef>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8320, Default, PlayLayer, scanDynamicSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0ef0, Default, PlayLayer, processLoadedMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa69f0, Default, PlayLayer, processCreateObjectsFromSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0a50, Default, PlayLayer, createObjectsFromSetupFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0570, Default, PlayLayer, playPlatformerEndAnimationToPos, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa5c80, Default, PlayLayer, scene, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8a50, Default, PlayLayer, resume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4ab0, Default, PlayLayer, showHint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4cc0, Default, PlayLayer, addCircle, CCCircleWave*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xabae0, Default, PlayLayer, addObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8080, Default, PlayLayer, fullReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8790, Default, PlayLayer, pauseGame, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad330, Default, PlayLayer, startGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4df0, Default, PlayLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb10e0, Default, PlayLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0480, Default, PlayLayer, activatePlatformerEndTrigger, EndTriggerGameObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb40f0, Default, PlayLayer, destroyPlayer, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3f40, Default, PlayLayer, toggleGroundVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb39e0, Default, PlayLayer, updateTimeLabel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3bb0, Default, PlayLayer, toggleProgressbar, )
		}
	};
}
