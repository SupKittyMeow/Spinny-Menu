#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DialogObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "DialogObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS: 0x3a50f0
     * @note[short] Windows: 0x99a90
     * @note[short] Android
     */
    static DialogObject* create(gd::string p0, gd::string p1, int p2, float p3, bool p4, cocos2d::_ccColor3B p5);
    
private:
    [[deprecated("DialogObject::init not implemented")]]
    /**
     * @note[short] Windows: 0x99bd0
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, int p2, float p3, bool p4, cocos2d::_ccColor3B p5);
public:
};
