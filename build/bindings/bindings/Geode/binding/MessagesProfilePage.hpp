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
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x20cdd0
     * @note[short] Windows: 0x2783b0
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool p0);

    /**
     * @note[short] MacOS: 0x20cf80
     * @note[short] Windows: 0x278460
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS: 0x20de00
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20dde0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20daa0
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20db30
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20dd20
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20d970
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x20de20
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MessagesProfilePage::untoggleAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn untoggleAll();
public:

    /**
     * @note[short] MacOS: 0x20ee60
     * @note[short] Android
     */
    void setupPageInfo(gd::string p0, char const* p1);
    
private:
    [[deprecated("MessagesProfilePage::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:
    
private:
    [[deprecated("MessagesProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("MessagesProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:

    /**
     * @note[short] MacOS: 0x20ea70
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x20de90
     * @note[short] Android
     */
    void loadPage(int p0);
    
private:
    [[deprecated("MessagesProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x20e900
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x20e8d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x20e4b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x20e520
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x20e590
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x20e730
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x20ebe0
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x20ed10
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] MacOS: 0x20ee20
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool p0);
};
