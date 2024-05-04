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

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraModePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCameraModePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraModePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraModePopup::onUnboundMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraModePopup::onEditCameraSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x485e40
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupCameraModePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraEasing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEasing();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraPadding not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraPadding();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateItemVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemVisibility();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraEasingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraModePopup::updateCameraPaddingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraPaddingLabel();
public:

    /**
     * @note[short] MacOS: 0x485b50
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
};
