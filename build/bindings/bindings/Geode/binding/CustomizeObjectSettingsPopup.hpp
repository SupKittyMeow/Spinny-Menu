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

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
public:
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
public:

    /**
     * @note[short] MacOS: 0x1d8cc0
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1d8d30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
