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

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)
    
private:
    [[deprecated("ShardsPage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ShardsPage* create();
public:
    
private:
    [[deprecated("ShardsPage::onIconInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShardsPage::onSwitchPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShardsPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShardsPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("ShardsPage::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x4a0e00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x4a2c70
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x4a2c00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4a2a70
     * @note[short] Android
     */
    virtual void show();
};
