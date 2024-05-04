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

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x211340
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] MacOS: 0x211b10
     * @note[short] Windows: 0x98bd0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] MacOS: 0x212660
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x212560
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
    
private:
    [[deprecated("DailyLevelNode::showSkipButton not implemented")]]
    /**
     * @note[short] Android
     */
    void showSkipButton();
public:
    
private:
    [[deprecated("DailyLevelNode::updateTimeLabel not implemented")]]
    /**
     * @note[short] Windows: 0x997a0
     * @note[short] Android
     */
    void updateTimeLabel(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x212820
     * @note[short] Windows: 0x99770
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
private:
    CCMenuItemSpriteExtra* m_skipButton;
public:
private:
    bool m_unkBool;
public:
private:
    bool m_needsDownloading;
public:
};
