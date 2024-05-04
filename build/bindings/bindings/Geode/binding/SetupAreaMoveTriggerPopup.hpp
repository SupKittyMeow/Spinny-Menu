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

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::getModeValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModeValues(int p0, int& p1, bool& p2, bool& p3);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onSpecialTarget not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpecialTarget(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onNextFreeEffectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::addAreaDefaultControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAreaDefaultControls(int p0);
public:
    
private:
    [[deprecated("SetupAreaMoveTriggerPopup::updateEnterTargetIDState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEnterTargetIDState();
public:

    /**
     * @note[short] MacOS: 0x4afcd0
     * @note[short] Android
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS: 0x4af850
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS: 0x4afca0
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS: 0x4afb60
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x4afc30
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0x4afc70
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
};
