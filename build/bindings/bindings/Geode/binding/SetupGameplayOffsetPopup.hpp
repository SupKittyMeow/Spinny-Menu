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

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGameplayOffsetPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGameplayOffsetPopup::onDefaultValues not implemented")]]
    /**
     * @note[short] Android
     */
    void onDefaultValues(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x75ad70
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x75ae80
     * @note[short] Android
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS: 0x75ae60
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS: 0x75ae10
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0x75ae40
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
};
