#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJShopLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x214d90
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType p0);
public:

    /**
     * @note[short] MacOS: 0x300240
     * @note[short] Windows: 0x214e30
     * @note[short] Android
     */
    bool init(ShopType p0);
    
private:
    [[deprecated("GJShopLayer::onPlushies not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onSelectItem not implemented")]]
    /**
     * @note[short] Windows: 0x216580
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onCommunityCredits not implemented")]]
    /**
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x301b50
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJShopLayer::onVideoAd not implemented")]]
    /**
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::exitVideoAdItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitVideoAdItems();
public:
    
private:
    [[deprecated("GJShopLayer::showReactMessage not implemented")]]
    /**
     * @note[short] Windows: 0x217100
     * @note[short] Android
     */
    void showReactMessage();
public:
    
private:
    [[deprecated("GJShopLayer::showCantAffordMessage not implemented")]]
    /**
     * @note[short] Windows: 0x2166b0
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);
public:
    
private:
    [[deprecated("GJShopLayer::updateCurrencyCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCurrencyCounter();
public:
    
private:
    [[deprecated("GJShopLayer::scene not implemented")]]
    /**
     * @note[short] Windows: 0x214d50
     * @note[short] Android
     */
    TodoReturn scene(ShopType p0);
public:

    /**
     * @note[short] MacOS: 0x301e10
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x304340
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3046b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3046d0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3046f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x304730
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x302dc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x3026c0
     * @note[short] Android
     */
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);

    /**
     * @note[short] MacOS: 0x302100
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();

    /**
     * @note[short] MacOS: 0x304180
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
