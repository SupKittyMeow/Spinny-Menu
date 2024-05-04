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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x61b4b0
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);

    /**
     * @note[short] MacOS: 0x61b640
     * @note[short] Windows: 0xefda0
     * @note[short] Android
     */
    bool init(UserListType p0);
    
private:
    [[deprecated("FriendsProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onBlocked not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x61bef0
     * @note[short] Android
     */
    TodoReturn setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS: 0x61c510
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x61c4e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x61c160
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS: 0x61c2a0
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS: 0x61c3b0
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS: 0x61c3f0
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType p0);
};
