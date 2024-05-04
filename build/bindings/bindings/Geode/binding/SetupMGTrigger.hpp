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

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupMGTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::onEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4e27f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupMGTrigger::onEasing not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateValueYLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::posFromSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderValueFromPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandPosY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupMGTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasingRate();
public:

    /**
     * @note[short] MacOS: 0x4e1f90
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x4e2590
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4e2250
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};
