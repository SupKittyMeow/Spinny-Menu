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

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)
    
private:
    [[deprecated("GJMessageCell::onViewMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onDeleteMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::markAsRead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJMessageCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:
    
private:
    [[deprecated("GJMessageCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x22b1d0
     * @note[short] Windows: 0x89be0
     * @note[short] Android
     */
    void loadFromMessage(GJUserMessage* p0);

    /**
     * @note[short] MacOS: 0x236600
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x236910
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x2369e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x236b70
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x236d40
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x236eb0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
