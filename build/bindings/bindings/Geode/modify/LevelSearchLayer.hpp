#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSearchLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getSearchObject
		#define GEODE_STATICS_getSearchObject
		GEODE_AS_STATIC_FUNCTION(getSearchObject) 
	#endif

	#ifndef GEODE_STATICS_getSearchDiffKey
		#define GEODE_STATICS_getSearchDiffKey
		GEODE_AS_STATIC_FUNCTION(getSearchDiffKey) 
	#endif

	#ifndef GEODE_STATICS_onFollowed
		#define GEODE_STATICS_onFollowed
		GEODE_AS_STATIC_FUNCTION(onFollowed) 
	#endif

	#ifndef GEODE_STATICS_onTrending
		#define GEODE_STATICS_onTrending
		GEODE_AS_STATIC_FUNCTION(onTrending) 
	#endif

	#ifndef GEODE_STATICS_onMostLikes
		#define GEODE_STATICS_onMostLikes
		GEODE_AS_STATIC_FUNCTION(onMostLikes) 
	#endif

	#ifndef GEODE_STATICS_onStarAward
		#define GEODE_STATICS_onStarAward
		GEODE_AS_STATIC_FUNCTION(onStarAward) 
	#endif

	#ifndef GEODE_STATICS_onSuggested
		#define GEODE_STATICS_onSuggested
		GEODE_AS_STATIC_FUNCTION(onSuggested) 
	#endif

	#ifndef GEODE_STATICS_onMostRecent
		#define GEODE_STATICS_onMostRecent
		GEODE_AS_STATIC_FUNCTION(onMostRecent) 
	#endif

	#ifndef GEODE_STATICS_onSearchMode
		#define GEODE_STATICS_onSearchMode
		GEODE_AS_STATIC_FUNCTION(onSearchMode) 
	#endif

	#ifndef GEODE_STATICS_onSearchUser
		#define GEODE_STATICS_onSearchUser
		GEODE_AS_STATIC_FUNCTION(onSearchUser) 
	#endif

	#ifndef GEODE_STATICS_onLatestStars
		#define GEODE_STATICS_onLatestStars
		GEODE_AS_STATIC_FUNCTION(onLatestStars) 
	#endif

	#ifndef GEODE_STATICS_onMoreOptions
		#define GEODE_STATICS_onMoreOptions
		GEODE_AS_STATIC_FUNCTION(onMoreOptions) 
	#endif

	#ifndef GEODE_STATICS_onSpecialDemon
		#define GEODE_STATICS_onSpecialDemon
		GEODE_AS_STATIC_FUNCTION(onSpecialDemon) 
	#endif

	#ifndef GEODE_STATICS_onMostDownloaded
		#define GEODE_STATICS_onMostDownloaded
		GEODE_AS_STATIC_FUNCTION(onMostDownloaded) 
	#endif

	#ifndef GEODE_STATICS_onClearFreeSearch
		#define GEODE_STATICS_onClearFreeSearch
		GEODE_AS_STATIC_FUNCTION(onClearFreeSearch) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onMagic
		#define GEODE_STATICS_onMagic
		GEODE_AS_STATIC_FUNCTION(onMagic) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_toggleStar
		#define GEODE_STATICS_toggleStar
		GEODE_AS_STATIC_FUNCTION(toggleStar) 
	#endif

	#ifndef GEODE_STATICS_toggleTime
		#define GEODE_STATICS_toggleTime
		GEODE_AS_STATIC_FUNCTION(toggleTime) 
	#endif

	#ifndef GEODE_STATICS_clearFilters
		#define GEODE_STATICS_clearFilters
		GEODE_AS_STATIC_FUNCTION(clearFilters) 
	#endif

	#ifndef GEODE_STATICS_toggleTimeNum
		#define GEODE_STATICS_toggleTimeNum
		GEODE_AS_STATIC_FUNCTION(toggleTimeNum) 
	#endif

	#ifndef GEODE_STATICS_toggleDifficulty
		#define GEODE_STATICS_toggleDifficulty
		GEODE_AS_STATIC_FUNCTION(toggleDifficulty) 
	#endif

	#ifndef GEODE_STATICS_updateSearchLabel
		#define GEODE_STATICS_updateSearchLabel
		GEODE_AS_STATIC_FUNCTION(updateSearchLabel) 
	#endif

	#ifndef GEODE_STATICS_confirmClearFilters
		#define GEODE_STATICS_confirmClearFilters
		GEODE_AS_STATIC_FUNCTION(confirmClearFilters) 
	#endif

	#ifndef GEODE_STATICS_toggleDifficultyNum
		#define GEODE_STATICS_toggleDifficultyNum
		GEODE_AS_STATIC_FUNCTION(toggleDifficultyNum) 
	#endif

	#ifndef GEODE_STATICS_checkDiff
		#define GEODE_STATICS_checkDiff
		GEODE_AS_STATIC_FUNCTION(checkDiff) 
	#endif

	#ifndef GEODE_STATICS_checkTime
		#define GEODE_STATICS_checkTime
		GEODE_AS_STATIC_FUNCTION(checkTime) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_demonFilterSelectClosed
		#define GEODE_STATICS_demonFilterSelectClosed
		GEODE_AS_STATIC_FUNCTION(demonFilterSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSearchLayer> : ModifyBase<ModifyDerive<Der, LevelSearchLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSearchLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSearchLayer>>::ModifyBase;
		using Base = LevelSearchLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ebb80, Default, LevelSearchLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eba40, Default, LevelSearchLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ebc90, Default, LevelSearchLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0380, Default, LevelSearchLayer, getSearchObject, SearchType, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0710, Default, LevelSearchLayer, getSearchDiffKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eee90, Default, LevelSearchLayer, onFollowed, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eec10, Default, LevelSearchLayer, onTrending, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eead0, Default, LevelSearchLayer, onMostLikes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f08c0, Default, LevelSearchLayer, onStarAward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eeb70, Default, LevelSearchLayer, onSuggested, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eecb0, Default, LevelSearchLayer, onMostRecent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee380, Default, LevelSearchLayer, onSearchMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee800, Default, LevelSearchLayer, onSearchUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eedf0, Default, LevelSearchLayer, onLatestStars, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee360, Default, LevelSearchLayer, onMoreOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef490, Default, LevelSearchLayer, onSpecialDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eea30, Default, LevelSearchLayer, onMostDownloaded, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee920, Default, LevelSearchLayer, onClearFreeSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef6d0, Default, LevelSearchLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eed50, Default, LevelSearchLayer, onMagic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee6f0, Default, LevelSearchLayer, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eef30, Default, LevelSearchLayer, onFriends, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef650, Default, LevelSearchLayer, toggleStar, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef4d0, Default, LevelSearchLayer, toggleTime, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5efdc0, Default, LevelSearchLayer, clearFilters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef890, Default, LevelSearchLayer, toggleTimeNum, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eefd0, Default, LevelSearchLayer, toggleDifficulty, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee3d0, Default, LevelSearchLayer, updateSearchLabel, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ee280, Default, LevelSearchLayer, confirmClearFilters, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ef720, Default, LevelSearchLayer, toggleDifficultyNum, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0960, Default, LevelSearchLayer, checkDiff, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0a50, Default, LevelSearchLayer, checkTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0b60, Default, LevelSearchLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0100, Default, LevelSearchLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f01c0, Default, LevelSearchLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0290, Default, LevelSearchLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f0090, Default, LevelSearchLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5efb80, Default, LevelSearchLayer, demonFilterSelectClosed, int)
		}
	};
}
