#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("ExtendedLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ExtendedLayer* create();
public:

    /**
     * @note[short] MacOS: 0x385200
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x385210
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
};
