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
#include "GJPurchaseDelegate.hpp"

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)
    
private:
    [[deprecated("GJPathPage::create not implemented")]]
    /**
     * @note[short] Windows: 0x1f8990
     * @note[short] Android
     */
    static GJPathPage* create(int p0, GJPathsLayer* p1);
public:
    
private:
    [[deprecated("GJPathPage::init not implemented")]]
    /**
     * @note[short] Windows: 0x1f8a40
     * @note[short] Android
     */
    bool init(int p0, GJPathsLayer* p1);
public:
    
private:
    [[deprecated("GJPathPage::onIconInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onActivatePath not implemented")]]
    /**
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::onUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathPage::playUnlockAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playUnlockAnimation();
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockAnimationStep2();
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockAnimationStep3();
public:
    
private:
    [[deprecated("GJPathPage::showCantAffordMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);
public:
    
private:
    [[deprecated("GJPathPage::unlockAnimationFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockAnimationFinished();
public:

    /**
     * @note[short] MacOS: 0x2df5c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x2df480
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2df600
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x2dd930
     * @note[short] Android
     */
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
};
