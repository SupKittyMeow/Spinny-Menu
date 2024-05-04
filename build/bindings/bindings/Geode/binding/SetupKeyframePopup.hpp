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

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupKeyframePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onTimeMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x1e0870
     * @note[short] Android
     */
    void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1e07e0
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1e0c20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupKeyframePopup::refreshPreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshPreviewArt();
public:
    
private:
    [[deprecated("SetupKeyframePopup::updateTimeModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeModeButtons();
public:

    /**
     * @note[short] MacOS: 0x1e05b0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
