#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] MacOS: 0x5a0cc0
     * @note[short] Windows: 0x2127d0
     * @note[short] Android
     */
    static GJRobotSprite* create(int p0);
    
private:
    [[deprecated("GJRobotSprite::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS: 0x5a0e70
     * @note[short] Android
     */
    bool init(int p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x5a13a0
     * @note[short] Windows: 0x213370
     * @note[short] Android
     */
    TodoReturn updateFrame(int p0);

    /**
     * @note[short] MacOS: 0x5a1bd0
     * @note[short] Windows: 0x212e30
     * @note[short] Android
     */
    TodoReturn updateColors();

    /**
     * @note[short] MacOS: 0x5a1bb0
     * @note[short] Android
     */
    TodoReturn updateColor01(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x5a1ef0
     * @note[short] Android
     */
    TodoReturn updateColor02(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x5a1f10
     * @note[short] Windows: 0x212dd0
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::_ccColor3B p0, bool p1);

    /**
     * @note[short] MacOS: 0x5a1b90
     * @note[short] Android
     */
    TodoReturn hideGlow();

    /**
     * @note[short] MacOS: 0x5a1b70
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS: 0x5a1f90
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x5a20a0
     * @note[short] Android
     */
    virtual TodoReturn hideSecondary();
};
