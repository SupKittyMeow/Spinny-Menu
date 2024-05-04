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

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEndPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupEndPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEndPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupEndPopup::onReversed not implemented")]]
    /**
     * @note[short] Android
     */
    void onReversed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::onMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x62d190
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupEndPopup::onLockY not implemented")]]
    /**
     * @note[short] Android
     */
    void onLockY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEndPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupEndPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x62ce70
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x62d040
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x62d080
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
