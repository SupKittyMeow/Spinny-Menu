#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"

class PauseLayer : public CCBlockLayer {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS: 0x3b4400
     * @note[short] Windows: 0x2b3690
     * @note[short] Android
     */
    static PauseLayer* create(bool p0);
    
private:
    [[deprecated("PauseLayer::init not implemented")]]
    /**
     * @note[short] Windows: 0x2b3740
     * @note[short] Android
     */
    bool init(bool p0);
public:

    /**
     * @note[short] MacOS: 0x3b5c20
     * @note[short] Windows: 0x2b41e0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b5af0
     * @note[short] Windows: 0x2b4be0
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b5a50
     * @note[short] Windows: 0x2b4d30
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b5a90
     * @note[short] Windows: 0x2b4b70
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3b5930
     * @note[short] Windows: 0x2b4d80
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3b5b40
     * @note[short] Windows: 0x2b4ed0
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onTime not implemented")]]
    /**
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PauseLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3b5a10
     * @note[short] Windows: 0x2b4c90
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x3b5be0
     * @note[short] Windows: 0x2b4ce0
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] MacOS: 0x3b5c90
     * @note[short] Android
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x3b4fb0
     * @note[short] Android
     */
    void setupProgressBars();
    
private:
    [[deprecated("PauseLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] MacOS: 0x3b5c50
     * @note[short] Windows: 0x2b4ab0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x3b5fa0
     * @note[short] Windows: 0x2b4e70
     * @note[short] Android
     */
    void goEdit();
    
private:
    [[deprecated("PauseLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] MacOS: 0x3b6010
     * @note[short] Windows: 0x2b4fa0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x3b4500
     * @note[short] Windows: 0x2b3740
     * @note[short] Android
     */
    virtual void customSetup();
    
private:
    [[deprecated("PauseLayer::keyUp not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
};
