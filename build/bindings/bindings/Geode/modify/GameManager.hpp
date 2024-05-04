#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addToGJLog
		#define GEODE_STATICS_addToGJLog
		GEODE_AS_STATIC_FUNCTION(addToGJLog) 
	#endif

	#ifndef GEODE_STATICS_clearGJLog
		#define GEODE_STATICS_clearGJLog
		GEODE_AS_STATIC_FUNCTION(clearGJLog) 
	#endif

	#ifndef GEODE_STATICS_joinReddit
		#define GEODE_STATICS_joinReddit
		GEODE_AS_STATIC_FUNCTION(joinReddit) 
	#endif

	#ifndef GEODE_STATICS_loadGround
		#define GEODE_STATICS_loadGround
		GEODE_AS_STATIC_FUNCTION(loadGround) 
	#endif

	#ifndef GEODE_STATICS_printGJLog
		#define GEODE_STATICS_printGJLog
		GEODE_AS_STATIC_FUNCTION(printGJLog) 
	#endif

	#ifndef GEODE_STATICS_reloadMenu
		#define GEODE_STATICS_reloadMenu
		GEODE_AS_STATIC_FUNCTION(reloadMenu) 
	#endif

	#ifndef GEODE_STATICS_reorderKey
		#define GEODE_STATICS_reorderKey
		GEODE_AS_STATIC_FUNCTION(reorderKey) 
	#endif

	#ifndef GEODE_STATICS_subYouTube
		#define GEODE_STATICS_subYouTube
		GEODE_AS_STATIC_FUNCTION(subYouTube) 
	#endif

	#ifndef GEODE_STATICS_tryCacheAd
		#define GEODE_STATICS_tryCacheAd
		GEODE_AS_STATIC_FUNCTION(tryCacheAd) 
	#endif

	#ifndef GEODE_STATICS_unloadIcon
		#define GEODE_STATICS_unloadIcon
		GEODE_AS_STATIC_FUNCTION(unloadIcon) 
	#endif

	#ifndef GEODE_STATICS_unlockIcon
		#define GEODE_STATICS_unlockIcon
		GEODE_AS_STATIC_FUNCTION(unlockIcon) 
	#endif

	#ifndef GEODE_STATICS_colorForIdx
		#define GEODE_STATICS_colorForIdx
		GEODE_AS_STATIC_FUNCTION(colorForIdx) 
	#endif

	#ifndef GEODE_STATICS_colorForPos
		#define GEODE_STATICS_colorForPos
		GEODE_AS_STATIC_FUNCTION(colorForPos) 
	#endif

	#ifndef GEODE_STATICS_doQuickSave
		#define GEODE_STATICS_doQuickSave
		GEODE_AS_STATIC_FUNCTION(doQuickSave) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_getFontFile
		#define GEODE_STATICS_getFontFile
		GEODE_AS_STATIC_FUNCTION(getFontFile) 
	#endif

	#ifndef GEODE_STATICS_getGTexture
		#define GEODE_STATICS_getGTexture
		GEODE_AS_STATIC_FUNCTION(getGTexture) 
	#endif

	#ifndef GEODE_STATICS_joinDiscord
		#define GEODE_STATICS_joinDiscord
		GEODE_AS_STATIC_FUNCTION(joinDiscord) 
	#endif

	#ifndef GEODE_STATICS_saveAdTimer
		#define GEODE_STATICS_saveAdTimer
		GEODE_AS_STATIC_FUNCTION(saveAdTimer) 
	#endif

	#ifndef GEODE_STATICS_startUpdate
		#define GEODE_STATICS_startUpdate
		GEODE_AS_STATIC_FUNCTION(startUpdate) 
	#endif

	#ifndef GEODE_STATICS_unloadIcons
		#define GEODE_STATICS_unloadIcons
		GEODE_AS_STATIC_FUNCTION(unloadIcons) 
	#endif

	#ifndef GEODE_STATICS_unlockColor
		#define GEODE_STATICS_unlockColor
		GEODE_AS_STATIC_FUNCTION(unlockColor) 
	#endif

	#ifndef GEODE_STATICS_updateMusic
		#define GEODE_STATICS_updateMusic
		GEODE_AS_STATIC_FUNCTION(updateMusic) 
	#endif

	#ifndef GEODE_STATICS_countForType
		#define GEODE_STATICS_countForType
		GEODE_AS_STATIC_FUNCTION(countForType) 
	#endif

	#ifndef GEODE_STATICS_followTwitch
		#define GEODE_STATICS_followTwitch
		GEODE_AS_STATIC_FUNCTION(followTwitch) 
	#endif

	#ifndef GEODE_STATICS_getBGTexture
		#define GEODE_STATICS_getBGTexture
		GEODE_AS_STATIC_FUNCTION(getBGTexture) 
	#endif

	#ifndef GEODE_STATICS_getMGTexture
		#define GEODE_STATICS_getMGTexture
		GEODE_AS_STATIC_FUNCTION(getMGTexture) 
	#endif

	#ifndef GEODE_STATICS_isIconLoaded
		#define GEODE_STATICS_isIconLoaded
		GEODE_AS_STATIC_FUNCTION(isIconLoaded) 
	#endif

	#ifndef GEODE_STATICS_likeFacebook
		#define GEODE_STATICS_likeFacebook
		GEODE_AS_STATIC_FUNCTION(likeFacebook) 
	#endif

	#ifndef GEODE_STATICS_resetAdTimer
		#define GEODE_STATICS_resetAdTimer
		GEODE_AS_STATIC_FUNCTION(resetAdTimer) 
	#endif

	#ifndef GEODE_STATICS_safePopScene
		#define GEODE_STATICS_safePopScene
		GEODE_AS_STATIC_FUNCTION(safePopScene) 
	#endif

	#ifndef GEODE_STATICS_followTwitter
		#define GEODE_STATICS_followTwitter
		GEODE_AS_STATIC_FUNCTION(followTwitter) 
	#endif

	#ifndef GEODE_STATICS_itemPurchased
		#define GEODE_STATICS_itemPurchased
		GEODE_AS_STATIC_FUNCTION(itemPurchased) 
	#endif

	#ifndef GEODE_STATICS_loadIconAsync
		#define GEODE_STATICS_loadIconAsync
		GEODE_AS_STATIC_FUNCTION(loadIconAsync) 
	#endif

	#ifndef GEODE_STATICS_playMenuMusic
		#define GEODE_STATICS_playMenuMusic
		GEODE_AS_STATIC_FUNCTION(playMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_resetAllIcons
		#define GEODE_STATICS_resetAllIcons
		GEODE_AS_STATIC_FUNCTION(resetAllIcons) 
	#endif

	#ifndef GEODE_STATICS_videoAdHidden
		#define GEODE_STATICS_videoAdHidden
		GEODE_AS_STATIC_FUNCTION(videoAdHidden) 
	#endif

	#ifndef GEODE_STATICS_videoAdShowed
		#define GEODE_STATICS_videoAdShowed
		GEODE_AS_STATIC_FUNCTION(videoAdShowed) 
	#endif

	#ifndef GEODE_STATICS_checkUsedIcons
		#define GEODE_STATICS_checkUsedIcons
		GEODE_AS_STATIC_FUNCTION(checkUsedIcons) 
	#endif

	#ifndef GEODE_STATICS_getFontTexture
		#define GEODE_STATICS_getFontTexture
		GEODE_AS_STATIC_FUNCTION(getFontTexture) 
	#endif

	#ifndef GEODE_STATICS_getNextUsedKey
		#define GEODE_STATICS_getNextUsedKey
		GEODE_AS_STATIC_FUNCTION(getNextUsedKey) 
	#endif

	#ifndef GEODE_STATICS_isIconUnlocked
		#define GEODE_STATICS_isIconUnlocked
		GEODE_AS_STATIC_FUNCTION(isIconUnlocked) 
	#endif

	#ifndef GEODE_STATICS_levelIsPremium
		#define GEODE_STATICS_levelIsPremium
		GEODE_AS_STATIC_FUNCTION(levelIsPremium) 
	#endif

	#ifndef GEODE_STATICS_loadBackground
		#define GEODE_STATICS_loadBackground
		GEODE_AS_STATIC_FUNCTION(loadBackground) 
	#endif

	#ifndef GEODE_STATICS_loadDPadLayout
		#define GEODE_STATICS_loadDPadLayout
		GEODE_AS_STATIC_FUNCTION(loadDPadLayout) 
	#endif

	#ifndef GEODE_STATICS_playSFXTrigger
		#define GEODE_STATICS_playSFXTrigger
		GEODE_AS_STATIC_FUNCTION(playSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep2
		#define GEODE_STATICS_reloadAllStep2
		GEODE_AS_STATIC_FUNCTION(reloadAllStep2) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep3
		#define GEODE_STATICS_reloadAllStep3
		GEODE_AS_STATIC_FUNCTION(reloadAllStep3) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep4
		#define GEODE_STATICS_reloadAllStep4
		GEODE_AS_STATIC_FUNCTION(reloadAllStep4) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep5
		#define GEODE_STATICS_reloadAllStep5
		GEODE_AS_STATIC_FUNCTION(reloadAllStep5) 
	#endif

	#ifndef GEODE_STATICS_saveDPadLayout
		#define GEODE_STATICS_saveDPadLayout
		GEODE_AS_STATIC_FUNCTION(saveDPadLayout) 
	#endif

	#ifndef GEODE_STATICS_shortenAdTimer
		#define GEODE_STATICS_shortenAdTimer
		GEODE_AS_STATIC_FUNCTION(shortenAdTimer) 
	#endif

	#ifndef GEODE_STATICS_showMainMenuAd
		#define GEODE_STATICS_showMainMenuAd
		GEODE_AS_STATIC_FUNCTION(showMainMenuAd) 
	#endif

	#ifndef GEODE_STATICS_addIconDelegate
		#define GEODE_STATICS_addIconDelegate
		GEODE_AS_STATIC_FUNCTION(addIconDelegate) 
	#endif

	#ifndef GEODE_STATICS_fadeInMenuMusic
		#define GEODE_STATICS_fadeInMenuMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_getGameVariable
		#define GEODE_STATICS_getGameVariable
		GEODE_AS_STATIC_FUNCTION(getGameVariable) 
	#endif

	#ifndef GEODE_STATICS_isColorUnlocked
		#define GEODE_STATICS_isColorUnlocked
		GEODE_AS_STATIC_FUNCTION(isColorUnlocked) 
	#endif

	#ifndef GEODE_STATICS_loadDeathEffect
		#define GEODE_STATICS_loadDeathEffect
		GEODE_AS_STATIC_FUNCTION(loadDeathEffect) 
	#endif

	#ifndef GEODE_STATICS_loadGroundAsync
		#define GEODE_STATICS_loadGroundAsync
		GEODE_AS_STATIC_FUNCTION(loadGroundAsync) 
	#endif

	#ifndef GEODE_STATICS_openEditorGuide
		#define GEODE_STATICS_openEditorGuide
		GEODE_AS_STATIC_FUNCTION(openEditorGuide) 
	#endif

	#ifndef GEODE_STATICS_queueReloadMenu
		#define GEODE_STATICS_queueReloadMenu
		GEODE_AS_STATIC_FUNCTION(queueReloadMenu) 
	#endif

	#ifndef GEODE_STATICS_setGameVariable
		#define GEODE_STATICS_setGameVariable
		GEODE_AS_STATIC_FUNCTION(setGameVariable) 
	#endif

	#ifndef GEODE_STATICS_unlockedPremium
		#define GEODE_STATICS_unlockedPremium
		GEODE_AS_STATIC_FUNCTION(unlockedPremium) 
	#endif

	#ifndef GEODE_STATICS_updateCustomFPS
		#define GEODE_STATICS_updateCustomFPS
		GEODE_AS_STATIC_FUNCTION(updateCustomFPS) 
	#endif

	#ifndef GEODE_STATICS_addGameAnimation
		#define GEODE_STATICS_addGameAnimation
		GEODE_AS_STATIC_FUNCTION(addGameAnimation) 
	#endif

	#ifndef GEODE_STATICS_didExitPlayscene
		#define GEODE_STATICS_didExitPlayscene
		GEODE_AS_STATIC_FUNCTION(didExitPlayscene) 
	#endif

	#ifndef GEODE_STATICS_getIconRequestID
		#define GEODE_STATICS_getIconRequestID
		GEODE_AS_STATIC_FUNCTION(getIconRequestID) 
	#endif

	#ifndef GEODE_STATICS_getMenuMusicFile
		#define GEODE_STATICS_getMenuMusicFile
		GEODE_AS_STATIC_FUNCTION(getMenuMusicFile) 
	#endif

	#ifndef GEODE_STATICS_loadMiddleground
		#define GEODE_STATICS_loadMiddleground
		GEODE_AS_STATIC_FUNCTION(loadMiddleground) 
	#endif

	#ifndef GEODE_STATICS_recountUserStats
		#define GEODE_STATICS_recountUserStats
		GEODE_AS_STATIC_FUNCTION(recountUserStats) 
	#endif

	#ifndef GEODE_STATICS_resetAchievement
		#define GEODE_STATICS_resetAchievement
		GEODE_AS_STATIC_FUNCTION(resetAchievement) 
	#endif

	#ifndef GEODE_STATICS_resetCoinUnlocks
		#define GEODE_STATICS_resetCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_resolutionForKey
		#define GEODE_STATICS_resolutionForKey
		GEODE_AS_STATIC_FUNCTION(resolutionForKey) 
	#endif

	#ifndef GEODE_STATICS_sheetNameForIcon
		#define GEODE_STATICS_sheetNameForIcon
		GEODE_AS_STATIC_FUNCTION(sheetNameForIcon) 
	#endif

	#ifndef GEODE_STATICS_showInterstitial
		#define GEODE_STATICS_showInterstitial
		GEODE_AS_STATIC_FUNCTION(showInterstitial) 
	#endif

	#ifndef GEODE_STATICS_switchScreenMode
		#define GEODE_STATICS_switchScreenMode
		GEODE_AS_STATIC_FUNCTION(switchScreenMode) 
	#endif

	#ifndef GEODE_STATICS_unloadBackground
		#define GEODE_STATICS_unloadBackground
		GEODE_AS_STATIC_FUNCTION(unloadBackground) 
	#endif

	#ifndef GEODE_STATICS_activeIconForType
		#define GEODE_STATICS_activeIconForType
		GEODE_AS_STATIC_FUNCTION(activeIconForType) 
	#endif

	#ifndef GEODE_STATICS_iconAndTypeForKey
		#define GEODE_STATICS_iconAndTypeForKey
		GEODE_AS_STATIC_FUNCTION(iconAndTypeForKey) 
	#endif

	#ifndef GEODE_STATICS_loadVideoSettings
		#define GEODE_STATICS_loadVideoSettings
		GEODE_AS_STATIC_FUNCTION(loadVideoSettings) 
	#endif

	#ifndef GEODE_STATICS_logLoadedIconInfo
		#define GEODE_STATICS_logLoadedIconInfo
		GEODE_AS_STATIC_FUNCTION(logLoadedIconInfo) 
	#endif

	#ifndef GEODE_STATICS_resetDPadSettings
		#define GEODE_STATICS_resetDPadSettings
		GEODE_AS_STATIC_FUNCTION(resetDPadSettings) 
	#endif

	#ifndef GEODE_STATICS_returnToLastScene
		#define GEODE_STATICS_returnToLastScene
		GEODE_AS_STATIC_FUNCTION(returnToLastScene) 
	#endif

	#ifndef GEODE_STATICS_verifyCoinUnlocks
		#define GEODE_STATICS_verifyCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifyStarUnlocks
		#define GEODE_STATICS_verifyStarUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyStarUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifySyncedCoins
		#define GEODE_STATICS_verifySyncedCoins
		GEODE_AS_STATIC_FUNCTION(verifySyncedCoins) 
	#endif

	#ifndef GEODE_STATICS_addNewCustomObject
		#define GEODE_STATICS_addNewCustomObject
		GEODE_AS_STATIC_FUNCTION(addNewCustomObject) 
	#endif

	#ifndef GEODE_STATICS_claimItemsResponse
		#define GEODE_STATICS_claimItemsResponse
		GEODE_AS_STATIC_FUNCTION(claimItemsResponse) 
	#endif

	#ifndef GEODE_STATICS_dpadConfigToString
		#define GEODE_STATICS_dpadConfigToString
		GEODE_AS_STATIC_FUNCTION(dpadConfigToString) 
	#endif

	#ifndef GEODE_STATICS_eventUnlockFeature
		#define GEODE_STATICS_eventUnlockFeature
		GEODE_AS_STATIC_FUNCTION(eventUnlockFeature) 
	#endif

	#ifndef GEODE_STATICS_framesForAnimation
		#define GEODE_STATICS_framesForAnimation
		GEODE_AS_STATIC_FUNCTION(framesForAnimation) 
	#endif

	#ifndef GEODE_STATICS_getIntGameVariable
		#define GEODE_STATICS_getIntGameVariable
		GEODE_AS_STATIC_FUNCTION(getIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_loadDpadFromString
		#define GEODE_STATICS_loadDpadFromString
		GEODE_AS_STATIC_FUNCTION(loadDpadFromString) 
	#endif

	#ifndef GEODE_STATICS_removeCustomObject
		#define GEODE_STATICS_removeCustomObject
		GEODE_AS_STATIC_FUNCTION(removeCustomObject) 
	#endif

	#ifndef GEODE_STATICS_removeIconDelegate
		#define GEODE_STATICS_removeIconDelegate
		GEODE_AS_STATIC_FUNCTION(removeIconDelegate) 
	#endif

	#ifndef GEODE_STATICS_setIntGameVariable
		#define GEODE_STATICS_setIntGameVariable
		GEODE_AS_STATIC_FUNCTION(setIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_toggleGameVariable
		#define GEODE_STATICS_toggleGameVariable
		GEODE_AS_STATIC_FUNCTION(toggleGameVariable) 
	#endif

	#ifndef GEODE_STATICS_loadBackgroundAsync
		#define GEODE_STATICS_loadBackgroundAsync
		GEODE_AS_STATIC_FUNCTION(loadBackgroundAsync) 
	#endif

	#ifndef GEODE_STATICS_prepareDPadSettings
		#define GEODE_STATICS_prepareDPadSettings
		GEODE_AS_STATIC_FUNCTION(prepareDPadSettings) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoHidden
		#define GEODE_STATICS_rewardedVideoHidden
		GEODE_AS_STATIC_FUNCTION(rewardedVideoHidden) 
	#endif

	#ifndef GEODE_STATICS_setupGameAnimations
		#define GEODE_STATICS_setupGameAnimations
		GEODE_AS_STATIC_FUNCTION(setupGameAnimations) 
	#endif

	#ifndef GEODE_STATICS_switchCustomObjects
		#define GEODE_STATICS_switchCustomObjects
		GEODE_AS_STATIC_FUNCTION(switchCustomObjects) 
	#endif

	#ifndef GEODE_STATICS_tryShowInterstitial
		#define GEODE_STATICS_tryShowInterstitial
		GEODE_AS_STATIC_FUNCTION(tryShowInterstitial) 
	#endif

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_canShowRewardedVideo
		#define GEODE_STATICS_canShowRewardedVideo
		GEODE_AS_STATIC_FUNCTION(canShowRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_completedAchievement
		#define GEODE_STATICS_completedAchievement
		GEODE_AS_STATIC_FUNCTION(completedAchievement) 
	#endif

	#ifndef GEODE_STATICS_defaultYOffsetForBG2
		#define GEODE_STATICS_defaultYOffsetForBG2
		GEODE_AS_STATIC_FUNCTION(defaultYOffsetForBG2) 
	#endif

	#ifndef GEODE_STATICS_generateSecretNumber
		#define GEODE_STATICS_generateSecretNumber
		GEODE_AS_STATIC_FUNCTION(generateSecretNumber) 
	#endif

	#ifndef GEODE_STATICS_getPracticeMusicFile
		#define GEODE_STATICS_getPracticeMusicFile
		GEODE_AS_STATIC_FUNCTION(getPracticeMusicFile) 
	#endif

	#ifndef GEODE_STATICS_iconTypeToUnlockType
		#define GEODE_STATICS_iconTypeToUnlockType
		GEODE_AS_STATIC_FUNCTION(iconTypeToUnlockType) 
	#endif

	#ifndef GEODE_STATICS_unlockTypeToIconType
		#define GEODE_STATICS_unlockTypeToIconType
		GEODE_AS_STATIC_FUNCTION(unlockTypeToIconType) 
	#endif

	#ifndef GEODE_STATICS_addDuplicateLastFrame
		#define GEODE_STATICS_addDuplicateLastFrame
		GEODE_AS_STATIC_FUNCTION(addDuplicateLastFrame) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync
		#define GEODE_STATICS_finishedLoadingGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync) 
	#endif

	#ifndef GEODE_STATICS_frameTimeForAnimation
		#define GEODE_STATICS_frameTimeForAnimation
		GEODE_AS_STATIC_FUNCTION(frameTimeForAnimation) 
	#endif

	#ifndef GEODE_STATICS_loadMiddlegroundAsync
		#define GEODE_STATICS_loadMiddlegroundAsync
		GEODE_AS_STATIC_FUNCTION(loadMiddlegroundAsync) 
	#endif

	#ifndef GEODE_STATICS_stringForCustomObject
		#define GEODE_STATICS_stringForCustomObject
		GEODE_AS_STATIC_FUNCTION(stringForCustomObject) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingBGAsync
		#define GEODE_STATICS_finishedLoadingBGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingBGAsync) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync1
		#define GEODE_STATICS_finishedLoadingGAsync1
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync1) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync2
		#define GEODE_STATICS_finishedLoadingGAsync2
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync2) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync
		#define GEODE_STATICS_finishedLoadingMGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync) 
	#endif

	#ifndef GEODE_STATICS_getNextUniqueObjectKey
		#define GEODE_STATICS_getNextUniqueObjectKey
		GEODE_AS_STATIC_FUNCTION(getNextUniqueObjectKey) 
	#endif

	#ifndef GEODE_STATICS_shouldShowInterstitial
		#define GEODE_STATICS_shouldShowInterstitial
		GEODE_AS_STATIC_FUNCTION(shouldShowInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showInterstitialForced
		#define GEODE_STATICS_showInterstitialForced
		GEODE_AS_STATIC_FUNCTION(showInterstitialForced) 
	#endif

	#ifndef GEODE_STATICS_addCustomAnimationFrame
		#define GEODE_STATICS_addCustomAnimationFrame
		GEODE_AS_STATIC_FUNCTION(addCustomAnimationFrame) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync1
		#define GEODE_STATICS_finishedLoadingMGAsync1
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync1) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync2
		#define GEODE_STATICS_finishedLoadingMGAsync2
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync2) 
	#endif

	#ifndef GEODE_STATICS_getUnlockForAchievement
		#define GEODE_STATICS_getUnlockForAchievement
		GEODE_AS_STATIC_FUNCTION(getUnlockForAchievement) 
	#endif

	#ifndef GEODE_STATICS_groundHasSecondaryColor
		#define GEODE_STATICS_groundHasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(groundHasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoAdFinished
		#define GEODE_STATICS_rewardedVideoAdFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoAdFinished) 
	#endif

	#ifndef GEODE_STATICS_calculateBaseKeyForIcons
		#define GEODE_STATICS_calculateBaseKeyForIcons
		GEODE_AS_STATIC_FUNCTION(calculateBaseKeyForIcons) 
	#endif

	#ifndef GEODE_STATICS_defaultFrameForAnimation
		#define GEODE_STATICS_defaultFrameForAnimation
		GEODE_AS_STATIC_FUNCTION(defaultFrameForAnimation) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingIconAsync
		#define GEODE_STATICS_finishedLoadingIconAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingIconAsync) 
	#endif

	#ifndef GEODE_STATICS_reportPercentageForLevel
		#define GEODE_STATICS_reportPercentageForLevel
		GEODE_AS_STATIC_FUNCTION(reportPercentageForLevel) 
	#endif

	#ifndef GEODE_STATICS_syncPlatformAchievements
		#define GEODE_STATICS_syncPlatformAchievements
		GEODE_AS_STATIC_FUNCTION(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_STATICS_verifyAchievementUnlocks
		#define GEODE_STATICS_verifyAchievementUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyAchievementUnlocks) 
	#endif

	#ifndef GEODE_STATICS_getOrderedCustomObjectKeys
		#define GEODE_STATICS_getOrderedCustomObjectKeys
		GEODE_AS_STATIC_FUNCTION(getOrderedCustomObjectKeys) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoHiddenDelayed
		#define GEODE_STATICS_rewardedVideoHiddenDelayed
		GEODE_AS_STATIC_FUNCTION(rewardedVideoHiddenDelayed) 
	#endif

	#ifndef GEODE_STATICS_checkSteamAchievementUnlock
		#define GEODE_STATICS_checkSteamAchievementUnlock
		GEODE_AS_STATIC_FUNCTION(checkSteamAchievementUnlock) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_getUGV
		#define GEODE_STATICS_getUGV
		GEODE_AS_STATIC_FUNCTION(getUGV) 
	#endif

	#ifndef GEODE_STATICS_setUGV
		#define GEODE_STATICS_setUGV
		GEODE_AS_STATIC_FUNCTION(setUGV) 
	#endif

	#ifndef GEODE_STATICS_iconKey
		#define GEODE_STATICS_iconKey
		GEODE_AS_STATIC_FUNCTION(iconKey) 
	#endif

	#ifndef GEODE_STATICS_colorKey
		#define GEODE_STATICS_colorKey
		GEODE_AS_STATIC_FUNCTION(colorKey) 
	#endif

	#ifndef GEODE_STATICS_loadFont
		#define GEODE_STATICS_loadFont
		GEODE_AS_STATIC_FUNCTION(loadFont) 
	#endif

	#ifndef GEODE_STATICS_loadIcon
		#define GEODE_STATICS_loadIcon
		GEODE_AS_STATIC_FUNCTION(loadIcon) 
	#endif

	#ifndef GEODE_STATICS_lockIcon
		#define GEODE_STATICS_lockIcon
		GEODE_AS_STATIC_FUNCTION(lockIcon) 
	#endif

	#ifndef GEODE_STATICS_rateGame
		#define GEODE_STATICS_rateGame
		GEODE_AS_STATIC_FUNCTION(rateGame) 
	#endif

	#ifndef GEODE_STATICS_lockColor
		#define GEODE_STATICS_lockColor
		GEODE_AS_STATIC_FUNCTION(lockColor) 
	#endif

	#ifndef GEODE_STATICS_reloadAll
		#define GEODE_STATICS_reloadAll
		GEODE_AS_STATIC_FUNCTION(reloadAll) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameManager> : ModifyBase<ModifyDerive<Der, GameManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameManager>>;
		using ModifyBase<ModifyDerive<Der, GameManager>>::ModifyBase;
		using Base = GameManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x354920, Default, GameManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x363780, Default, GameManager, clearGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e270, Default, GameManager, joinReddit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360e10, Default, GameManager, loadGround, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x363770, Default, GameManager, printGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e120, Default, GameManager, subYouTube, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35fde0, Default, GameManager, unloadIcon, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35d5b0, Default, GameManager, colorForIdx, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355220, Default, GameManager, fadeInMusic, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3606f0, Default, GameManager, getFontFile, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3611f0, Default, GameManager, getGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e200, Default, GameManager, joinDiscord, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x354bc0, Default, GameManager, startUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3560d0, Default, GameManager, unlockColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e6a0, Default, GameManager, countForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e190, Default, GameManager, followTwitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361150, Default, GameManager, getBGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e8a0, Default, GameManager, isIconLoaded, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e040, Default, GameManager, likeFacebook, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368b40, Default, GameManager, safePopScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e0b0, Default, GameManager, followTwitter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35c8f0, Default, GameManager, checkUsedIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3559c0, Default, GameManager, isIconUnlocked, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360930, Default, GameManager, loadBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368d80, Default, GameManager, reloadAllStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368e90, Default, GameManager, reloadAllStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368f00, Default, GameManager, reloadAllStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368f60, Default, GameManager, reloadAllStep5, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355150, Default, GameManager, fadeInMenuMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355010, Default, GameManager, getGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x356020, Default, GameManager, isColorUnlocked, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3607b0, Default, GameManager, loadDeathEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e2e0, Default, GameManager, openEditorGuide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368bb0, Default, GameManager, queueReloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361260, Default, GameManager, setGameVariable, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x369260, Default, GameManager, updateCustomFPS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3683a0, Default, GameManager, didExitPlayscene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360540, Default, GameManager, getIconRequestID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360b00, Default, GameManager, loadMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35ec30, Default, GameManager, sheetNameForIcon, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e430, Default, GameManager, activeIconForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x365ad0, Default, GameManager, loadVideoSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368830, Default, GameManager, returnToLastScene, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361960, Default, GameManager, getIntGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3614e0, Default, GameManager, toggleGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x365370, Default, GameManager, prepareDPadSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x356be0, Default, GameManager, completedAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x354d60, Default, GameManager, getPracticeMusicFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355a80, Default, GameManager, iconTypeToUnlockType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355c90, Default, GameManager, unlockTypeToIconType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361e20, Default, GameManager, stringForCustomObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3561c0, Default, GameManager, getUnlockForAchievement, gd::string, int&, UnlockType&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x357900, Default, GameManager, reportAchievementWithID, char const*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x356ec0, Default, GameManager, reportPercentageForLevel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361b00, Default, GameManager, getOrderedCustomObjectKeys, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368490, Default, GameManager, applicationWillEnterForeground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361700, Default, GameManager, getUGV, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3615a0, Default, GameManager, setUGV, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360650, Default, GameManager, loadFont, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35f7a0, Default, GameManager, loadIcon, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368ce0, Default, GameManager, reloadAll, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368430, Default, GameManager, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x354980, Default, GameManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367900, Default, GameManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x365be0, Default, GameManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367010, Default, GameManager, firstLoad, )
		}
	};
}
