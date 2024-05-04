#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJStoreItem : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJStoreItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJStoreItem, cocos2d::CCNode)
    
private:
    [[deprecated("GJStoreItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJStoreItem* create(int p0, int p1, int p2, int p3, ShopType p4);
public:

    /**
     * @note[short] MacOS: 0x8b600
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, int p3, ShopType p4);
    
private:
    [[deprecated("GJStoreItem::getCurrencyKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrencyKey();
public:
};
