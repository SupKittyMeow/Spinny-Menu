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
#include "FLAlertLayerProtocol.hpp"
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x20f540
     * @note[short] Windows: 0x96b30
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType p0);

    /**
     * @note[short] MacOS: 0x20f6d0
     * @note[short] Windows: 0x96bd0
     * @note[short] Android
     */
    bool init(GJTimedLevelType p0);
    
private:
    [[deprecated("DailyLevelPage::getDailyTime not implemented")]]
    /**
     * @note[short] Windows: 0x98200
     * @note[short] Android
     */
    TodoReturn getDailyTime();
public:

    /**
     * @note[short] MacOS: 0x2103a0
     * @note[short] Windows: 0x982b0
     * @note[short] Android
     */
    TodoReturn getDailyTimeString(int p0);

    /**
     * @note[short] MacOS: 0x210300
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x210340
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x210720
     * @note[short] Windows: 0x98630
     * @note[short] Android
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("DailyLevelPage::exitDailyNode not implemented")]]
    /**
     * @note[short] Windows: 0x98150
     * @note[short] Android
     */
    TodoReturn exitDailyNode(DailyLevelNode* p0, float p1);
public:
    
private:
    [[deprecated("DailyLevelPage::skipDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);
public:

    /**
     * @note[short] MacOS: 0x210930
     * @note[short] Android
     */
    TodoReturn createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);
    
private:
    [[deprecated("DailyLevelPage::claimLevelReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("DailyLevelPage::refreshDailyPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshDailyPage();
public:
    
private:
    [[deprecated("DailyLevelPage::tryGetDailyStatus not implemented")]]
    /**
     * @note[short] Windows: 0x97e10
     * @note[short] Android
     */
    TodoReturn tryGetDailyStatus();
public:
    
private:
    [[deprecated("DailyLevelPage::createNodeIfLoaded not implemented")]]
    /**
     * @note[short] Windows: 0x97ec0
     * @note[short] Android
     */
    TodoReturn createNodeIfLoaded();
public:
    
private:
    [[deprecated("DailyLevelPage::downloadAndCreateNode not implemented")]]
    /**
     * @note[short] Windows: 0x97e60
     * @note[short] Android
     */
    TodoReturn downloadAndCreateNode();
public:

    /**
     * @note[short] MacOS: 0x2116b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x211620
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x211480
     * @note[short] Windows: 0x5d2c0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x211600
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x210b20
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType p0);

    /**
     * @note[short] MacOS: 0x210f60
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS: 0x2111b0
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x211270
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
