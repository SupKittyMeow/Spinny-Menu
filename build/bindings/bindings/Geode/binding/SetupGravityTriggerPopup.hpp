#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupGravityTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGravityTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGravityTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupGravityTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGravityTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x4a08a0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
