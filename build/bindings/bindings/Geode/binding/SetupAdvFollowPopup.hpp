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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAdvFollowPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x2e6750
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupAdvFollowPopup::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2e6e00
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupAdvFollowPopup::onPremade not implemented")]]
    /**
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::updateMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMode(int p0);
public:

    /**
     * @note[short] MacOS: 0x2e63b0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS: 0x2e64f0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x2e6980
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);
};
