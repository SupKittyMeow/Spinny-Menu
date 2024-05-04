#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class StatsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "StatsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsLayer, GJDropDownLayer)
    
private:
    [[deprecated("StatsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static StatsLayer* create();
public:

    /**
     * @note[short] MacOS: 0x95690
     * @note[short] Android
     */
    virtual void customSetup();
};
