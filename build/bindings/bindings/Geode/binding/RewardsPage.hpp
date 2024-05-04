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
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)
    
private:
    [[deprecated("RewardsPage::create not implemented")]]
    /**
     * @note[short] Windows: 0x2ef270
     * @note[short] Android
     */
    static RewardsPage* create();
public:
    
private:
    [[deprecated("RewardsPage::getRewardFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardFrame(int p0, int p1);
public:
    
private:
    [[deprecated("RewardsPage::onFreeStuff not implemented")]]
    /**
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardsPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardsPage::onReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x1f9460
     * @note[short] Android
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("RewardsPage::tryGetRewards not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetRewards();
public:
    
private:
    [[deprecated("RewardsPage::unlockLayerClosed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLayerClosed(RewardUnlockLayer* p0);
public:

    /**
     * @note[short] MacOS: 0x1f8590
     * @note[short] Windows: 0x2ef310
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1f9e50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x1f9de0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x1f9c80
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x1f9dc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x1f9900
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int p0);

    /**
     * @note[short] MacOS: 0x1f9b90
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    cocos2d::CCNode* m_openLayer;
};
