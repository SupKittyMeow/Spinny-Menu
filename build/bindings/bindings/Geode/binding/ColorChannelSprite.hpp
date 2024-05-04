#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x2b1e60
     * @note[short] Windows: 0x1d41d0
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS: 0x2b2340
     * @note[short] Android
     */
    TodoReturn updateValues(ColorAction* p0);

    /**
     * @note[short] MacOS: 0x2b20e0
     * @note[short] Windows: 0x1d4450
     * @note[short] Android
     */
    void updateOpacity(float p0);

    /**
     * @note[short] MacOS: 0x2b2230
     * @note[short] Android
     */
    TodoReturn updateBlending(bool p0);

    /**
     * @note[short] MacOS: 0x2b1f20
     * @note[short] Android
     */
    TodoReturn updateCopyLabel(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x2b1f00
     * @note[short] Android
     */
    virtual bool init();
};
