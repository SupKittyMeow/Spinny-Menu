#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)
    
private:
    [[deprecated("RetryLevelLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RetryLevelLayer* create();
public:
    
private:
    [[deprecated("RetryLevelLayer::getEndText not implemented")]]
    /**
     * @note[short] Windows: 0xe96b0
     * @note[short] Android
     */
    TodoReturn getEndText();
public:
    
private:
    [[deprecated("RetryLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onMenu not implemented")]]
    /**
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::setupLastProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLastProgress();
public:

    /**
     * @note[short] MacOS: 0x4d46e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4d4610
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x4d3530
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x4d40f0
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS: 0x4d41f0
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] MacOS: 0x4d45f0
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();

    /**
     * @note[short] MacOS: 0x4d4730
     * @note[short] Android
     */
    virtual TodoReturn shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS: 0x4d46c0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
