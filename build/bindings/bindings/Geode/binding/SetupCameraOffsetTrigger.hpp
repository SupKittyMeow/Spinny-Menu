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

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraOffsetTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onTargetMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x627640
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasing not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderXChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderXChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueXLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueXLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueYLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::posFromSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderValueFromPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosX();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasingRate();
public:

    /**
     * @note[short] MacOS: 0x626b10
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x627310
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x626ee0
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};
