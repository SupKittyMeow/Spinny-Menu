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

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x34d550
     * @note[short] Windows: 0x1f1250
     * @note[short] Android
     */
    static ItemInfoPopup* create(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x34f980
     * @note[short] Windows: 0x1f1300
     * @note[short] Android
     */
    bool init(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x350f10
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ItemInfoPopup::onCredit not implemented")]]
    /**
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x350c60
     * @note[short] Windows: 0x59430
     * @note[short] Android
     */
    gd::string nameForUnlockType(int p0, UnlockType p1);
    
private:
    [[deprecated("ItemInfoPopup::isUnlockedByDefault not implemented")]]
    /**
     * @note[short] Android
     */
    bool isUnlockedByDefault(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x350fa0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
