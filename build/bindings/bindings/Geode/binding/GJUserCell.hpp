#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)
    
private:
    [[deprecated("GJUserCell::onSendMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x234640
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJUserCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onRemoveFriend not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFriend(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onViewFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onCancelFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x22a2e0
     * @note[short] Windows: 0x87f80
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJUserCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x2345f0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJUserCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS: 0x234d70
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x235020
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x235210
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x235380
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
