#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelInfoLayer.hpp>
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

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onFeatured
		#define GEODE_STATICS_onFeatured
		GEODE_AS_STATIC_FUNCTION(onFeatured) 
	#endif

	#ifndef GEODE_STATICS_onAddToList
		#define GEODE_STATICS_onAddToList
		GEODE_AS_STATIC_FUNCTION(onAddToList) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onRateDemon
		#define GEODE_STATICS_onRateDemon
		GEODE_AS_STATIC_FUNCTION(onRateDemon) 
	#endif

	#ifndef GEODE_STATICS_onRateStars
		#define GEODE_STATICS_onRateStars
		GEODE_AS_STATIC_FUNCTION(onRateStars) 
	#endif

	#ifndef GEODE_STATICS_onSetFolder
		#define GEODE_STATICS_onSetFolder
		GEODE_AS_STATIC_FUNCTION(onSetFolder) 
	#endif

	#ifndef GEODE_STATICS_onPlayReplay
		#define GEODE_STATICS_onPlayReplay
		GEODE_AS_STATIC_FUNCTION(onPlayReplay) 
	#endif

	#ifndef GEODE_STATICS_onOwnerDelete
		#define GEODE_STATICS_onOwnerDelete
		GEODE_AS_STATIC_FUNCTION(onOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsMod
		#define GEODE_STATICS_onRateStarsMod
		GEODE_AS_STATIC_FUNCTION(onRateStarsMod) 
	#endif

	#ifndef GEODE_STATICS_onLowDetailMode
		#define GEODE_STATICS_onLowDetailMode
		GEODE_AS_STATIC_FUNCTION(onLowDetailMode) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onClone
		#define GEODE_STATICS_onClone
		GEODE_AS_STATIC_FUNCTION(onClone) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_loadLevelStep
		#define GEODE_STATICS_loadLevelStep
		GEODE_AS_STATIC_FUNCTION(loadLevelStep) 
	#endif

	#ifndef GEODE_STATICS_tryCloneLevel
		#define GEODE_STATICS_tryCloneLevel
		GEODE_AS_STATIC_FUNCTION(tryCloneLevel) 
	#endif

	#ifndef GEODE_STATICS_incrementLikes
		#define GEODE_STATICS_incrementLikes
		GEODE_AS_STATIC_FUNCTION(incrementLikes) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_showSongWarning
		#define GEODE_STATICS_showSongWarning
		GEODE_AS_STATIC_FUNCTION(showSongWarning) 
	#endif

	#ifndef GEODE_STATICS_showUpdateAlert
		#define GEODE_STATICS_showUpdateAlert
		GEODE_AS_STATIC_FUNCTION(showUpdateAlert) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToTop
		#define GEODE_STATICS_confirmMoveToTop
		GEODE_AS_STATIC_FUNCTION(confirmMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_incrementDislikes
		#define GEODE_STATICS_incrementDislikes
		GEODE_AS_STATIC_FUNCTION(incrementDislikes) 
	#endif

	#ifndef GEODE_STATICS_setupProgressBars
		#define GEODE_STATICS_setupProgressBars
		GEODE_AS_STATIC_FUNCTION(setupProgressBars) 
	#endif

	#ifndef GEODE_STATICS_updateLabelValues
		#define GEODE_STATICS_updateLabelValues
		GEODE_AS_STATIC_FUNCTION(updateLabelValues) 
	#endif

	#ifndef GEODE_STATICS_updateSideButtons
		#define GEODE_STATICS_updateSideButtons
		GEODE_AS_STATIC_FUNCTION(updateSideButtons) 
	#endif

	#ifndef GEODE_STATICS_confirmOwnerDelete
		#define GEODE_STATICS_confirmOwnerDelete
		GEODE_AS_STATIC_FUNCTION(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToBottom
		#define GEODE_STATICS_confirmMoveToBottom
		GEODE_AS_STATIC_FUNCTION(confirmMoveToBottom) 
	#endif

	#ifndef GEODE_STATICS_shouldDownloadLevel
		#define GEODE_STATICS_shouldDownloadLevel
		GEODE_AS_STATIC_FUNCTION(shouldDownloadLevel) 
	#endif

	#ifndef GEODE_STATICS_setupPlatformerStats
		#define GEODE_STATICS_setupPlatformerStats
		GEODE_AS_STATIC_FUNCTION(setupPlatformerStats) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_playStep4
		#define GEODE_STATICS_playStep4
		GEODE_AS_STATIC_FUNCTION(playStep4) 
	#endif

	#ifndef GEODE_STATICS_tryShowAd
		#define GEODE_STATICS_tryShowAd
		GEODE_AS_STATIC_FUNCTION(tryShowAd) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_numberInputClosed
		#define GEODE_STATICS_numberInputClosed
		GEODE_AS_STATIC_FUNCTION(numberInputClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFinished
		#define GEODE_STATICS_levelDownloadFinished
		GEODE_AS_STATIC_FUNCTION(levelDownloadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFailed
		#define GEODE_STATICS_levelDownloadFailed
		GEODE_AS_STATIC_FUNCTION(levelDownloadFailed) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFinished
		#define GEODE_STATICS_levelUpdateFinished
		GEODE_AS_STATIC_FUNCTION(levelUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFailed
		#define GEODE_STATICS_levelUpdateFailed
		GEODE_AS_STATIC_FUNCTION(levelUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFinished
		#define GEODE_STATICS_levelDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFailed
		#define GEODE_STATICS_levelDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_rateLevelClosed
		#define GEODE_STATICS_rateLevelClosed
		GEODE_AS_STATIC_FUNCTION(rateLevelClosed) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelInfoLayer> : ModifyBase<ModifyDerive<Der, LevelInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelInfoLayer>>::ModifyBase;
		using Base = LevelInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297220, Default, LevelInfoLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2973f0, Default, LevelInfoLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c320, Default, LevelInfoLayer, onFavorite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c620, Default, LevelInfoLayer, onAddToList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c030, Default, LevelInfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ba30, Default, LevelInfoLayer, onRateDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b8d0, Default, LevelInfoLayer, onRateStars, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c580, Default, LevelInfoLayer, onSetFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x299740, Default, LevelInfoLayer, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bc30, Default, LevelInfoLayer, onRateStarsMod, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b7e0, Default, LevelInfoLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bfb0, Default, LevelInfoLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b7b0, Default, LevelInfoLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b850, Default, LevelInfoLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2997c0, Default, LevelInfoLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c2c0, Default, LevelInfoLayer, onGarage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b6e0, Default, LevelInfoLayer, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bd60, Default, LevelInfoLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b5f0, Default, LevelInfoLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x299f40, Default, LevelInfoLayer, downloadLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29deb0, Default, LevelInfoLayer, loadLevelStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29be90, Default, LevelInfoLayer, tryCloneLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29a030, Default, LevelInfoLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29dc90, Default, LevelInfoLayer, showSongWarning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29d7f0, Default, LevelInfoLayer, showUpdateAlert, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c3a0, Default, LevelInfoLayer, confirmMoveToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29aec0, Default, LevelInfoLayer, setupProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c920, Default, LevelInfoLayer, updateLabelValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ba90, Default, LevelInfoLayer, updateSideButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bc80, Default, LevelInfoLayer, confirmOwnerDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c480, Default, LevelInfoLayer, confirmMoveToBottom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ab80, Default, LevelInfoLayer, setupPlatformerStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29dd60, Default, LevelInfoLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29de20, Default, LevelInfoLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29df60, Default, LevelInfoLayer, playStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e8f0, Default, LevelInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e920, Default, LevelInfoLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e130, Default, LevelInfoLayer, numberInputClosed, NumberInputLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c680, Default, LevelInfoLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29d300, Default, LevelInfoLayer, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29d690, Default, LevelInfoLayer, levelDownloadFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29d780, Default, LevelInfoLayer, levelUpdateFinished, GJGameLevel*, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29d970, Default, LevelInfoLayer, levelUpdateFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29da70, Default, LevelInfoLayer, levelDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29db80, Default, LevelInfoLayer, levelDeleteFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e5e0, Default, LevelInfoLayer, rateLevelClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e610, Default, LevelInfoLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e720, Default, LevelInfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c7b0, Default, LevelInfoLayer, setIDPopupClosed, SetIDPopup*, int)
		}
	};
}
