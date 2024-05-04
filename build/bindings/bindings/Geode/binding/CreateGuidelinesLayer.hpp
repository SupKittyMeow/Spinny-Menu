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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)
    
private:
    [[deprecated("CreateGuidelinesLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::getMergedRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMergedRecordString(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4e5010
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreateGuidelinesLayer::onStop not implemented")]]
    /**
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4e5190
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4e46c0
     * @note[short] Android
     */
    void onRecord(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreateGuidelinesLayer::toggleItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleItems(bool p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::doClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doClearGuidelines();
public:

    /**
     * @note[short] MacOS: 0x4e4ff0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x4e5260
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4e5350
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4e5370
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4e5410
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4e5450
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x4e51c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4e5490
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x4e50c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x4e54e0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x4e47d0
     * @note[short] Android
     */
    virtual TodoReturn playMusic();

    /**
     * @note[short] MacOS: 0x4e5210
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();

    /**
     * @note[short] MacOS: 0x4e4860
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
};
