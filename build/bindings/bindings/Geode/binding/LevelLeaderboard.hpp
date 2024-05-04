#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x3b8480
     * @note[short] Windows: 0x253700
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);

    /**
     * @note[short] MacOS: 0x3b8610
     * @note[short] Windows: 0x2537c0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);

    /**
     * @note[short] MacOS: 0x3b9fe0
     * @note[short] Android
     */
    TodoReturn getLocalScores();

    /**
     * @note[short] MacOS: 0x3b9640
     * @note[short] Android
     */
    TodoReturn getSpriteButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);

    /**
     * @note[short] MacOS: 0x3b97f0
     * @note[short] Windows: 0x254d50
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b9a20
     * @note[short] Windows: 0x254d00
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b9840
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b9910
     * @note[short] Windows: 0x6a340
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b9940
     * @note[short] Windows: 0x254d90
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b9a80
     * @note[short] Android
     */
    TodoReturn loadScores();

    /**
     * @note[short] MacOS: 0x3b9c60
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelLeaderboard::deleteLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::reloadLeaderboard not implemented")]]
    /**
     * @note[short] Windows: 0x254c50
     * @note[short] Android
     */
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);
public:
    
private:
    [[deprecated("LevelLeaderboard::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x3ba380
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x3ba310
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x3ba8d0
     * @note[short] Windows: 0x5d2c0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x3ba5d0
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x3ba710
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);

    /**
     * @note[short] MacOS: 0x3b9f60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x3ba160
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS: 0x3ba190
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
