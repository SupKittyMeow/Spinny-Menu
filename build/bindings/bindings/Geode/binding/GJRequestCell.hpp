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

class GJRequestCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)
    
private:
    [[deprecated("GJRequestCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onDeleteRequest not implemented")]]
    /**
     * @note[short] Windows: 0x89710
     * @note[short] Android
     */
    void onDeleteRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onViewFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::markAsRead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJRequestCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:

    /**
     * @note[short] MacOS: 0x22aa60
     * @note[short] Windows: 0x88f20
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJRequestCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x235860
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x235b70
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x235c40
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x235e10
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x236010
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x236120
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
