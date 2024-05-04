#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FollowRewardPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onSpecialItem
		#define GEODE_STATICS_onSpecialItem
		GEODE_AS_STATIC_FUNCTION(onSpecialItem) 
	#endif

	#ifndef GEODE_STATICS_onRewardedVideo
		#define GEODE_STATICS_onRewardedVideo
		GEODE_AS_STATIC_FUNCTION(onRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_switchToOpenedState
		#define GEODE_STATICS_switchToOpenedState
		GEODE_AS_STATIC_FUNCTION(switchToOpenedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_updateRate
		#define GEODE_STATICS_updateRate
		GEODE_AS_STATIC_FUNCTION(updateRate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FollowRewardPage> : ModifyBase<ModifyDerive<Der, FollowRewardPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FollowRewardPage>>;
		using ModifyBase<ModifyDerive<Der, FollowRewardPage>>::ModifyBase;
		using Base = FollowRewardPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff7b0, Default, FollowRewardPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x401930, Default, FollowRewardPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4018c0, Default, FollowRewardPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x401690, Default, FollowRewardPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x401810, Default, FollowRewardPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x401670, Default, FollowRewardPage, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x401320, Default, FollowRewardPage, updateRate, )
		}
	};
}
