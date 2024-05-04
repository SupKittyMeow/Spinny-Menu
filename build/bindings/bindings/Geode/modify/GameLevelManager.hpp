#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_getDailyID
		#define GEODE_STATICS_getDailyID
		GEODE_AS_STATIC_FUNCTION(getDailyID) 
	#endif

	#ifndef GEODE_STATICS_getDescKey
		#define GEODE_STATICS_getDescKey
		GEODE_AS_STATIC_FUNCTION(getDescKey) 
	#endif

	#ifndef GEODE_STATICS_getDiffKey
		#define GEODE_STATICS_getDiffKey
		GEODE_AS_STATIC_FUNCTION(getDiffKey) 
	#endif

	#ifndef GEODE_STATICS_getDiffVal
		#define GEODE_STATICS_getDiffVal
		GEODE_AS_STATIC_FUNCTION(getDiffVal) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getPageInfo
		#define GEODE_STATICS_getPageInfo
		GEODE_AS_STATIC_FUNCTION(getPageInfo) 
	#endif

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getUserList
		#define GEODE_STATICS_getUserList
		GEODE_AS_STATIC_FUNCTION(getUserList) 
	#endif

	#ifndef GEODE_STATICS_getGauntlets
		#define GEODE_STATICS_getGauntlets
		GEODE_AS_STATIC_FUNCTION(getGauntlets) 
	#endif

	#ifndef GEODE_STATICS_getGJRewards
		#define GEODE_STATICS_getGJRewards
		GEODE_AS_STATIC_FUNCTION(getGJRewards) 
	#endif

	#ifndef GEODE_STATICS_getIntForKey
		#define GEODE_STATICS_getIntForKey
		GEODE_AS_STATIC_FUNCTION(getIntForKey) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getReportKey
		#define GEODE_STATICS_getReportKey
		GEODE_AS_STATIC_FUNCTION(getReportKey) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getCommentKey
		#define GEODE_STATICS_getCommentKey
		GEODE_AS_STATIC_FUNCTION(getCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getDailyTimer
		#define GEODE_STATICS_getDailyTimer
		GEODE_AS_STATIC_FUNCTION(getDailyTimer) 
	#endif

	#ifndef GEODE_STATICS_getFolderName
		#define GEODE_STATICS_getFolderName
		GEODE_AS_STATIC_FUNCTION(getFolderName) 
	#endif

	#ifndef GEODE_STATICS_getGJUserInfo
		#define GEODE_STATICS_getGJUserInfo
		GEODE_AS_STATIC_FUNCTION(getGJUserInfo) 
	#endif

	#ifndef GEODE_STATICS_getLevelLists
		#define GEODE_STATICS_getLevelLists
		GEODE_AS_STATIC_FUNCTION(getLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getMessageKey
		#define GEODE_STATICS_getMessageKey
		GEODE_AS_STATIC_FUNCTION(getMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getTopArtists
		#define GEODE_STATICS_getTopArtists
		GEODE_AS_STATIC_FUNCTION(getTopArtists) 
	#endif

	#ifndef GEODE_STATICS_getGauntletKey
		#define GEODE_STATICS_getGauntletKey
		GEODE_AS_STATIC_FUNCTION(getGauntletKey) 
	#endif

	#ifndef GEODE_STATICS_getLikeItemKey
		#define GEODE_STATICS_getLikeItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeItemKey) 
	#endif

	#ifndef GEODE_STATICS_getMessagesKey
		#define GEODE_STATICS_getMessagesKey
		GEODE_AS_STATIC_FUNCTION(getMessagesKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSearchScene
		#define GEODE_STATICS_getSearchScene
		GEODE_AS_STATIC_FUNCTION(getSearchScene) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoKey
		#define GEODE_STATICS_getUserInfoKey
		GEODE_AS_STATIC_FUNCTION(getUserInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getGJChallenges
		#define GEODE_STATICS_getGJChallenges
		GEODE_AS_STATIC_FUNCTION(getGJChallenges) 
	#endif

	#ifndef GEODE_STATICS_getLevelListKey
		#define GEODE_STATICS_getLevelListKey
		GEODE_AS_STATIC_FUNCTION(getLevelListKey) 
	#endif

	#ifndef GEODE_STATICS_getOnlineLevels
		#define GEODE_STATICS_getOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getRateStarsKey
		#define GEODE_STATICS_getRateStarsKey
		GEODE_AS_STATIC_FUNCTION(getRateStarsKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedMapPack
		#define GEODE_STATICS_getSavedMapPack
		GEODE_AS_STATIC_FUNCTION(getSavedMapPack) 
	#endif

	#ifndef GEODE_STATICS_getUserMessages
		#define GEODE_STATICS_getUserMessages
		GEODE_AS_STATIC_FUNCTION(getUserMessages) 
	#endif

	#ifndef GEODE_STATICS_getActiveDailyID
		#define GEODE_STATICS_getActiveDailyID
		GEODE_AS_STATIC_FUNCTION(getActiveDailyID) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelSaveData
		#define GEODE_STATICS_getLevelSaveData
		GEODE_AS_STATIC_FUNCTION(getLevelSaveData) 
	#endif

	#ifndef GEODE_STATICS_getNextLevelName
		#define GEODE_STATICS_getNextLevelName
		GEODE_AS_STATIC_FUNCTION(getNextLevelName) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntlet
		#define GEODE_STATICS_getSavedGauntlet
		GEODE_AS_STATIC_FUNCTION(getSavedGauntlet) 
	#endif

	#ifndef GEODE_STATICS_getTopArtistsKey
		#define GEODE_STATICS_getTopArtistsKey
		GEODE_AS_STATIC_FUNCTION(getTopArtistsKey) 
	#endif

	#ifndef GEODE_STATICS_getAllUsedSongIDs
		#define GEODE_STATICS_getAllUsedSongIDs
		GEODE_AS_STATIC_FUNCTION(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGauntletLevels
		#define GEODE_STATICS_getGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getPostCommentKey
		#define GEODE_STATICS_getPostCommentKey
		GEODE_AS_STATIC_FUNCTION(getPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelList
		#define GEODE_STATICS_getSavedLevelList
		GEODE_AS_STATIC_FUNCTION(getSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserList
		#define GEODE_STATICS_getStoredUserList
		GEODE_AS_STATIC_FUNCTION(getStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevel
		#define GEODE_STATICS_getSavedDailyLevel
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelLists
		#define GEODE_STATICS_getSavedLevelLists
		GEODE_AS_STATIC_FUNCTION(getSavedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getSplitIntFromKey
		#define GEODE_STATICS_getSplitIntFromKey
		GEODE_AS_STATIC_FUNCTION(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_STATICS_getDeleteCommentKey
		#define GEODE_STATICS_getDeleteCommentKey
		GEODE_AS_STATIC_FUNCTION(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getDeleteMessageKey
		#define GEODE_STATICS_getDeleteMessageKey
		GEODE_AS_STATIC_FUNCTION(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequestKey
		#define GEODE_STATICS_getFriendRequestKey
		GEODE_AS_STATIC_FUNCTION(getFriendRequestKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelDownloadKey
		#define GEODE_STATICS_getLevelDownloadKey
		GEODE_AS_STATIC_FUNCTION(getLevelDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboard
		#define GEODE_STATICS_getLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelByName
		#define GEODE_STATICS_getLocalLevelByName
		GEODE_AS_STATIC_FUNCTION(getLocalLevelByName) 
	#endif

	#ifndef GEODE_STATICS_getLowestLevelOrder
		#define GEODE_STATICS_getLowestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getLowestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getUploadMessageKey
		#define GEODE_STATICS_getUploadMessageKey
		GEODE_AS_STATIC_FUNCTION(getUploadMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getAccountCommentKey
		#define GEODE_STATICS_getAccountCommentKey
		GEODE_AS_STATIC_FUNCTION(getAccountCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getAllSmartTemplates
		#define GEODE_STATICS_getAllSmartTemplates
		GEODE_AS_STATIC_FUNCTION(getAllSmartTemplates) 
	#endif

	#ifndef GEODE_STATICS_getGauntletsearchKey
		#define GEODE_STATICS_getGauntletsearchKey
		GEODE_AS_STATIC_FUNCTION(getGauntletsearchKey) 
	#endif

	#ifndef GEODE_STATICS_getGJDailyLevelState
		#define GEODE_STATICS_getGJDailyLevelState
		GEODE_AS_STATIC_FUNCTION(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_getHighestLevelOrder
		#define GEODE_STATICS_getHighestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getHighestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessage
		#define GEODE_STATICS_getStoredUserMessage
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessage) 
	#endif

	#ifndef GEODE_STATICS_getLikeAccountItemKey
		#define GEODE_STATICS_getLikeAccountItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeTemplateID
		#define GEODE_STATICS_getNextFreeTemplateID
		GEODE_AS_STATIC_FUNCTION(getNextFreeTemplateID) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntletLevel
		#define GEODE_STATICS_getSavedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_getStoredOnlineLevels
		#define GEODE_STATICS_getStoredOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getActiveSmartTemplate
		#define GEODE_STATICS_getActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(getActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboardKey
		#define GEODE_STATICS_getLevelLeaderboardKey
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboardKey) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelComments
		#define GEODE_STATICS_getStoredLevelComments
		GEODE_AS_STATIC_FUNCTION(getStoredLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessageReply
		#define GEODE_STATICS_getStoredUserMessageReply
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevelFromLevelID
		#define GEODE_STATICS_getSavedDailyLevelFromLevelID
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevelFromLevelID) 
	#endif

	#ifndef GEODE_STATICS_getNews
		#define GEODE_STATICS_getNews
		GEODE_AS_STATIC_FUNCTION(getNews) 
	#endif

	#ifndef GEODE_STATICS_getUsers
		#define GEODE_STATICS_getUsers
		GEODE_AS_STATIC_FUNCTION(getUsers) 
	#endif

	#ifndef GEODE_STATICS_getLenKey
		#define GEODE_STATICS_getLenKey
		GEODE_AS_STATIC_FUNCTION(getLenKey) 
	#endif

	#ifndef GEODE_STATICS_getLenVal
		#define GEODE_STATICS_getLenVal
		GEODE_AS_STATIC_FUNCTION(getLenVal) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setIntForKey
		#define GEODE_STATICS_setIntForKey
		GEODE_AS_STATIC_FUNCTION(setIntForKey) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setFolderName
		#define GEODE_STATICS_setFolderName
		GEODE_AS_STATIC_FUNCTION(setFolderName) 
	#endif

	#ifndef GEODE_STATICS_setLevelStars
		#define GEODE_STATICS_setLevelStars
		GEODE_AS_STATIC_FUNCTION(setLevelStars) 
	#endif

	#ifndef GEODE_STATICS_setLevelFeatured
		#define GEODE_STATICS_setLevelFeatured
		GEODE_AS_STATIC_FUNCTION(setLevelFeatured) 
	#endif

	#ifndef GEODE_STATICS_setActiveSmartTemplate
		#define GEODE_STATICS_setActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(setActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_onBanUserCompleted
		#define GEODE_STATICS_onBanUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBanUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetNewsCompleted
		#define GEODE_STATICS_onGetNewsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetNewsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUsersCompleted
		#define GEODE_STATICS_onGetUsersCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLikeItemCompleted
		#define GEODE_STATICS_onLikeItemCompleted
		GEODE_AS_STATIC_FUNCTION(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBlockUserCompleted
		#define GEODE_STATICS_onBlockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateDemonCompleted
		#define GEODE_STATICS_onRateDemonCompleted
		GEODE_AS_STATIC_FUNCTION(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetMapPacksCompleted
		#define GEODE_STATICS_onGetMapPacksCompleted
		GEODE_AS_STATIC_FUNCTION(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserListCompleted
		#define GEODE_STATICS_onGetUserListCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportLevelCompleted
		#define GEODE_STATICS_onReportLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUserCompleted
		#define GEODE_STATICS_onUnblockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLevelCompleted
		#define GEODE_STATICS_onUpdateLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelCompleted
		#define GEODE_STATICS_onUploadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGauntletsCompleted
		#define GEODE_STATICS_onGetGauntletsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJRewardsCompleted
		#define GEODE_STATICS_onGetGJRewardsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriendCompleted
		#define GEODE_STATICS_onRemoveFriendCompleted
		GEODE_AS_STATIC_FUNCTION(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRestoreItemsCompleted
		#define GEODE_STATICS_onRestoreItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentCompleted
		#define GEODE_STATICS_onDeleteCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadLevelCompleted
		#define GEODE_STATICS_onDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJUserInfoCompleted
		#define GEODE_STATICS_onGetGJUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelListsCompleted
		#define GEODE_STATICS_onGetLevelListsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetTopArtistsCompleted
		#define GEODE_STATICS_onGetTopArtistsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSubmitUserInfoCompleted
		#define GEODE_STATICS_onSubmitUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJChallengesCompleted
		#define GEODE_STATICS_onGetGJChallengesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetOnlineLevelsCompleted
		#define GEODE_STATICS_onGetOnlineLevelsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserMessagesCompleted
		#define GEODE_STATICS_onGetUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateUserScoreCompleted
		#define GEODE_STATICS_onUpdateUserScoreCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelListCompleted
		#define GEODE_STATICS_onUploadLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelCommentsCompleted
		#define GEODE_STATICS_onGetLevelCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelSaveDataCompleted
		#define GEODE_STATICS_onGetLevelSaveDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelFeaturedCompleted
		#define GEODE_STATICS_onSetLevelFeaturedCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelCompleted
		#define GEODE_STATICS_onDeleteServerLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFriendRequestsCompleted
		#define GEODE_STATICS_onGetFriendRequestsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReadFriendRequestCompleted
		#define GEODE_STATICS_onReadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestUserAccessCompleted
		#define GEODE_STATICS_onRequestUserAccessCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSuggestLevelStarsCompleted
		#define GEODE_STATICS_onSuggestLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescriptionCompleted
		#define GEODE_STATICS_onUpdateDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountCommentsCompleted
		#define GEODE_STATICS_onGetAccountCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAcceptFriendRequestCompleted
		#define GEODE_STATICS_onAcceptFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFriendRequestCompleted
		#define GEODE_STATICS_onDeleteFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadUserMessageCompleted
		#define GEODE_STATICS_onDownloadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelLeaderboardCompleted
		#define GEODE_STATICS_onGetLevelLeaderboardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadFriendRequestCompleted
		#define GEODE_STATICS_onUploadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJDailyLevelStateCompleted
		#define GEODE_STATICS_onGetGJDailyLevelStateCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLeaderboardScoresCompleted
		#define GEODE_STATICS_onGetLeaderboardScoresCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelListCompleted
		#define GEODE_STATICS_onDeleteServerLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_followUser
		#define GEODE_STATICS_followUser
		GEODE_AS_STATIC_FUNCTION(followUser) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_deleteLevel
		#define GEODE_STATICS_deleteLevel
		GEODE_AS_STATIC_FUNCTION(deleteLevel) 
	#endif

	#ifndef GEODE_STATICS_isTimeValid
		#define GEODE_STATICS_isTimeValid
		GEODE_AS_STATIC_FUNCTION(isTimeValid) 
	#endif

	#ifndef GEODE_STATICS_keyHasTimer
		#define GEODE_STATICS_keyHasTimer
		GEODE_AS_STATIC_FUNCTION(keyHasTimer) 
	#endif

	#ifndef GEODE_STATICS_reportLevel
		#define GEODE_STATICS_reportLevel
		GEODE_AS_STATIC_FUNCTION(reportLevel) 
	#endif

	#ifndef GEODE_STATICS_saveMapPack
		#define GEODE_STATICS_saveMapPack
		GEODE_AS_STATIC_FUNCTION(saveMapPack) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_updateLevel
		#define GEODE_STATICS_updateLevel
		GEODE_AS_STATIC_FUNCTION(updateLevel) 
	#endif

	#ifndef GEODE_STATICS_uploadLevel
		#define GEODE_STATICS_uploadLevel
		GEODE_AS_STATIC_FUNCTION(uploadLevel) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItem
		#define GEODE_STATICS_hasLikedItem
		GEODE_AS_STATIC_FUNCTION(hasLikedItem) 
	#endif

	#ifndef GEODE_STATICS_removeFriend
		#define GEODE_STATICS_removeFriend
		GEODE_AS_STATIC_FUNCTION(removeFriend) 
	#endif

	#ifndef GEODE_STATICS_restoreItems
		#define GEODE_STATICS_restoreItems
		GEODE_AS_STATIC_FUNCTION(restoreItems) 
	#endif

	#ifndef GEODE_STATICS_saveGauntlet
		#define GEODE_STATICS_saveGauntlet
		GEODE_AS_STATIC_FUNCTION(saveGauntlet) 
	#endif

	#ifndef GEODE_STATICS_unfollowUser
		#define GEODE_STATICS_unfollowUser
		GEODE_AS_STATIC_FUNCTION(unfollowUser) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_deleteComment
		#define GEODE_STATICS_deleteComment
		GEODE_AS_STATIC_FUNCTION(deleteComment) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_gotoLevelPage
		#define GEODE_STATICS_gotoLevelPage
		GEODE_AS_STATIC_FUNCTION(gotoLevelPage) 
	#endif

	#ifndef GEODE_STATICS_hasRatedDemon
		#define GEODE_STATICS_hasRatedDemon
		GEODE_AS_STATIC_FUNCTION(hasRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_isUpdateValid
		#define GEODE_STATICS_isUpdateValid
		GEODE_AS_STATIC_FUNCTION(isUpdateValid) 
	#endif

	#ifndef GEODE_STATICS_makeTimeStamp
		#define GEODE_STATICS_makeTimeStamp
		GEODE_AS_STATIC_FUNCTION(makeTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_saveLevelList
		#define GEODE_STATICS_saveLevelList
		GEODE_AS_STATIC_FUNCTION(saveLevelList) 
	#endif

	#ifndef GEODE_STATICS_storeUserInfo
		#define GEODE_STATICS_storeUserInfo
		GEODE_AS_STATIC_FUNCTION(storeUserInfo) 
	#endif

	#ifndef GEODE_STATICS_storeUserName
		#define GEODE_STATICS_storeUserName
		GEODE_AS_STATIC_FUNCTION(storeUserName) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_createPageInfo
		#define GEODE_STATICS_createPageInfo
		GEODE_AS_STATIC_FUNCTION(createPageInfo) 
	#endif

	#ifndef GEODE_STATICS_resetAllTimers
		#define GEODE_STATICS_resetAllTimers
		GEODE_AS_STATIC_FUNCTION(resetAllTimers) 
	#endif

	#ifndef GEODE_STATICS_resetGauntlets
		#define GEODE_STATICS_resetGauntlets
		GEODE_AS_STATIC_FUNCTION(resetGauntlets) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_saveLocalScore
		#define GEODE_STATICS_saveLocalScore
		GEODE_AS_STATIC_FUNCTION(saveLocalScore) 
	#endif

	#ifndef GEODE_STATICS_storeUserNames
		#define GEODE_STATICS_storeUserNames
		GEODE_AS_STATIC_FUNCTION(storeUserNames) 
	#endif

	#ifndef GEODE_STATICS_submitUserInfo
		#define GEODE_STATICS_submitUserInfo
		GEODE_AS_STATIC_FUNCTION(submitUserInfo) 
	#endif

	#ifndef GEODE_STATICS_tryGetUsername
		#define GEODE_STATICS_tryGetUsername
		GEODE_AS_STATIC_FUNCTION(tryGetUsername) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelList
		#define GEODE_STATICS_deleteLevelList
		GEODE_AS_STATIC_FUNCTION(deleteLevelList) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_isFollowingUser
		#define GEODE_STATICS_isFollowingUser
		GEODE_AS_STATIC_FUNCTION(isFollowingUser) 
	#endif

	#ifndef GEODE_STATICS_likeFromLikeKey
		#define GEODE_STATICS_likeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(likeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_markItemAsLiked
		#define GEODE_STATICS_markItemAsLiked
		GEODE_AS_STATIC_FUNCTION(markItemAsLiked) 
	#endif

	#ifndef GEODE_STATICS_typeFromLikeKey
		#define GEODE_STATICS_typeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(typeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_updateUsernames
		#define GEODE_STATICS_updateUsernames
		GEODE_AS_STATIC_FUNCTION(updateUsernames) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelList
		#define GEODE_STATICS_uploadLevelList
		GEODE_AS_STATIC_FUNCTION(uploadLevelList) 
	#endif

	#ifndef GEODE_STATICS_hasReportedLevel
		#define GEODE_STATICS_hasReportedLevel
		GEODE_AS_STATIC_FUNCTION(hasReportedLevel) 
	#endif

	#ifndef GEODE_STATICS_limitSavedLevels
		#define GEODE_STATICS_limitSavedLevels
		GEODE_AS_STATIC_FUNCTION(limitSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_parseRestoreData
		#define GEODE_STATICS_parseRestoreData
		GEODE_AS_STATIC_FUNCTION(parseRestoreData) 
	#endif

	#ifndef GEODE_STATICS_resetTimerForKey
		#define GEODE_STATICS_resetTimerForKey
		GEODE_AS_STATIC_FUNCTION(resetTimerForKey) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessage
		#define GEODE_STATICS_storeUserMessage
		GEODE_AS_STATIC_FUNCTION(storeUserMessage) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelState
		#define GEODE_STATICS_verifyLevelState
		GEODE_AS_STATIC_FUNCTION(verifyLevelState) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedList
		#define GEODE_STATICS_hasDownloadedList
		GEODE_AS_STATIC_FUNCTION(hasDownloadedList) 
	#endif

	#ifndef GEODE_STATICS_itemIDFromLikeKey
		#define GEODE_STATICS_itemIDFromLikeKey
		GEODE_AS_STATIC_FUNCTION(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_messageWasRemoved
		#define GEODE_STATICS_messageWasRemoved
		GEODE_AS_STATIC_FUNCTION(messageWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_purgeUnusedLevels
		#define GEODE_STATICS_purgeUnusedLevels
		GEODE_AS_STATIC_FUNCTION(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequest
		#define GEODE_STATICS_readFriendRequest
		GEODE_AS_STATIC_FUNCTION(readFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_requestUserAccess
		#define GEODE_STATICS_requestUserAccess
		GEODE_AS_STATIC_FUNCTION(requestUserAccess) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
	#endif

	#ifndef GEODE_STATICS_suggestLevelStars
		#define GEODE_STATICS_suggestLevelStars
		GEODE_AS_STATIC_FUNCTION(suggestLevelStars) 
	#endif

	#ifndef GEODE_STATICS_updateDescription
		#define GEODE_STATICS_updateDescription
		GEODE_AS_STATIC_FUNCTION(updateDescription) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrders
		#define GEODE_STATICS_updateLevelOrders
		GEODE_AS_STATIC_FUNCTION(updateLevelOrders) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_accountIDForUserID
		#define GEODE_STATICS_accountIDForUserID
		GEODE_AS_STATIC_FUNCTION(accountIDForUserID) 
	#endif

	#ifndef GEODE_STATICS_areGauntletsLoaded
		#define GEODE_STATICS_areGauntletsLoaded
		GEODE_AS_STATIC_FUNCTION(areGauntletsLoaded) 
	#endif

	#ifndef GEODE_STATICS_cleanupDailyLevels
		#define GEODE_STATICS_cleanupDailyLevels
		GEODE_AS_STATIC_FUNCTION(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevels
		#define GEODE_STATICS_createAndGetLevels
		GEODE_AS_STATIC_FUNCTION(createAndGetLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetScores
		#define GEODE_STATICS_createAndGetScores
		GEODE_AS_STATIC_FUNCTION(createAndGetScores) 
	#endif

	#ifndef GEODE_STATICS_createNewLevelList
		#define GEODE_STATICS_createNewLevelList
		GEODE_AS_STATIC_FUNCTION(createNewLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelComment
		#define GEODE_STATICS_deleteLevelComment
		GEODE_AS_STATIC_FUNCTION(deleteLevelComment) 
	#endif

	#ifndef GEODE_STATICS_deleteUserMessages
		#define GEODE_STATICS_deleteUserMessages
		GEODE_AS_STATIC_FUNCTION(deleteUserMessages) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevelStars
		#define GEODE_STATICS_hasRatedLevelStars
		GEODE_AS_STATIC_FUNCTION(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_STATICS_invalidateMessages
		#define GEODE_STATICS_invalidateMessages
		GEODE_AS_STATIC_FUNCTION(invalidateMessages) 
	#endif

	#ifndef GEODE_STATICS_invalidateRequests
		#define GEODE_STATICS_invalidateRequests
		GEODE_AS_STATIC_FUNCTION(invalidateRequests) 
	#endif

	#ifndef GEODE_STATICS_invalidateUserList
		#define GEODE_STATICS_invalidateUserList
		GEODE_AS_STATIC_FUNCTION(invalidateUserList) 
	#endif

	#ifndef GEODE_STATICS_pageFromCommentKey
		#define GEODE_STATICS_pageFromCommentKey
		GEODE_AS_STATIC_FUNCTION(pageFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_performNetworkTest
		#define GEODE_STATICS_performNetworkTest
		GEODE_AS_STATIC_FUNCTION(performNetworkTest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeUserFromList
		#define GEODE_STATICS_removeUserFromList
		GEODE_AS_STATIC_FUNCTION(removeUserFromList) 
	#endif

	#ifndef GEODE_STATICS_specialFromLikeKey
		#define GEODE_STATICS_specialFromLikeKey
		GEODE_AS_STATIC_FUNCTION(specialFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_storeFriendRequest
		#define GEODE_STATICS_storeFriendRequest
		GEODE_AS_STATIC_FUNCTION(storeFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_typeFromCommentKey
		#define GEODE_STATICS_typeFromCommentKey
		GEODE_AS_STATIC_FUNCTION(typeFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelComment
		#define GEODE_STATICS_uploadLevelComment
		GEODE_AS_STATIC_FUNCTION(uploadLevelComment) 
	#endif

	#ifndef GEODE_STATICS_userIDForAccountID
		#define GEODE_STATICS_userIDForAccountID
		GEODE_AS_STATIC_FUNCTION(userIDForAccountID) 
	#endif

	#ifndef GEODE_STATICS_acceptFriendRequest
		#define GEODE_STATICS_acceptFriendRequest
		GEODE_AS_STATIC_FUNCTION(acceptFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_createSmartTemplate
		#define GEODE_STATICS_createSmartTemplate
		GEODE_AS_STATIC_FUNCTION(createSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_deleteSmartTemplate
		#define GEODE_STATICS_deleteSmartTemplate
		GEODE_AS_STATIC_FUNCTION(deleteSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_downloadUserMessage
		#define GEODE_STATICS_downloadUserMessage
		GEODE_AS_STATIC_FUNCTION(downloadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_hasLikedAccountItem
		#define GEODE_STATICS_hasLikedAccountItem
		GEODE_AS_STATIC_FUNCTION(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsReported
		#define GEODE_STATICS_markLevelAsReported
		GEODE_AS_STATIC_FUNCTION(markLevelAsReported) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserList
		#define GEODE_STATICS_resetStoredUserList
		GEODE_AS_STATIC_FUNCTION(resetStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedMapPacks
		#define GEODE_STATICS_saveFetchedMapPacks
		GEODE_AS_STATIC_FUNCTION(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_uploadFriendRequest
		#define GEODE_STATICS_uploadFriendRequest
		GEODE_AS_STATIC_FUNCTION(uploadFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_writeSpecialFilters
		#define GEODE_STATICS_writeSpecialFilters
		GEODE_AS_STATIC_FUNCTION(writeSpecialFilters) 
	#endif

	#ifndef GEODE_STATICS_createAndGetMapPacks
		#define GEODE_STATICS_createAndGetMapPacks
		GEODE_AS_STATIC_FUNCTION(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_STATICS_deleteAccountComment
		#define GEODE_STATICS_deleteAccountComment
		GEODE_AS_STATIC_FUNCTION(deleteAccountComment) 
	#endif

	#ifndef GEODE_STATICS_deleteFriendRequests
		#define GEODE_STATICS_deleteFriendRequests
		GEODE_AS_STATIC_FUNCTION(deleteFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_markListAsDownloaded
		#define GEODE_STATICS_markListAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markListAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_removeDelimiterChars
		#define GEODE_STATICS_removeDelimiterChars
		GEODE_AS_STATIC_FUNCTION(removeDelimiterChars) 
	#endif

	#ifndef GEODE_STATICS_resetAccountComments
		#define GEODE_STATICS_resetAccountComments
		GEODE_AS_STATIC_FUNCTION(resetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_resetDailyLevelState
		#define GEODE_STATICS_resetDailyLevelState
		GEODE_AS_STATIC_FUNCTION(resetDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_storeDailyLevelState
		#define GEODE_STATICS_storeDailyLevelState
		GEODE_AS_STATIC_FUNCTION(storeDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_updateSavedLevelList
		#define GEODE_STATICS_updateSavedLevelList
		GEODE_AS_STATIC_FUNCTION(updateSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_uploadAccountComment
		#define GEODE_STATICS_uploadAccountComment
		GEODE_AS_STATIC_FUNCTION(uploadAccountComment) 
	#endif

	#ifndef GEODE_STATICS_userInfoForAccountID
		#define GEODE_STATICS_userInfoForAccountID
		GEODE_AS_STATIC_FUNCTION(userInfoForAccountID) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevelList
		#define GEODE_STATICS_deleteServerLevelList
		GEODE_AS_STATIC_FUNCTION(deleteServerLevelList) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItemFullCheck
		#define GEODE_STATICS_hasLikedItemFullCheck
		GEODE_AS_STATIC_FUNCTION(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsDownloaded
		#define GEODE_STATICS_markLevelAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedDemon
		#define GEODE_STATICS_markLevelAsRatedDemon
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedStars
		#define GEODE_STATICS_markLevelAsRatedStars
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevelLists
		#define GEODE_STATICS_saveFetchedLevelLists
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessageReply
		#define GEODE_STATICS_storeUserMessageReply
		GEODE_AS_STATIC_FUNCTION(storeUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelLists
		#define GEODE_STATICS_createAndGetLevelLists
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_STATICS_deleteSentFriendRequest
		#define GEODE_STATICS_deleteSentFriendRequest
		GEODE_AS_STATIC_FUNCTION(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_hasDailyStateBeenLoaded
		#define GEODE_STATICS_hasDailyStateBeenLoaded
		GEODE_AS_STATIC_FUNCTION(hasDailyStateBeenLoaded) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelComments
		#define GEODE_STATICS_createAndGetLevelComments
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromPostCommentKey
		#define GEODE_STATICS_levelIDFromPostCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_friendRequestFromAccountID
		#define GEODE_STATICS_friendRequestFromAccountID
		GEODE_AS_STATIC_FUNCTION(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_createAndGetAccountComments
		#define GEODE_STATICS_createAndGetAccountComments
		GEODE_AS_STATIC_FUNCTION(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForLevelID
		#define GEODE_STATICS_resetCommentTimersForLevelID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_STATICS_processOnDownloadLevelCompleted
		#define GEODE_STATICS_processOnDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_removeLevelDownloadedKeysFromDict
		#define GEODE_STATICS_removeLevelDownloadedKeysFromDict
		GEODE_AS_STATIC_FUNCTION(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_STATICS_banUser
		#define GEODE_STATICS_banUser
		GEODE_AS_STATIC_FUNCTION(banUser) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_likeItem
		#define GEODE_STATICS_likeItem
		GEODE_AS_STATIC_FUNCTION(likeItem) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_rateDemon
		#define GEODE_STATICS_rateDemon
		GEODE_AS_STATIC_FUNCTION(rateDemon) 
	#endif

	#ifndef GEODE_STATICS_rateStars
		#define GEODE_STATICS_rateStars
		GEODE_AS_STATIC_FUNCTION(rateStars) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelManager> : ModifyBase<ModifyDerive<Der, GameLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelManager>>;
		using ModifyBase<ModifyDerive<Der, GameLevelManager>>::ModifyBase;
		using Base = GameLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f3030, Default, GameLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527160, Default, GameLevelManager, getDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x511a30, Default, GameLevelManager, getMapPacks, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a2f0, Default, GameLevelManager, getPageInfo, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a700, Default, GameLevelManager, getTimeLeft, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x524400, Default, GameLevelManager, getUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x513af0, Default, GameLevelManager, getGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x525ff0, Default, GameLevelManager, getGJRewards, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527ee0, Default, GameLevelManager, getIntForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50fcf0, Default, GameLevelManager, getLengthStr, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5011a0, Default, GameLevelManager, getMainLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5280b0, Default, GameLevelManager, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51e1d0, Default, GameLevelManager, getCommentKey, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5271c0, Default, GameLevelManager, getDailyTimer, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50bf00, Default, GameLevelManager, getFolderName, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51b4d0, Default, GameLevelManager, getGJUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x512dd0, Default, GameLevelManager, getLevelLists, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x509370, Default, GameLevelManager, getSavedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51c0b0, Default, GameLevelManager, getMessagesKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5089a0, Default, GameLevelManager, getSavedLevels, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50aa00, Default, GameLevelManager, getSearchScene, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5267e0, Default, GameLevelManager, getGJChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5108d0, Default, GameLevelManager, getOnlineLevels, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x511d60, Default, GameLevelManager, getSavedMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51bd80, Default, GameLevelManager, getUserMessages, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527190, Default, GameLevelManager, getActiveDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51dcc0, Default, GameLevelManager, getLevelComments, int, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50e2f0, Default, GameLevelManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5219a0, Default, GameLevelManager, getFriendRequests, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x513e90, Default, GameLevelManager, getGauntletLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5239b0, Default, GameLevelManager, getStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51e3f0, Default, GameLevelManager, getAccountComments, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x508ef0, Default, GameLevelManager, getCompletedLevels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5091b0, Default, GameLevelManager, getSavedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x508b90, Default, GameLevelManager, getSavedLevelLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51f6f0, Default, GameLevelManager, getFriendRequestKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x519f00, Default, GameLevelManager, getLevelLeaderboard, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x508cb0, Default, GameLevelManager, getLowestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51e710, Default, GameLevelManager, getAccountCommentKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50c310, Default, GameLevelManager, getAllSmartTemplates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x513a50, Default, GameLevelManager, getGauntletsearchKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526c80, Default, GameLevelManager, getGJDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x508c70, Default, GameLevelManager, getHighestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5196a0, Default, GameLevelManager, getLeaderboardScores, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x509290, Default, GameLevelManager, getSavedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a0d0, Default, GameLevelManager, getStoredOnlineLevels, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51acf0, Default, GameLevelManager, getLevelLeaderboardKey, int, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51fa70, Default, GameLevelManager, getStoredLevelComments, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51bd60, Default, GameLevelManager, getStoredUserMessageReply, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x509450, Default, GameLevelManager, getSavedDailyLevelFromLevelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51b140, Default, GameLevelManager, getUsers, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527ac0, Default, GameLevelManager, setDiffVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527ce0, Default, GameLevelManager, setLenVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f9860, Default, GameLevelManager, onLikeItemCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7180, Default, GameLevelManager, onRateStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f65f0, Default, GameLevelManager, onGetMapPacksCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f9bf0, Default, GameLevelManager, onReportLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f70d0, Default, GameLevelManager, onUpdateLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f5670, Default, GameLevelManager, onUploadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f9a20, Default, GameLevelManager, onRestoreItemsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f96b0, Default, GameLevelManager, onDeleteCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7020, Default, GameLevelManager, onDownloadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f9fa0, Default, GameLevelManager, onGetGJUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7490, Default, GameLevelManager, onSetLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f8670, Default, GameLevelManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4fe0c0, Default, GameLevelManager, onGetGJChallengesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f5930, Default, GameLevelManager, onGetOnlineLevelsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7640, Default, GameLevelManager, onUpdateUserScoreCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7d90, Default, GameLevelManager, onGetLevelCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7300, Default, GameLevelManager, onDeleteServerLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f9d60, Default, GameLevelManager, onUpdateDescriptionCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f8200, Default, GameLevelManager, onGetAccountCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f3380, Default, GameLevelManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f79a0, Default, GameLevelManager, onGetLeaderboardScoresCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50c8e0, Default, GameLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50bc10, Default, GameLevelManager, followUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a480, Default, GameLevelManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a1c0, Default, GameLevelManager, isTimeValid, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x515ec0, Default, GameLevelManager, updateLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50c700, Default, GameLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x523530, Default, GameLevelManager, removeFriend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50bac0, Default, GameLevelManager, unfollowUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a550, Default, GameLevelManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x521210, Default, GameLevelManager, deleteComment, int, CommentType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5144c0, Default, GameLevelManager, downloadLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x516e10, Default, GameLevelManager, hasRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x515e80, Default, GameLevelManager, isUpdateValid, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x509fb0, Default, GameLevelManager, makeTimeStamp, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x502f30, Default, GameLevelManager, storeUserName, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51fbd0, Default, GameLevelManager, uploadComment, gd::string, CommentType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5017f0, Default, GameLevelManager, createNewLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x514480, Default, GameLevelManager, resetGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x505b60, Default, GameLevelManager, responseToDict, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5032f0, Default, GameLevelManager, tryGetUsername, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50b9d0, Default, GameLevelManager, isFollowingUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x517ff0, Default, GameLevelManager, updateUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50b1e0, Default, GameLevelManager, limitSavedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a910, Default, GameLevelManager, resetTimerForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x505dd0, Default, GameLevelManager, saveFetchedLevels, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x509d50, Default, GameLevelManager, storeSearchResult, cocos2d::CCArray*, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51ce90, Default, GameLevelManager, uploadUserMessage, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x503170, Default, GameLevelManager, userNameForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5037f0, Default, GameLevelManager, accountIDForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x514460, Default, GameLevelManager, areGauntletsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x507520, Default, GameLevelManager, createAndGetScores, gd::string, GJScoreType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x502340, Default, GameLevelManager, createNewLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51d450, Default, GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x516a60, Default, GameLevelManager, hasRatedLevelStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51d940, Default, GameLevelManager, invalidateMessages, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5227f0, Default, GameLevelManager, invalidateRequests, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5246b0, Default, GameLevelManager, invalidateUserList, UserListType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f3510, Default, GameLevelManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50a630, Default, GameLevelManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x503980, Default, GameLevelManager, updateLevelRewards, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51fb60, Default, GameLevelManager, uploadLevelComment, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5037b0, Default, GameLevelManager, userIDForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x522b50, Default, GameLevelManager, acceptFriendRequest, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50c280, Default, GameLevelManager, createSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x510460, Default, GameLevelManager, writeSpecialFilters, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51f580, Default, GameLevelManager, resetAccountComments, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5270e0, Default, GameLevelManager, resetDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526fc0, Default, GameLevelManager, storeDailyLevelState, int, int, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5209a0, Default, GameLevelManager, uploadAccountComment, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5037d0, Default, GameLevelManager, userInfoForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x525520, Default, GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5221e0, Default, GameLevelManager, deleteSentFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527120, Default, GameLevelManager, hasDailyStateBeenLoaded, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51bce0, Default, GameLevelManager, friendRequestFromAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x520a10, Default, GameLevelManager, resetCommentTimersForLevelID, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f36d0, Default, GameLevelManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x523a60, Default, GameLevelManager, blockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5094a0, Default, GameLevelManager, saveLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x501010, Default, GameLevelManager, init, )
		}
	};
}
