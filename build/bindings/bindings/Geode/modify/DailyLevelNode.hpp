#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DailyLevelNode.hpp>
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

	#ifndef GEODE_STATICS_onSkipLevel
		#define GEODE_STATICS_onSkipLevel
		GEODE_AS_STATIC_FUNCTION(onSkipLevel) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_showSkipButton
		#define GEODE_STATICS_showSkipButton
		GEODE_AS_STATIC_FUNCTION(showSkipButton) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DailyLevelNode> : ModifyBase<ModifyDerive<Der, DailyLevelNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DailyLevelNode>>;
		using ModifyBase<ModifyDerive<Der, DailyLevelNode>>::ModifyBase;
		using Base = DailyLevelNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211340, Default, DailyLevelNode, create, GJGameLevel*, DailyLevelPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211b10, Default, DailyLevelNode, init, GJGameLevel*, DailyLevelPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212660, Default, DailyLevelNode, onSkipLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212560, Default, DailyLevelNode, onClaimReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212820, Default, DailyLevelNode, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
