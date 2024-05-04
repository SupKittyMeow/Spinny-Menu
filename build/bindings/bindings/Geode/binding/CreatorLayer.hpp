#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x2752e0
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] MacOS: 0x2769d0
     * @note[short] Windows: 0x70250
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276a70
     * @note[short] Windows: 0x6fe90
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276970
     * @note[short] Windows: 0x70160
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2766b0
     * @note[short] Windows: 0x70910
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2768a0
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2766e0
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276720
     * @note[short] Windows: 0x70740
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onFameLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x276310
     * @note[short] Windows: 0x70330
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276200
     * @note[short] Windows: 0x6ff80
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276e10
     * @note[short] Windows: 0x70940
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276700
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276640
     * @note[short] Windows: 0x706c0
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2762d0
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276a30
     * @note[short] Windows: 0x701e0
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x277020
     * @note[short] Windows: 0x70c50
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2768f0
     * @note[short] Windows: 0x700c0
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onOnlyFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2775e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276950
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x276d10
     * @note[short] Windows: 0x71090
     * @note[short] Android
     */
    TodoReturn checkQuestsStatus();
    
private:
    [[deprecated("CreatorLayer::canPlayOnlineLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canPlayOnlineLevels();
public:

    /**
     * @note[short] MacOS: 0x2751c0
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] MacOS: 0x2753c0
     * @note[short] Windows: 0x6f090
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x277830
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2777b0
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS: 0x2776b0
     * @note[short] Windows: 0x711d0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
