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

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRotateCommandPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupRotateCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::onInfiniteDuration not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0xa650
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupRotateCommandPopup::updateControlVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateControlVisibility();
public:

    /**
     * @note[short] MacOS: 0xa300
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS: 0xa310
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0xa2b0
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0xa2f0
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
};
