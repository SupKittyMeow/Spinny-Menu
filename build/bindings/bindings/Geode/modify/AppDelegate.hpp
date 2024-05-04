#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AppDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setIdleTimerDisabled
		#define GEODE_STATICS_setIdleTimerDisabled
		GEODE_AS_STATIC_FUNCTION(setIdleTimerDisabled) 
	#endif

	#ifndef GEODE_STATICS_checkSound
		#define GEODE_STATICS_checkSound
		GEODE_AS_STATIC_FUNCTION(checkSound) 
	#endif

	#ifndef GEODE_STATICS_pauseSound
		#define GEODE_STATICS_pauseSound
		GEODE_AS_STATIC_FUNCTION(pauseSound) 
	#endif

	#ifndef GEODE_STATICS_resumeSound
		#define GEODE_STATICS_resumeSound
		GEODE_AS_STATIC_FUNCTION(resumeSound) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingCircle
		#define GEODE_STATICS_hideLoadingCircle
		GEODE_AS_STATIC_FUNCTION(hideLoadingCircle) 
	#endif

	#ifndef GEODE_STATICS_loadingIsFinished
		#define GEODE_STATICS_loadingIsFinished
		GEODE_AS_STATIC_FUNCTION(loadingIsFinished) 
	#endif

	#ifndef GEODE_STATICS_showLoadingCircle
		#define GEODE_STATICS_showLoadingCircle
		GEODE_AS_STATIC_FUNCTION(showLoadingCircle) 
	#endif

	#ifndef GEODE_STATICS_bgScale
		#define GEODE_STATICS_bgScale
		GEODE_AS_STATIC_FUNCTION(bgScale) 
	#endif

	#ifndef GEODE_STATICS_musicTest
		#define GEODE_STATICS_musicTest
		GEODE_AS_STATIC_FUNCTION(musicTest) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_setupGLView
		#define GEODE_STATICS_setupGLView
		GEODE_AS_STATIC_FUNCTION(setupGLView) 
	#endif

	#ifndef GEODE_STATICS_platformShutdown
		#define GEODE_STATICS_platformShutdown
		GEODE_AS_STATIC_FUNCTION(platformShutdown) 
	#endif

	#ifndef GEODE_STATICS_applicationDidFinishLaunching
		#define GEODE_STATICS_applicationDidFinishLaunching
		GEODE_AS_STATIC_FUNCTION(applicationDidFinishLaunching) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillBecomeActive
		#define GEODE_STATICS_applicationWillBecomeActive
		GEODE_AS_STATIC_FUNCTION(applicationWillBecomeActive) 
	#endif

	#ifndef GEODE_STATICS_applicationWillResignActive
		#define GEODE_STATICS_applicationWillResignActive
		GEODE_AS_STATIC_FUNCTION(applicationWillResignActive) 
	#endif

	#ifndef GEODE_STATICS_trySaveGame
		#define GEODE_STATICS_trySaveGame
		GEODE_AS_STATIC_FUNCTION(trySaveGame) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AppDelegate> : ModifyBase<ModifyDerive<Der, AppDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AppDelegate>>;
		using ModifyBase<ModifyDerive<Der, AppDelegate>>::ModifyBase;
		using Base = AppDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f6f0, Default, AppDelegate, loadingIsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f6c0, Default, AppDelegate, bgScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f560, Default, AppDelegate, applicationDidFinishLaunching, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f800, Default, AppDelegate, applicationDidEnterBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f940, Default, AppDelegate, applicationWillEnterForeground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f700, Default, AppDelegate, applicationWillBecomeActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f720, Default, AppDelegate, applicationWillResignActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61fbd0, Default, AppDelegate, trySaveGame, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61fcb0, Default, AppDelegate, willSwitchToScene, cocos2d::CCScene*)
		}
	};
}
