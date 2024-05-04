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
#include "MusicDownloadDelegate.hpp"
#include "SongPlaybackDelegate.hpp"

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)
    
private:
    [[deprecated("SetupSongTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupSongTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::onResetSongTime not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetSongTime(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::onSavePlaybackPos not implemented")]]
    /**
     * @note[short] Android
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2ae810
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupSongTriggerPopup::updateLength not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLength();
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::updateApplyPrepare not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateApplyPrepare(bool p0);
public:
    
private:
    [[deprecated("SetupSongTriggerPopup::updateSongTimeSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSongTimeSlider();
public:

    /**
     * @note[short] MacOS: 0x2ae780
     * @note[short] Android
     */
    virtual TodoReturn pageChanged();

    /**
     * @note[short] MacOS: 0x2ae680
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x2ae450
     * @note[short] Windows: 0x356930
     * @note[short] Android
     */
    virtual TodoReturn onPlayback(SongInfoObject* p0);
};
