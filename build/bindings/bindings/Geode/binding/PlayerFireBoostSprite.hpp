#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x3dd7e0
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] Out of line
     */
    void animateFireIn();

    /**
     * @note[short] Out of line
     */
    void animateFireOut();

    /**
     * @note[short] MacOS: 0x3f8530
     * @note[short] Android
     */
    TodoReturn loopFireAnimation();

    /**
     * @note[short] MacOS: 0x3fd6c0
     * @note[short] Android
     */
    virtual bool init();
    float m_someFloat;
};
