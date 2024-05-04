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
#include "GameRateDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)
    
private:
    [[deprecated("FollowRewardPage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FollowRewardPage* create();
public:
    
private:
    [[deprecated("FollowRewardPage::onSpecialItem not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::onRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FollowRewardPage::switchToOpenedState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
public:

    /**
     * @note[short] MacOS: 0x3ff7b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x401930
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x4018c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x401690
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x401810
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x401670
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();

    /**
     * @note[short] MacOS: 0x401320
     * @note[short] Android
     */
    virtual void updateRate();
};
