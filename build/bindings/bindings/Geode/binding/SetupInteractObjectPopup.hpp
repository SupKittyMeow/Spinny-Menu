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

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInteractObjectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInteractObjectPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x4e6b60
     * @note[short] Android
     */
    void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4e6c50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupInteractObjectPopup::updateItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItems();
public:

    /**
     * @note[short] MacOS: 0x4e6ba0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
