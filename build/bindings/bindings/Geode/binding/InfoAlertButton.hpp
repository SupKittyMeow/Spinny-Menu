#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS: 0x540d10
     * @note[short] Windows: 0x2233a0
     * @note[short] Android
     */
    static InfoAlertButton* create(gd::string p0, gd::string p1, float p2);
    
private:
    [[deprecated("InfoAlertButton::init not implemented")]]
    /**
     * @note[short] Windows: 0x2234c0
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, float p2);
public:

    /**
     * @note[short] MacOS: 0x540f40
     * @note[short] Android
     */
    virtual void activate();
};
