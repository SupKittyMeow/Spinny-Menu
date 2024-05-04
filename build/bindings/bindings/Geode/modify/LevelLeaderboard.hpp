#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
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

	#ifndef GEODE_STATICS_getLocalScores
		#define GEODE_STATICS_getLocalScores
		GEODE_AS_STATIC_FUNCTION(getLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_onChangeMode
		#define GEODE_STATICS_onChangeMode
		GEODE_AS_STATIC_FUNCTION(onChangeMode) 
	#endif

	#ifndef GEODE_STATICS_onChangeType
		#define GEODE_STATICS_onChangeType
		GEODE_AS_STATIC_FUNCTION(onChangeType) 
	#endif

	#ifndef GEODE_STATICS_onDeleteLocalScores
		#define GEODE_STATICS_onDeleteLocalScores
		GEODE_AS_STATIC_FUNCTION(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_loadScores
		#define GEODE_STATICS_loadScores
		GEODE_AS_STATIC_FUNCTION(loadScores) 
	#endif

	#ifndef GEODE_STATICS_setupLeaderboard
		#define GEODE_STATICS_setupLeaderboard
		GEODE_AS_STATIC_FUNCTION(setupLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_deleteLocalScores
		#define GEODE_STATICS_deleteLocalScores
		GEODE_AS_STATIC_FUNCTION(deleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_reloadLeaderboard
		#define GEODE_STATICS_reloadLeaderboard
		GEODE_AS_STATIC_FUNCTION(reloadLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
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

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelLeaderboard> : ModifyBase<ModifyDerive<Der, LevelLeaderboard>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelLeaderboard>>;
		using ModifyBase<ModifyDerive<Der, LevelLeaderboard>>::ModifyBase;
		using Base = LevelLeaderboard;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8480, Default, LevelLeaderboard, create, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8610, Default, LevelLeaderboard, init, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9fe0, Default, LevelLeaderboard, getLocalScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9640, Default, LevelLeaderboard, getSpriteButton, gd::string, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b97f0, Default, LevelLeaderboard, onChangeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9a20, Default, LevelLeaderboard, onChangeType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9840, Default, LevelLeaderboard, onDeleteLocalScores, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9910, Default, LevelLeaderboard, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9940, Default, LevelLeaderboard, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9a80, Default, LevelLeaderboard, loadScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9c60, Default, LevelLeaderboard, setupLeaderboard, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba380, Default, LevelLeaderboard, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba310, Default, LevelLeaderboard, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba8d0, Default, LevelLeaderboard, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba5d0, Default, LevelLeaderboard, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba710, Default, LevelLeaderboard, loadLeaderboardFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9f60, Default, LevelLeaderboard, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba160, Default, LevelLeaderboard, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba190, Default, LevelLeaderboard, updateUserScoreFailed, )
		}
	};
}
