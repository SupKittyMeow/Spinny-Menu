#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)
    
private:
    [[deprecated("SetupSFXPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSFXPopup::onBrowseSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x495bb0
     * @note[short] Android
     */
    void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x495740
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupSFXPopup::updateLength not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLength();
public:
    
private:
    [[deprecated("SetupSFXPopup::createSFXWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSFXWidget();
public:

    /**
     * @note[short] MacOS: 0x4956f0
     * @note[short] Android
     */
    virtual TodoReturn pageChanged();

    /**
     * @note[short] MacOS: 0x495a90
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x4959b0
     * @note[short] Android
     */
    virtual TodoReturn sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS: 0x4959d0
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();

    /**
     * @note[short] MacOS: 0x4959f0
     * @note[short] Android
     */
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);

    /**
     * @note[short] MacOS: 0x495c50
     * @note[short] Android
     */
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
};
