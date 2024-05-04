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

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupMoveCommandPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupMoveCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x5cd6d0
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupMoveCommandPopup::updateControlVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateControlVisibility();
public:

    /**
     * @note[short] MacOS: 0x5cd490
     * @note[short] Android
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS: 0x5cd450
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS: 0x5cd4d0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x5cd370
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0x5cd3c0
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
};
