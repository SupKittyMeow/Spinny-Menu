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
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x7515d0
     * @note[short] Windows: 0xee230
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool p0);

    /**
     * @note[short] MacOS: 0x751780
     * @note[short] Windows: 0xee2e0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("FRequestProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onSentRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onToggleAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::untoggleAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn untoggleAll();
public:

    /**
     * @note[short] MacOS: 0x753750
     * @note[short] Android
     */
    void setupPageInfo(gd::string p0, char const* p1);
    
private:
    [[deprecated("FRequestProfilePage::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:
    
private:
    [[deprecated("FRequestProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("FRequestProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:

    /**
     * @note[short] MacOS: 0x753390
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x7527d0
     * @note[short] Android
     */
    void loadPage(int p0);
    
private:
    [[deprecated("FRequestProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x752ef0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x752ec0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x752dd0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x752f30
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x752fa0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x753140
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x753510
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x753600
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] MacOS: 0x753710
     * @note[short] Android
     */
    virtual TodoReturn forceReloadRequests(bool p0);
};
