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

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupItemEditTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::onOpButton not implemented")]]
    /**
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x54b700
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupItemEditTriggerPopup::updateOpButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
public:
    
private:
    [[deprecated("SetupItemEditTriggerPopup::updateFormulaLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateFormulaLabel();
public:

    /**
     * @note[short] MacOS: 0x54b8e0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
