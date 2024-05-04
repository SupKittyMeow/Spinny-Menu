#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "UIButtonConfig.hpp"
#include "GManager.hpp"

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] Out of line
     */
    static GameManager* get();

    /**
     * @note[short] MacOS: 0x354920
     * @note[short] Windows: 0x11f720
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
     * @note[short] Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] Out of line
     */
    int getPlayerFrame();

    /**
     * @note[short] Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] Out of line
     */
    int getPlayerBall();

    /**
     * @note[short] Out of line
     */
    int getPlayerBird();

    /**
     * @note[short] Out of line
     */
    int getPlayerDart();

    /**
     * @note[short] Out of line
     */
    int getPlayerRobot();

    /**
     * @note[short] Out of line
     */
    int getPlayerSpider();

    /**
     * @note[short] Out of line
     */
    int getPlayerSwing();

    /**
     * @note[short] Out of line
     */
    int getPlayerGlowColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerStreak();

    /**
     * @note[short] Out of line
     */
    int getPlayerShipFire();

    /**
     * @note[short] Out of line
     */
    int getPlayerDeathEffect();

    /**
     * @note[short] Out of line
     */
    int getPlayerJetpack();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor2();

    /**
     * @note[short] Out of line
     */
    bool getPlayerGlow();

    /**
     * @note[short] Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);
    
private:
    [[deprecated("GameManager::addToGJLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToGJLog(cocos2d::CCString* p0);
public:

    /**
     * @note[short] MacOS: 0x363780
     * @note[short] Android
     */
    void clearGJLog();

    /**
     * @note[short] MacOS: 0x35e270
     * @note[short] Android
     */
    void joinReddit();

    /**
     * @note[short] Out of line
     */
    int keyForIcon(int iconIdx, int iconEnum);

    /**
     * @note[short] MacOS: 0x360e10
     * @note[short] Android
     */
    void loadGround(int p0);

    /**
     * @note[short] MacOS: 0x363770
     * @note[short] Android
     */
    void printGJLog();
    
private:
    [[deprecated("GameManager::reloadMenu not implemented")]]
    /**
     * @note[short] Windows: 0x12c510
     * @note[short] Android
     */
    void reloadMenu();
public:
    
private:
    [[deprecated("GameManager::reorderKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderKey(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x35e120
     * @note[short] Android
     */
    TodoReturn subYouTube();
    
private:
    [[deprecated("GameManager::tryCacheAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryCacheAd();
public:

    /**
     * @note[short] MacOS: 0x35fde0
     * @note[short] Android
     */
    void unloadIcon(int p0, int p1, int p2);
    
private:
    [[deprecated("GameManager::unlockIcon not implemented")]]
    /**
     * @note[short] Android
     */
    void unlockIcon(int p0, IconType p1);
public:

    /**
     * @note[short] MacOS: 0x35d5b0
     * @note[short] Windows: 0x124270
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIdx(int p0);
    
private:
    [[deprecated("GameManager::colorForPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForPos(int p0);
public:
    
private:
    [[deprecated("GameManager::doQuickSave not implemented")]]
    /**
     * @note[short] Windows: 0x12bf00
     * @note[short] Android
     */
    void doQuickSave();
public:

    /**
     * @note[short] MacOS: 0x355220
     * @note[short] Android
     */
    TodoReturn fadeInMusic(gd::string p0);

    /**
     * @note[short] MacOS: 0x3606f0
     * @note[short] Android
     */
    static const char* getFontFile(int p0);

    /**
     * @note[short] MacOS: 0x3611f0
     * @note[short] Android
     */
    TodoReturn getGTexture(int p0);

    /**
     * @note[short] MacOS: 0x35e200
     * @note[short] Android
     */
    TodoReturn joinDiscord();
    
private:
    [[deprecated("GameManager::saveAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveAdTimer();
public:

    /**
     * @note[short] MacOS: 0x354bc0
     * @note[short] Android
     */
    TodoReturn startUpdate();
    
private:
    [[deprecated("GameManager::unloadIcons not implemented")]]
    /**
     * @note[short] Windows: 0x125a60
     * @note[short] Android
     */
    void unloadIcons(int p0);
public:

    /**
     * @note[short] MacOS: 0x3560d0
     * @note[short] Android
     */
    void unlockColor(int p0, UnlockType p1);
    
private:
    [[deprecated("GameManager::updateMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMusic();
public:

    /**
     * @note[short] MacOS: 0x35e6a0
     * @note[short] Android
     */
    TodoReturn countForType(IconType p0);

    /**
     * @note[short] MacOS: 0x35e190
     * @note[short] Android
     */
    TodoReturn followTwitch();

    /**
     * @note[short] MacOS: 0x361150
     * @note[short] Android
     */
    TodoReturn getBGTexture(int p0);
    
private:
    [[deprecated("GameManager::getMGTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMGTexture(int p0);
public:

    /**
     * @note[short] MacOS: 0x35e8a0
     * @note[short] Android
     */
    bool isIconLoaded(int p0, int p1);

    /**
     * @note[short] MacOS: 0x35e040
     * @note[short] Android
     */
    TodoReturn likeFacebook();
    
private:
    [[deprecated("GameManager::resetAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAdTimer();
public:

    /**
     * @note[short] MacOS: 0x368b40
     * @note[short] Android
     */
    TodoReturn safePopScene();

    /**
     * @note[short] MacOS: 0x35e0b0
     * @note[short] Android
     */
    TodoReturn followTwitter();
    
private:
    [[deprecated("GameManager::itemPurchased not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn itemPurchased(char const* p0);
public:
    
private:
    [[deprecated("GameManager::loadIconAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadIconAsync(int p0, int p1, int p2, cocos2d::CCObject* p3);
public:
    
private:
    [[deprecated("GameManager::playMenuMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playMenuMusic();
public:
    
private:
    [[deprecated("GameManager::resetAllIcons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllIcons();
public:
    
private:
    [[deprecated("GameManager::videoAdHidden not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoAdHidden();
public:
    
private:
    [[deprecated("GameManager::videoAdShowed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoAdShowed();
public:

    /**
     * @note[short] MacOS: 0x35c8f0
     * @note[short] Android
     */
    TodoReturn checkUsedIcons();
    
private:
    [[deprecated("GameManager::getFontTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFontTexture(int p0);
public:
    
private:
    [[deprecated("GameManager::getNextUsedKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextUsedKey(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x3559c0
     * @note[short] Windows: 0x120170
     * @note[short] Android
     */
    bool isIconUnlocked(int p0, IconType p1);
    
private:
    [[deprecated("GameManager::levelIsPremium not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelIsPremium(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x360930
     * @note[short] Android
     */
    void loadBackground(int p0);
    
private:
    [[deprecated("GameManager::loadDPadLayout not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadDPadLayout(int p0, bool p1);
public:
    
private:
    [[deprecated("GameManager::playSFXTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x11fd20
     * @note[short] Android
     */
    TodoReturn playSFXTrigger(SFXTriggerGameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x368d80
     * @note[short] Windows: 0x12c620
     * @note[short] Android
     */
    void reloadAllStep2();

    /**
     * @note[short] MacOS: 0x368e90
     * @note[short] Windows: 0x12c780
     * @note[short] Android
     */
    void reloadAllStep3();

    /**
     * @note[short] MacOS: 0x368f00
     * @note[short] Windows: 0x12c820
     * @note[short] Android
     */
    void reloadAllStep4();

    /**
     * @note[short] MacOS: 0x368f60
     * @note[short] Windows: 0x12c890
     * @note[short] Android
     */
    void reloadAllStep5();
    
private:
    [[deprecated("GameManager::saveDPadLayout not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveDPadLayout(int p0, bool p1);
public:
    
private:
    [[deprecated("GameManager::shortenAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shortenAdTimer(float p0);
public:
    
private:
    [[deprecated("GameManager::showMainMenuAd not implemented")]]
    /**
     * @note[short] Android
     */
    void showMainMenuAd();
public:
    
private:
    [[deprecated("GameManager::addIconDelegate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addIconDelegate(cocos2d::CCObject* p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x355150
     * @note[short] Windows: 0x11fbd0
     * @note[short] Android
     */
    void fadeInMenuMusic();

    /**
     * @note[short] MacOS: 0x355010
     * @note[short] Windows: 0x126920
     * @note[short] Android
     */
    bool getGameVariable(char const* p0);

    /**
     * @note[short] MacOS: 0x356020
     * @note[short] Windows: 0x120670
     * @note[short] Android
     */
    bool isColorUnlocked(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x3607b0
     * @note[short] Android
     */
    void loadDeathEffect(int p0);
    
private:
    [[deprecated("GameManager::loadGroundAsync not implemented")]]
    /**
     * @note[short] Android
     */
    void loadGroundAsync(int p0);
public:

    /**
     * @note[short] MacOS: 0x35e2e0
     * @note[short] Android
     */
    void openEditorGuide();

    /**
     * @note[short] MacOS: 0x368bb0
     * @note[short] Windows: 0x12c4c0
     * @note[short] Android
     */
    void queueReloadMenu();

    /**
     * @note[short] MacOS: 0x361260
     * @note[short] Windows: 0x1266d0
     * @note[short] Android
     */
    void setGameVariable(char const* p0, bool p1);
    
private:
    [[deprecated("GameManager::unlockedPremium not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockedPremium();
public:

    /**
     * @note[short] MacOS: 0x369260
     * @note[short] Windows: 0x12cd40
     * @note[short] Android
     */
    void updateCustomFPS();
    
private:
    [[deprecated("GameManager::addGameAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGameAnimation(int p0, int p1, float p2, gd::string p3, gd::string p4, int p5);
public:

    /**
     * @note[short] MacOS: 0x3683a0
     * @note[short] Android
     */
    TodoReturn didExitPlayscene();

    /**
     * @note[short] MacOS: 0x360540
     * @note[short] Android
     */
    TodoReturn getIconRequestID();
    
private:
    [[deprecated("GameManager::getMenuMusicFile not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMenuMusicFile();
public:

    /**
     * @note[short] MacOS: 0x360b00
     * @note[short] Android
     */
    void loadMiddleground(int p0);
    
private:
    [[deprecated("GameManager::recountUserStats not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recountUserStats(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::resetAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievement(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::resetCoinUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::resolutionForKey not implemented")]]
    /**
     * @note[short] Windows: 0x12c8e0
     * @note[short] Android
     */
    void resolutionForKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x35ec30
     * @note[short] Android
     */
    gd::string sheetNameForIcon(int p0, int p1);
    
private:
    [[deprecated("GameManager::showInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    void showInterstitial();
public:
    
private:
    [[deprecated("GameManager::switchScreenMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchScreenMode(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameManager::unloadBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unloadBackground();
public:

    /**
     * @note[short] MacOS: 0x35e430
     * @note[short] Android
     */
    int activeIconForType(IconType p0);
    
private:
    [[deprecated("GameManager::iconAndTypeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn iconAndTypeForKey(int p0, int& p1, int& p2);
public:

    /**
     * @note[short] MacOS: 0x365ad0
     * @note[short] Android
     */
    TodoReturn loadVideoSettings();
    
private:
    [[deprecated("GameManager::logLoadedIconInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logLoadedIconInfo();
public:
    
private:
    [[deprecated("GameManager::resetDPadSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetDPadSettings(bool p0);
public:

    /**
     * @note[short] MacOS: 0x368830
     * @note[short] Windows: 0x12c1f0
     * @note[short] Android
     */
    void returnToLastScene(GJGameLevel* p0);
    
private:
    [[deprecated("GameManager::verifyCoinUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifyStarUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyStarUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifySyncedCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySyncedCoins();
public:
    
private:
    [[deprecated("GameManager::addNewCustomObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewCustomObject(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::claimItemsResponse not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimItemsResponse(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::dpadConfigToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dpadConfigToString(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GameManager::eventUnlockFeature not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn eventUnlockFeature(char const* p0);
public:
    
private:
    [[deprecated("GameManager::framesForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn framesForAnimation(int p0);
public:

    /**
     * @note[short] MacOS: 0x361960
     * @note[short] Windows: 0x126e70
     * @note[short] Android
     */
    int getIntGameVariable(char const* p0);
    
private:
    [[deprecated("GameManager::loadDpadFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadDpadFromString(UIButtonConfig& p0, gd::string p1);
public:
    
private:
    [[deprecated("GameManager::removeCustomObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeCustomObject(int p0);
public:
    
private:
    [[deprecated("GameManager::removeIconDelegate not implemented")]]
    /**
     * @note[short] Windows: 0x125560
     * @note[short] Android
     */
    TodoReturn removeIconDelegate(int p0);
public:
    
private:
    [[deprecated("GameManager::setIntGameVariable not implemented")]]
    /**
     * @note[short] Android
     */
    void setIntGameVariable(char const* p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x3614e0
     * @note[short] Android
     */
    TodoReturn toggleGameVariable(char const* p0);
    
private:
    [[deprecated("GameManager::loadBackgroundAsync not implemented")]]
    /**
     * @note[short] Android
     */
    void loadBackgroundAsync(int p0);
public:

    /**
     * @note[short] MacOS: 0x365370
     * @note[short] Android
     */
    TodoReturn prepareDPadSettings();
    
private:
    [[deprecated("GameManager::rewardedVideoHidden not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoHidden();
public:
    
private:
    [[deprecated("GameManager::setupGameAnimations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupGameAnimations();
public:
    
private:
    [[deprecated("GameManager::switchCustomObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchCustomObjects(int p0, int p1);
public:
    
private:
    [[deprecated("GameManager::tryShowInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowInterstitial(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameManager::accountStatusChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn accountStatusChanged();
public:
    
private:
    [[deprecated("GameManager::canShowRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canShowRewardedVideo();
public:

    /**
     * @note[short] MacOS: 0x356be0
     * @note[short] Android
     */
    TodoReturn completedAchievement(gd::string p0);
    
private:
    [[deprecated("GameManager::defaultYOffsetForBG2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn defaultYOffsetForBG2(int p0);
public:
    
private:
    [[deprecated("GameManager::generateSecretNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateSecretNumber();
public:

    /**
     * @note[short] MacOS: 0x354d60
     * @note[short] Windows: 0x11f990
     * @note[short] Android
     */
    gd::string getPracticeMusicFile();

    /**
     * @note[short] MacOS: 0x355a80
     * @note[short] Android
     */
    TodoReturn iconTypeToUnlockType(IconType p0);

    /**
     * @note[short] MacOS: 0x355c90
     * @note[short] Android
     */
    TodoReturn unlockTypeToIconType(int p0);
    
private:
    [[deprecated("GameManager::addDuplicateLastFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addDuplicateLastFrame(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::frameTimeForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameTimeForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::loadMiddlegroundAsync not implemented")]]
    /**
     * @note[short] Android
     */
    void loadMiddlegroundAsync(int p0);
public:

    /**
     * @note[short] MacOS: 0x361e20
     * @note[short] Android
     */
    TodoReturn stringForCustomObject(int p0);
    
private:
    [[deprecated("GameManager::finishedLoadingBGAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingBGAsync(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::getNextUniqueObjectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextUniqueObjectKey();
public:
    
private:
    [[deprecated("GameManager::shouldShowInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldShowInterstitial(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameManager::showInterstitialForced not implemented")]]
    /**
     * @note[short] Android
     */
    void showInterstitialForced();
public:
    
private:
    [[deprecated("GameManager::addCustomAnimationFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomAnimationFrame(int p0, int p1, gd::string p2, gd::string p3);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync2(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x3561c0
     * @note[short] Android
     */
    TodoReturn getUnlockForAchievement(gd::string p0, int& p1, UnlockType& p2);
    
private:
    [[deprecated("GameManager::groundHasSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groundHasSecondaryColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x357900
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);
    
private:
    [[deprecated("GameManager::rewardedVideoAdFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoAdFinished(int p0);
public:
    
private:
    [[deprecated("GameManager::calculateBaseKeyForIcons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateBaseKeyForIcons();
public:
    
private:
    [[deprecated("GameManager::defaultFrameForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn defaultFrameForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingIconAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingIconAsync(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x356ec0
     * @note[short] Windows: 0x120f30
     * @note[short] Android
     */
    TodoReturn reportPercentageForLevel(int p0, int p1, bool p2);
    
private:
    [[deprecated("GameManager::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements();
public:
    
private:
    [[deprecated("GameManager::verifyAchievementUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyAchievementUnlocks();
public:

    /**
     * @note[short] MacOS: 0x361b00
     * @note[short] Android
     */
    TodoReturn getOrderedCustomObjectKeys();
    
private:
    [[deprecated("GameManager::rewardedVideoHiddenDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoHiddenDelayed();
public:
    
private:
    [[deprecated("GameManager::checkSteamAchievementUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSteamAchievementUnlock();
public:
    
private:
    [[deprecated("GameManager::applicationDidEnterBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applicationDidEnterBackground();
public:

    /**
     * @note[short] MacOS: 0x368490
     * @note[short] Windows: 0x12bfb0
     * @note[short] Android
     */
    TodoReturn applicationWillEnterForeground();

    /**
     * @note[short] MacOS: 0x361700
     * @note[short] Windows: 0x126c10
     * @note[short] Android
     */
    bool getUGV(char const* p0);

    /**
     * @note[short] MacOS: 0x3615a0
     * @note[short] Windows: 0x126ac0
     * @note[short] Android
     */
    void setUGV(char const* p0, bool p1);
    
private:
    [[deprecated("GameManager::iconKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn iconKey(int p0, IconType p1);
public:
    
private:
    [[deprecated("GameManager::colorKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorKey(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x360650
     * @note[short] Android
     */
    TodoReturn loadFont(int p0);

    /**
     * @note[short] MacOS: 0x35f7a0
     * @note[short] Windows: 0x125630
     * @note[short] Android
     */
    cocos2d::CCTexture2D* loadIcon(int p0, int p1, int p2);
    
private:
    [[deprecated("GameManager::lockIcon not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lockIcon(int p0, IconType p1);
public:
    
private:
    [[deprecated("GameManager::rateGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rateGame();
public:
    
private:
    [[deprecated("GameManager::lockColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lockColor(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x368ce0
     * @note[short] Windows: 0x12c590
     * @note[short] Android
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] MacOS: 0x368430
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x354980
     * @note[short] Windows: 0x11ea00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x367900
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x365be0
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x367010
     * @note[short] Android
     */
    virtual void firstLoad();
    cocos2d::CCDictionary* m_unkAnimationDict;
    cocos2d::CCDictionary* m_unkAnimationDict2;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    gd::string m_unknownString;
    int m_unkSize4_4;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    void* m_unkPtr;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_unknownVariable;
    bool m_unknownBool3;
    bool m_unknownPlayLayerBool;
    bool m_unknownBool4;
    bool m_unknownBool5;
    gd::string m_playerUDID;
    gd::string m_playerName;
    bool m_commentsEnabled;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord_;
    bool m_clickedReddit;
    double m_socialsDuration;
    bool m_showedAd;
    bool m_unknownBool;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueSR m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_unkBool4;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    void* m_unkPtr2;
    void* m_unkPtr3;
    int m_unkSize4_5;
    int m_unkSize4_6;
    int m_unkSize4_7;
    int m_unkSize4_8;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_shouldLoadG1;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    bool m_unkBool5;
    int m_unkSize4_9;
    int m_unkSize4_10;
    int m_unkSize4_11;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    void* m_unkPtr4;
    bool m_unkBool9;
    int m_unkSize4_12;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    bool m_unkBool11;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    gd::map<int, int> m_loadIcon;
    gd::map<int, gd::map<int, int>> m_loadIcon2;
    gd::map<int, bool> m_isIconBeingLoaded;
    std::array<int, 9>* m_keyStartForIcon;
    void* m_somethingKeyForIcon;
    void* m_idk;
    gd::map<int, gd::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_unkArray;
    void* m_someAdPointer;
    int m_unkSize4_15;
    int m_unkSize4_16;
    int m_unkSize4_17;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    gd::string m_dpadLayout1;
    gd::string m_dpadLayout2;
    gd::string m_dpadLayout3;
    gd::string m_dpadLayoutDual1;
    gd::string m_dpadLayoutDual2;
    gd::string m_dpadLayoutDual3;
    int m_unkSize4_18;
    int m_unkSize4_19;
    int m_unkSize4_20;
    bool m_unkBool12;
};
