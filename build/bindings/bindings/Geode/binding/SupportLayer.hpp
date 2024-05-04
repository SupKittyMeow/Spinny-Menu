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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)
    
private:
    [[deprecated("SupportLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SupportLayer* create();
public:
    
private:
    [[deprecated("SupportLayer::onGetReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onLowDetail not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onRequestAccess not implemented")]]
    /**
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onTOS not implemented")]]
    /**
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onEmail not implemented")]]
    /**
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onLinks not implemented")]]
    /**
     * @note[short] Windows: 0x3b6320
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onRobTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onCocos2d not implemented")]]
    /**
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onPrivacy not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::sendSupportMail not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sendSupportMail();
public:
    
private:
    [[deprecated("SupportLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);
public:
    
private:
    [[deprecated("SupportLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:

    /**
     * @note[short] MacOS: 0x376a50
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x378320
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x378460
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x3782d0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x378710
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
