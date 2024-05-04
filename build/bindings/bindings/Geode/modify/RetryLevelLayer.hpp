#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RetryLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getEndText
		#define GEODE_STATICS_getEndText
		GEODE_AS_STATIC_FUNCTION(getEndText) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onRewardedVideo
		#define GEODE_STATICS_onRewardedVideo
		GEODE_AS_STATIC_FUNCTION(onRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_onMenu
		#define GEODE_STATICS_onMenu
		GEODE_AS_STATIC_FUNCTION(onMenu) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_setupLastProgress
		#define GEODE_STATICS_setupLastProgress
		GEODE_AS_STATIC_FUNCTION(setupLastProgress) 
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

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_shouldOffsetRewardCurrency
		#define GEODE_STATICS_shouldOffsetRewardCurrency
		GEODE_AS_STATIC_FUNCTION(shouldOffsetRewardCurrency) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RetryLevelLayer> : ModifyBase<ModifyDerive<Der, RetryLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RetryLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, RetryLevelLayer>>::ModifyBase;
		using Base = RetryLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d46e0, Default, RetryLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d4610, Default, RetryLevelLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d3530, Default, RetryLevelLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d40f0, Default, RetryLevelLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d41f0, Default, RetryLevelLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d45f0, Default, RetryLevelLayer, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d4730, Default, RetryLevelLayer, shouldOffsetRewardCurrency, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d46c0, Default, RetryLevelLayer, keyUp, cocos2d::enumKeyCodes)
		}
	};
}
