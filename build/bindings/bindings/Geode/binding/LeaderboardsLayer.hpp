#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x4ea500
     * @note[short] Windows: 0x228bd0
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardState p0);

    /**
     * @note[short] MacOS: 0x4ea600
     * @note[short] Windows: 0x228c70
     * @note[short] Android
     */
    bool init(LeaderboardState p0);
    
private:
    [[deprecated("LeaderboardsLayer::onCreators not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4eb380
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LeaderboardsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onWeek not implemented")]]
    /**
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onGlobal not implemented")]]
    /**
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4eb590
     * @note[short] Android
     */
    TodoReturn refreshTabs();
    
private:
    [[deprecated("LeaderboardsLayer::toggleTabButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTabButtons();
public:

    /**
     * @note[short] MacOS: 0x4eb260
     * @note[short] Android
     */
    TodoReturn selectLeaderboard(LeaderboardState p0);

    /**
     * @note[short] MacOS: 0x4eb450
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x4ea3d0
     * @note[short] Android
     */
    TodoReturn scene(LeaderboardState p0);
    
private:
    [[deprecated("LeaderboardsLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x4eae30
     * @note[short] Android
     */
    TodoReturn setupTabs();

    /**
     * @note[short] MacOS: 0x4ec1a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4ec140
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x4eb820
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS: 0x4eb880
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS: 0x4eb920
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x4ebea0
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};
