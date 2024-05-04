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

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)
    
private:
    [[deprecated("CommunityCreditsPage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CommunityCreditsPage* create();
public:
    
private:
    [[deprecated("CommunityCreditsPage::onSwitchPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommunityCreditsPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommunityCreditsPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CommunityCreditsPage::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x2faf40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2fe2d0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x2fe260
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2fe0d0
     * @note[short] Android
     */
    virtual void show();
};
