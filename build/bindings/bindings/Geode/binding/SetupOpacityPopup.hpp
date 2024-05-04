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

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS: 0x59f90
     * @note[short] Android
     */
    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS: 0x5a1e0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupOpacityPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x5b9c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5b000
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("SetupOpacityPopup::updateOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacity();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateOpacityLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityLabel();
public:
    
private:
    [[deprecated("SetupOpacityPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x5b3c0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x5b720
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5b760
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
