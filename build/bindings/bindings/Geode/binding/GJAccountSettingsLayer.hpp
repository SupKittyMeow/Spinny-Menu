#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class GJAccountSettingsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x27cea0
     * @note[short] Windows: 0x2039d0
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int p0);

    /**
     * @note[short] MacOS: 0x27d020
     * @note[short] Windows: 0x203a70
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::onCommentSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onMessageSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x27eac0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJAccountSettingsLayer::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::updateScoreValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateScoreValues();
public:

    /**
     * @note[short] MacOS: 0x27e750
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);

    /**
     * @note[short] MacOS: 0x27f320
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x27ee30
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x27eef0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
};
