#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ListButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x3d17f0
     * @note[short] Android
     */
    static ListButtonPage* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);

    /**
     * @note[short] MacOS: 0x3d1ad0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);
};
