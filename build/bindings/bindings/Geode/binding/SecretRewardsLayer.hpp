#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x5f41b0
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool p0);

    /**
     * @note[short] MacOS: 0x5f42d0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::getPageColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x5f5de0
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretRewardsLayer::onSelectItem not implemented")]]
    /**
     * @note[short] Windows: 0x2f6d50
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onSwitchPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onSpecialItem not implemented")]]
    /**
     * @note[short] Windows: 0x2f7360
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onShop not implemented")]]
    /**
     * @note[short] Windows: 0x2f70b0
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialog01 not implemented")]]
    /**
     * @note[short] Windows: 0x2f7970
     * @note[short] Android
     */
    void showDialog01();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialog03 not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog03();
public:
    
private:
    [[deprecated("SecretRewardsLayer::moveToMainLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToMainLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::showLockedChest not implemented")]]
    /**
     * @note[short] Android
     */
    void showLockedChest();
public:

    /**
     * @note[short] MacOS: 0x5f6b70
     * @note[short] Android
     */
    void updateBackButton();
    
private:
    [[deprecated("SecretRewardsLayer::showDialogDiamond not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialogDiamond();
public:
    
private:
    [[deprecated("SecretRewardsLayer::generateChestItems not implemented")]]
    /**
     * @note[short] Windows: 0x2f63d0
     * @note[short] Android
     */
    TodoReturn generateChestItems(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialogMechanic not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialogMechanic();
public:
    
private:
    [[deprecated("SecretRewardsLayer::switchToOpenedState not implemented")]]
    /**
     * @note[short] Windows: 0x2f7630
     * @note[short] Android
     */
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
public:

    /**
     * @note[short] MacOS: 0x5f5ef0
     * @note[short] Windows: 0x2f76e0
     * @note[short] Android
     */
    TodoReturn updateUnlockedLabel();
    
private:
    [[deprecated("SecretRewardsLayer::createSecondaryLayer not implemented")]]
    /**
     * @note[short] Windows: 0x2f5f60
     * @note[short] Android
     */
    TodoReturn createSecondaryLayer(int p0);
public:

    /**
     * @note[short] MacOS: 0x5f6830
     * @note[short] Android
     */
    void moveToSecondaryLayer(int p0);

    /**
     * @note[short] MacOS: 0x5f4170
     * @note[short] Windows: 0x2f4130
     * @note[short] Android
     */
    cocos2d::CCScene* scene(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::showShop not implemented")]]
    /**
     * @note[short] Android
     */
    void showShop(int p0);
public:

    /**
     * @note[short] MacOS: 0x5fdb10
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x5fda80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5fd930
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS: 0x5f6310
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};
