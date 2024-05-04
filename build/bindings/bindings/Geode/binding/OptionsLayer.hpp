#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS: 0x75bcf0
     * @note[short] Windows: 0x2ab510
     * @note[short] Android
     */
    static OptionsLayer* create();
    
private:
    [[deprecated("OptionsLayer::onMenuMusic not implemented")]]
    /**
     * @note[short] Windows: 0x2abf20
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onSecretVault not implemented")]]
    /**
     * @note[short] Windows: 0x2ac1d0
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onSoundtracks not implemented")]]
    /**
     * @note[short] Windows: 0x2ac170
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onHelp not implemented")]]
    /**
     * @note[short] Windows: 0x2ac640
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onRate not implemented")]]
    /**
     * @note[short] Windows: 0x2ac600
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onVideo not implemented")]]
    /**
     * @note[short] Windows: 0x2ac560
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onAccount not implemented")]]
    /**
     * @note[short] Windows: 0x2ac5c0
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onOptions not implemented")]]
    /**
     * @note[short] Windows: 0x2ac1b0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onSupport not implemented")]]
    /**
     * @note[short] Windows: 0x2ac580
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::tryEnableRecord not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryEnableRecord();
public:
    
private:
    [[deprecated("OptionsLayer::sfxSliderChanged not implemented")]]
    /**
     * @note[short] Windows: 0x2ac0b0
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("OptionsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("OptionsLayer::musicSliderChanged not implemented")]]
    /**
     * @note[short] Windows: 0x2abfc0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("OptionsLayer::exitLayer not implemented")]]
    /**
     * @note[short] Windows: 0x2ab110
     * @note[short] Android
     */
    void exitLayer();
public:

    /**
     * @note[short] MacOS: 0x75bf50
     * @note[short] Windows: 0x2ab510
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x75d380
     * @note[short] Windows: 0x2ac660
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0x75d3f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
