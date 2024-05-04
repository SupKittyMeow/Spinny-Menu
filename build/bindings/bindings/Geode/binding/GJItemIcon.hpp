#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x34ef90
     * @note[short] Windows: 0x1f0790
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType unlockType, int itemID, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::_ccColor3B p7);

    /**
     * @note[short] MacOS: 0x34f0a0
     * @note[short] Windows: 0x1f0870
     * @note[short] Android
     */
    bool init(UnlockType p0, int p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::_ccColor3B p7);
    
private:
    [[deprecated("GJItemIcon::scaleForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scaleForType(UnlockType p0);
public:
    
private:
    [[deprecated("GJItemIcon::createStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::_ccColor3B p3);
public:
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenStoreItem(ShopType p0);
public:
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenStoreItem(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] Out of line
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);
    
private:
    [[deprecated("GJItemIcon::toggleEnabledState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEnabledState(bool p0);
public:
    
private:
    [[deprecated("GJItemIcon::changeToLockedState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeToLockedState(float p0);
public:
    
private:
    [[deprecated("GJItemIcon::unlockedColorForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockedColorForType(int p0);
public:

    /**
     * @note[short] MacOS: 0x34f600
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
