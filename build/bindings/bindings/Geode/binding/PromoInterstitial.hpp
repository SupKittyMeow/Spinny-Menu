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

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)
    
private:
    [[deprecated("PromoInterstitial::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PromoInterstitial* create(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:

    /**
     * @note[short] MacOS: 0x2aeef0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2af110
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2aeff0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2af090
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2aed50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2aed20
     * @note[short] Android
     */
    virtual void show();
};
