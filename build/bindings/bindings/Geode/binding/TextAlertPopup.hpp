#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x28b290
     * @note[short] Android
     */
    static TextAlertPopup* create(gd::string p0, float p1, float p2, int p3, gd::string p4);

    /**
     * @note[short] MacOS: 0x28b3c0
     * @note[short] Android
     */
    bool init(gd::string p0, float p1, float p2, int p3, gd::string p4);

    /**
     * @note[short] MacOS: 0x28b6d0
     * @note[short] Android
     */
    void setLabelColor(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x28b710
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint p0, cocos2d::CCPoint p1);
};
