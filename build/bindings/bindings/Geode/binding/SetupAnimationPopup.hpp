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

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAnimationPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimationPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimationPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::onAnimationIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3b42b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupAnimationPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimationID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimationTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x3b3e90
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x3b40c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
