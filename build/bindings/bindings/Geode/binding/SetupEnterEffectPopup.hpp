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
#include "HSVWidgetDelegate.hpp"

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEnterEffectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onEnterType not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterEffectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onHSV not implemented")]]
    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3d4f20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupEnterEffectPopup::updateHSVButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVButton();
public:

    /**
     * @note[short] MacOS: 0x3d4b00
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x3d50c0
     * @note[short] Android
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS: 0x3d5090
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS: 0x3d4cc0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x3d5020
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0x3d5060
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] MacOS: 0x3d4d90
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::_ccHSVValue p1);
};
