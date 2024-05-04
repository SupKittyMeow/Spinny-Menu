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

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupStaticCameraPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupStaticCameraPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x3799a0
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupStaticCameraPopup::updateState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateState();
public:

    /**
     * @note[short] MacOS: 0x379910
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
