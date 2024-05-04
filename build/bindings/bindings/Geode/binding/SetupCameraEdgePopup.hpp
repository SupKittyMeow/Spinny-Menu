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

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraEdgePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onCameraEdge not implemented")]]
    /**
     * @note[short] Android
     */
    void onCameraEdge(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onUnlockEdge not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlockEdge(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x554ce0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupCameraEdgePopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupCameraEdgePopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x554a40
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x554bd0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
