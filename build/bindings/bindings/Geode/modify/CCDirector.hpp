#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDirector
		#define GEODE_STATICS_sharedDirector
		GEODE_AS_STATIC_FUNCTION(sharedDirector) 
	#endif

	#ifndef GEODE_STATICS_getActualDeltaTime
		#define GEODE_STATICS_getActualDeltaTime
		GEODE_AS_STATIC_FUNCTION(getActualDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_getAnimationInterval
		#define GEODE_STATICS_getAnimationInterval
		GEODE_AS_STATIC_FUNCTION(getAnimationInterval) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDontCallWillSwitch
		#define GEODE_STATICS_getDontCallWillSwitch
		GEODE_AS_STATIC_FUNCTION(getDontCallWillSwitch) 
	#endif

	#ifndef GEODE_STATICS_getFPSImageData
		#define GEODE_STATICS_getFPSImageData
		GEODE_AS_STATIC_FUNCTION(getFPSImageData) 
	#endif

	#ifndef GEODE_STATICS_getIsTransitioning
		#define GEODE_STATICS_getIsTransitioning
		GEODE_AS_STATIC_FUNCTION(getIsTransitioning) 
	#endif

	#ifndef GEODE_STATICS_getLoadedTextureQuality
		#define GEODE_STATICS_getLoadedTextureQuality
		GEODE_AS_STATIC_FUNCTION(getLoadedTextureQuality) 
	#endif

	#ifndef GEODE_STATICS_getNextScene
		#define GEODE_STATICS_getNextScene
		GEODE_AS_STATIC_FUNCTION(getNextScene) 
	#endif

	#ifndef GEODE_STATICS_getNotificationNode
		#define GEODE_STATICS_getNotificationNode
		GEODE_AS_STATIC_FUNCTION(getNotificationNode) 
	#endif

	#ifndef GEODE_STATICS_getOpenGLView
		#define GEODE_STATICS_getOpenGLView
		GEODE_AS_STATIC_FUNCTION(getOpenGLView) 
	#endif

	#ifndef GEODE_STATICS_getProjection
		#define GEODE_STATICS_getProjection
		GEODE_AS_STATIC_FUNCTION(getProjection) 
	#endif

	#ifndef GEODE_STATICS_getRunningScene
		#define GEODE_STATICS_getRunningScene
		GEODE_AS_STATIC_FUNCTION(getRunningScene) 
	#endif

	#ifndef GEODE_STATICS_getSceneReference
		#define GEODE_STATICS_getSceneReference
		GEODE_AS_STATIC_FUNCTION(getSceneReference) 
	#endif

	#ifndef GEODE_STATICS_getScreenScaleFactor
		#define GEODE_STATICS_getScreenScaleFactor
		GEODE_AS_STATIC_FUNCTION(getScreenScaleFactor) 
	#endif

	#ifndef GEODE_STATICS_getScreenScaleFactorH
		#define GEODE_STATICS_getScreenScaleFactorH
		GEODE_AS_STATIC_FUNCTION(getScreenScaleFactorH) 
	#endif

	#ifndef GEODE_STATICS_getScreenScaleFactorW
		#define GEODE_STATICS_getScreenScaleFactorW
		GEODE_AS_STATIC_FUNCTION(getScreenScaleFactorW) 
	#endif

	#ifndef GEODE_STATICS_getSecondsPerFrame
		#define GEODE_STATICS_getSecondsPerFrame
		GEODE_AS_STATIC_FUNCTION(getSecondsPerFrame) 
	#endif

	#ifndef GEODE_STATICS_getSmoothFix
		#define GEODE_STATICS_getSmoothFix
		GEODE_AS_STATIC_FUNCTION(getSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_getSmoothFixCheck
		#define GEODE_STATICS_getSmoothFixCheck
		GEODE_AS_STATIC_FUNCTION(getSmoothFixCheck) 
	#endif

	#ifndef GEODE_STATICS_getSmoothFixCounter
		#define GEODE_STATICS_getSmoothFixCounter
		GEODE_AS_STATIC_FUNCTION(getSmoothFixCounter) 
	#endif

	#ifndef GEODE_STATICS_getTotalFrames
		#define GEODE_STATICS_getTotalFrames
		GEODE_AS_STATIC_FUNCTION(getTotalFrames) 
	#endif

	#ifndef GEODE_STATICS_getVisibleOrigin
		#define GEODE_STATICS_getVisibleOrigin
		GEODE_AS_STATIC_FUNCTION(getVisibleOrigin) 
	#endif

	#ifndef GEODE_STATICS_getVisibleSize
		#define GEODE_STATICS_getVisibleSize
		GEODE_AS_STATIC_FUNCTION(getVisibleSize) 
	#endif

	#ifndef GEODE_STATICS_getWinSize
		#define GEODE_STATICS_getWinSize
		GEODE_AS_STATIC_FUNCTION(getWinSize) 
	#endif

	#ifndef GEODE_STATICS_getWinSizeInPixels
		#define GEODE_STATICS_getWinSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getWinSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_getZEye
		#define GEODE_STATICS_getZEye
		GEODE_AS_STATIC_FUNCTION(getZEye) 
	#endif

	#ifndef GEODE_STATICS_setActualDeltaTime
		#define GEODE_STATICS_setActualDeltaTime
		GEODE_AS_STATIC_FUNCTION(setActualDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setAlphaBlending
		#define GEODE_STATICS_setAlphaBlending
		GEODE_AS_STATIC_FUNCTION(setAlphaBlending) 
	#endif

	#ifndef GEODE_STATICS_setContentScaleFactor
		#define GEODE_STATICS_setContentScaleFactor
		GEODE_AS_STATIC_FUNCTION(setContentScaleFactor) 
	#endif

	#ifndef GEODE_STATICS_setDefaultValues
		#define GEODE_STATICS_setDefaultValues
		GEODE_AS_STATIC_FUNCTION(setDefaultValues) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setDepthTest
		#define GEODE_STATICS_setDepthTest
		GEODE_AS_STATIC_FUNCTION(setDepthTest) 
	#endif

	#ifndef GEODE_STATICS_setDisplayStats
		#define GEODE_STATICS_setDisplayStats
		GEODE_AS_STATIC_FUNCTION(setDisplayStats) 
	#endif

	#ifndef GEODE_STATICS_setDontCallWillSwitch
		#define GEODE_STATICS_setDontCallWillSwitch
		GEODE_AS_STATIC_FUNCTION(setDontCallWillSwitch) 
	#endif

	#ifndef GEODE_STATICS_setGLDefaultValues
		#define GEODE_STATICS_setGLDefaultValues
		GEODE_AS_STATIC_FUNCTION(setGLDefaultValues) 
	#endif

	#ifndef GEODE_STATICS_setNextDeltaTimeZero
		#define GEODE_STATICS_setNextDeltaTimeZero
		GEODE_AS_STATIC_FUNCTION(setNextDeltaTimeZero) 
	#endif

	#ifndef GEODE_STATICS_setNextScene
		#define GEODE_STATICS_setNextScene
		GEODE_AS_STATIC_FUNCTION(setNextScene) 
	#endif

	#ifndef GEODE_STATICS_setNotificationNode
		#define GEODE_STATICS_setNotificationNode
		GEODE_AS_STATIC_FUNCTION(setNotificationNode) 
	#endif

	#ifndef GEODE_STATICS_setOpenGLView
		#define GEODE_STATICS_setOpenGLView
		GEODE_AS_STATIC_FUNCTION(setOpenGLView) 
	#endif

	#ifndef GEODE_STATICS_setProjection
		#define GEODE_STATICS_setProjection
		GEODE_AS_STATIC_FUNCTION(setProjection) 
	#endif

	#ifndef GEODE_STATICS_setSceneReference
		#define GEODE_STATICS_setSceneReference
		GEODE_AS_STATIC_FUNCTION(setSceneReference) 
	#endif

	#ifndef GEODE_STATICS_setSmoothFix
		#define GEODE_STATICS_setSmoothFix
		GEODE_AS_STATIC_FUNCTION(setSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_setSmoothFixCheck
		#define GEODE_STATICS_setSmoothFixCheck
		GEODE_AS_STATIC_FUNCTION(setSmoothFixCheck) 
	#endif

	#ifndef GEODE_STATICS_setViewport
		#define GEODE_STATICS_setViewport
		GEODE_AS_STATIC_FUNCTION(setViewport) 
	#endif

	#ifndef GEODE_STATICS_applySmoothFix
		#define GEODE_STATICS_applySmoothFix
		GEODE_AS_STATIC_FUNCTION(applySmoothFix) 
	#endif

	#ifndef GEODE_STATICS_calculateDeltaTime
		#define GEODE_STATICS_calculateDeltaTime
		GEODE_AS_STATIC_FUNCTION(calculateDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_calculateMPF
		#define GEODE_STATICS_calculateMPF
		GEODE_AS_STATIC_FUNCTION(calculateMPF) 
	#endif

	#ifndef GEODE_STATICS_checkSceneReference
		#define GEODE_STATICS_checkSceneReference
		GEODE_AS_STATIC_FUNCTION(checkSceneReference) 
	#endif

	#ifndef GEODE_STATICS_convertToGL
		#define GEODE_STATICS_convertToGL
		GEODE_AS_STATIC_FUNCTION(convertToGL) 
	#endif

	#ifndef GEODE_STATICS_convertToUI
		#define GEODE_STATICS_convertToUI
		GEODE_AS_STATIC_FUNCTION(convertToUI) 
	#endif

	#ifndef GEODE_STATICS_createStatsLabel
		#define GEODE_STATICS_createStatsLabel
		GEODE_AS_STATIC_FUNCTION(createStatsLabel) 
	#endif

	#ifndef GEODE_STATICS_drawScene
		#define GEODE_STATICS_drawScene
		GEODE_AS_STATIC_FUNCTION(drawScene) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_isDisplayStats
		#define GEODE_STATICS_isDisplayStats
		GEODE_AS_STATIC_FUNCTION(isDisplayStats) 
	#endif

	#ifndef GEODE_STATICS_isNextDeltaTimeZero
		#define GEODE_STATICS_isNextDeltaTimeZero
		GEODE_AS_STATIC_FUNCTION(isNextDeltaTimeZero) 
	#endif

	#ifndef GEODE_STATICS_isPaused
		#define GEODE_STATICS_isPaused
		GEODE_AS_STATIC_FUNCTION(isPaused) 
	#endif

	#ifndef GEODE_STATICS_isSendCleanupToScene
		#define GEODE_STATICS_isSendCleanupToScene
		GEODE_AS_STATIC_FUNCTION(isSendCleanupToScene) 
	#endif

	#ifndef GEODE_STATICS_levelForSceneInStack
		#define GEODE_STATICS_levelForSceneInStack
		GEODE_AS_STATIC_FUNCTION(levelForSceneInStack) 
	#endif

	#ifndef GEODE_STATICS_pause
		#define GEODE_STATICS_pause
		GEODE_AS_STATIC_FUNCTION(pause) 
	#endif

	#ifndef GEODE_STATICS_popScene
		#define GEODE_STATICS_popScene
		GEODE_AS_STATIC_FUNCTION(popScene) 
	#endif

	#ifndef GEODE_STATICS_popSceneWithTransition
		#define GEODE_STATICS_popSceneWithTransition
		GEODE_AS_STATIC_FUNCTION(popSceneWithTransition) 
	#endif

	#ifndef GEODE_STATICS_popToRootScene
		#define GEODE_STATICS_popToRootScene
		GEODE_AS_STATIC_FUNCTION(popToRootScene) 
	#endif

	#ifndef GEODE_STATICS_popToSceneInStack
		#define GEODE_STATICS_popToSceneInStack
		GEODE_AS_STATIC_FUNCTION(popToSceneInStack) 
	#endif

	#ifndef GEODE_STATICS_popToSceneStackLevel
		#define GEODE_STATICS_popToSceneStackLevel
		GEODE_AS_STATIC_FUNCTION(popToSceneStackLevel) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedData
		#define GEODE_STATICS_purgeCachedData
		GEODE_AS_STATIC_FUNCTION(purgeCachedData) 
	#endif

	#ifndef GEODE_STATICS_purgeDirector
		#define GEODE_STATICS_purgeDirector
		GEODE_AS_STATIC_FUNCTION(purgeDirector) 
	#endif

	#ifndef GEODE_STATICS_pushScene
		#define GEODE_STATICS_pushScene
		GEODE_AS_STATIC_FUNCTION(pushScene) 
	#endif

	#ifndef GEODE_STATICS_removeStatsLabel
		#define GEODE_STATICS_removeStatsLabel
		GEODE_AS_STATIC_FUNCTION(removeStatsLabel) 
	#endif

	#ifndef GEODE_STATICS_replaceScene
		#define GEODE_STATICS_replaceScene
		GEODE_AS_STATIC_FUNCTION(replaceScene) 
	#endif

	#ifndef GEODE_STATICS_resetSmoothFixCounter
		#define GEODE_STATICS_resetSmoothFixCounter
		GEODE_AS_STATIC_FUNCTION(resetSmoothFixCounter) 
	#endif

	#ifndef GEODE_STATICS_reshapeProjection
		#define GEODE_STATICS_reshapeProjection
		GEODE_AS_STATIC_FUNCTION(reshapeProjection) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_runWithScene
		#define GEODE_STATICS_runWithScene
		GEODE_AS_STATIC_FUNCTION(runWithScene) 
	#endif

	#ifndef GEODE_STATICS_sceneCount
		#define GEODE_STATICS_sceneCount
		GEODE_AS_STATIC_FUNCTION(sceneCount) 
	#endif

	#ifndef GEODE_STATICS_setupScreenScale
		#define GEODE_STATICS_setupScreenScale
		GEODE_AS_STATIC_FUNCTION(setupScreenScale) 
	#endif

	#ifndef GEODE_STATICS_showFPSLabel
		#define GEODE_STATICS_showFPSLabel
		GEODE_AS_STATIC_FUNCTION(showFPSLabel) 
	#endif

	#ifndef GEODE_STATICS_showStats
		#define GEODE_STATICS_showStats
		GEODE_AS_STATIC_FUNCTION(showStats) 
	#endif

	#ifndef GEODE_STATICS_toggleShowFPS
		#define GEODE_STATICS_toggleShowFPS
		GEODE_AS_STATIC_FUNCTION(toggleShowFPS) 
	#endif

	#ifndef GEODE_STATICS_updateContentScale
		#define GEODE_STATICS_updateContentScale
		GEODE_AS_STATIC_FUNCTION(updateContentScale) 
	#endif

	#ifndef GEODE_STATICS_updateScreenScale
		#define GEODE_STATICS_updateScreenScale
		GEODE_AS_STATIC_FUNCTION(updateScreenScale) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getScheduler
		#define GEODE_STATICS_getScheduler
		GEODE_AS_STATIC_FUNCTION(getScheduler) 
	#endif

	#ifndef GEODE_STATICS_setScheduler
		#define GEODE_STATICS_setScheduler
		GEODE_AS_STATIC_FUNCTION(setScheduler) 
	#endif

	#ifndef GEODE_STATICS_getActionManager
		#define GEODE_STATICS_getActionManager
		GEODE_AS_STATIC_FUNCTION(getActionManager) 
	#endif

	#ifndef GEODE_STATICS_setActionManager
		#define GEODE_STATICS_setActionManager
		GEODE_AS_STATIC_FUNCTION(setActionManager) 
	#endif

	#ifndef GEODE_STATICS_getTouchDispatcher
		#define GEODE_STATICS_getTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(getTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setTouchDispatcher
		#define GEODE_STATICS_setTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(setTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getKeypadDispatcher
		#define GEODE_STATICS_getKeypadDispatcher
		GEODE_AS_STATIC_FUNCTION(getKeypadDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setKeypadDispatcher
		#define GEODE_STATICS_setKeypadDispatcher
		GEODE_AS_STATIC_FUNCTION(setKeypadDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getKeyboardDispatcher
		#define GEODE_STATICS_getKeyboardDispatcher
		GEODE_AS_STATIC_FUNCTION(getKeyboardDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardDispatcher
		#define GEODE_STATICS_setKeyboardDispatcher
		GEODE_AS_STATIC_FUNCTION(setKeyboardDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getMouseDispatcher
		#define GEODE_STATICS_getMouseDispatcher
		GEODE_AS_STATIC_FUNCTION(getMouseDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setMouseDispatcher
		#define GEODE_STATICS_setMouseDispatcher
		GEODE_AS_STATIC_FUNCTION(setMouseDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getAccelerometer
		#define GEODE_STATICS_getAccelerometer
		GEODE_AS_STATIC_FUNCTION(getAccelerometer) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometer
		#define GEODE_STATICS_setAccelerometer
		GEODE_AS_STATIC_FUNCTION(setAccelerometer) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDirector> : ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>::ModifyBase;
		using Base = cocos2d::CCDirector;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45eba0, Default, cocos2d::CCDirector, sharedDirector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45ff90, Default, cocos2d::CCDirector, getWinSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45ef70, Default, cocos2d::CCDirector, setDefaultValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f2c0, Default, cocos2d::CCDirector, setDepthTest, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f250, Default, cocos2d::CCDirector, setGLDefaultValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4604c0, Default, cocos2d::CCDirector, convertToGL, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45fe60, Default, cocos2d::CCDirector, createStatsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f510, Default, cocos2d::CCDirector, drawScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460b30, Default, cocos2d::CCDirector, popSceneWithTransition, float, cocos2d::PopTransition)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460da0, Default, cocos2d::CCDirector, popToSceneStackLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460e10, Default, cocos2d::CCDirector, purgeDirector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4608a0, Default, cocos2d::CCDirector, pushScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x461020, Default, cocos2d::CCDirector, removeStatsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460950, Default, cocos2d::CCDirector, replaceScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460fa0, Default, cocos2d::CCDirector, resume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460800, Default, cocos2d::CCDirector, runWithScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460d20, Default, cocos2d::CCDirector, sceneCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45fe70, Default, cocos2d::CCDirector, toggleShowFPS, bool, gd::string, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45ecc0, Default, cocos2d::CCDirector, init, )
		}
	};
}
