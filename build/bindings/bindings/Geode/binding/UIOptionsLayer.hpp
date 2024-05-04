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

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)
    
private:
    [[deprecated("UIOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UIOptionsLayer* create(bool p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(bool p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::getNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNode(int p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::onSaveLoad not implemented")]]
    /**
     * @note[short] Android
     */
    void onSaveLoad(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x28f890
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("UIOptionsLayer::onReset not implemented")]]
    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::toggleUIGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUIGroup(int p0);
public:

    /**
     * @note[short] MacOS: 0x290010
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2901e0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x290380
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2904c0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x290500
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x28fa20
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS: 0x28fd30
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);
};
