#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightStrip, cocos2d::CCNode)
    
private:
    [[deprecated("CCLightStrip::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCLightStrip* create(float p0, float p1, float p2, float p3, float p4);
public:
    
private:
    [[deprecated("CCLightStrip::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, float p3, float p4);
public:

    /**
     * @note[short] MacOS: 0x4df1f0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x4df380
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
