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

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x280e10
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* p0);

    /**
     * @note[short] MacOS: 0x280f80
     * @note[short] Android
     */
    bool init(GJFriendRequest* p0);

    /**
     * @note[short] MacOS: 0x282090
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x281550
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x281ef0
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x281fc0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2815c0
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* p0);
    
private:
    [[deprecated("FriendRequestPopup::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:

    /**
     * @note[short] MacOS: 0x282380
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x282470
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x282630
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x282700
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x282870
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
