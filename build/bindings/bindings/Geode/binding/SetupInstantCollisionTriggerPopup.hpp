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

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCollisionTriggerPopup::updateSpecialNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialNodes();
public:

    /**
     * @note[short] MacOS: 0x375cd0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS: 0x3759c0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
