#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)
    
private:
    [[deprecated("PlayerCheckpoint::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PlayerCheckpoint* create();
public:

    /**
     * @note[short] MacOS: 0xb8d20
     * @note[short] Android
     */
    virtual bool init();
};
