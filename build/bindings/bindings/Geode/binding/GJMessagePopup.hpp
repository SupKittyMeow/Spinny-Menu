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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)
    
private:
    [[deprecated("GJMessagePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::onBlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onReply not implemented")]]
    /**
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onRemove not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x283510
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessagePopup::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:

    /**
     * @note[short] MacOS: 0x284240
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2842b0
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);

    /**
     * @note[short] MacOS: 0x284370
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFailed(int p0);

    /**
     * @note[short] MacOS: 0x284410
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x2845d0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x2846a0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x2847a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
