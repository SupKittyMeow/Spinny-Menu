#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x36de10
     * @note[short] Windows: 0x276680
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);

    /**
     * @note[short] MacOS: 0x36f670
     * @note[short] Windows: 0x2779b0
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x36f710
     * @note[short] Windows: 0x277a50
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f860
     * @note[short] Windows: 0x277940
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onFreeLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x36fac0
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f580
     * @note[short] Windows: 0x277d90
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x36f4c0
     * @note[short] Windows: 0x277ae0
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onGooglePlayGames not implemented")]]
    /**
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x36f310
     * @note[short] Windows: 0x277b40
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f790
     * @note[short] Windows: 0x277e20
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f9d0
     * @note[short] Windows: 0x2777b0
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f540
     * @note[short] Windows: 0x277c50
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f3a0
     * @note[short] Windows: 0x277cf0
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f650
     * @note[short] Windows: 0x277990
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f6d0
     * @note[short] Windows: 0x277a10
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f430
     * @note[short] Windows: 0x277c80
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f6f0
     * @note[short] Windows: 0x277a30
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f500
     * @note[short] Windows: 0x277be0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36fea0
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f690
     * @note[short] Windows: 0x2779d6
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x36f6b0
     * @note[short] Windows: 0x2779f0
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x75bcf0
     * @note[short] Windows: 0x2ab400
     * @note[short] Android
     */
    TodoReturn openOptions(bool p0);

    /**
     * @note[short] MacOS: 0x36fb10
     * @note[short] Android
     */
    void showGCQuestion();

    /**
     * @note[short] MacOS: 0x36fa30
     * @note[short] Windows: 0x277900
     * @note[short] Android
     */
    TodoReturn firstNetworkTest();
    
private:
    [[deprecated("MenuLayer::onOptionsInstant not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onOptionsInstant();
public:
    
private:
    [[deprecated("MenuLayer::showMeltdownPromo not implemented")]]
    /**
     * @note[short] Android
     */
    void showMeltdownPromo();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsClosed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoOptionsClosed();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsOpened not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoOptionsOpened();
public:
    
private:
    [[deprecated("MenuLayer::updateUserProfileButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUserProfileButton();
public:
    
private:
    [[deprecated("MenuLayer::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements(float p0);
public:
    
private:
    [[deprecated("MenuLayer::endGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn endGame();
public:

    /**
     * @note[short] MacOS: 0x36f9f0
     * @note[short] Windows: 0x277910
     * @note[short] Android
     */
    void showTOS();
    
private:
    [[deprecated("MenuLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd(float p0);
public:
    
private:
    [[deprecated("MenuLayer::willClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn willClose();
public:

    /**
     * @note[short] MacOS: 0x36dfd0
     * @note[short] Windows: 0x276700
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x36fee0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x3701a0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x36fc50
     * @note[short] Windows: 0x277b10
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS: 0x36ff10
     * @note[short] Windows: 0x277ea0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
