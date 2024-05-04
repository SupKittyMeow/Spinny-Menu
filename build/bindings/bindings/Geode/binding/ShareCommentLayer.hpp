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
#include "TextInputDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class ShareCommentLayer : public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x5a46f0
     * @note[short] Android
     */
    static ShareCommentLayer* create(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);

    /**
     * @note[short] MacOS: 0x5a4950
     * @note[short] Android
     */
    bool init(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);

    /**
     * @note[short] MacOS: 0x5a5c10
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5a5cb0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5a5d00
     * @note[short] Windows: 0x380130
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5a5a80
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ShareCommentLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDescText(gd::string p0);
public:
    
private:
    [[deprecated("ShareCommentLayer::updatePercentLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePercentLabel();
public:

    /**
     * @note[short] MacOS: 0x5a63d0
     * @note[short] Android
     */
    TodoReturn updateCharCountLabel();

    /**
     * @note[short] MacOS: 0x5a60d0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x5a6020
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5a6270
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5a6110
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5a6290
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5a64e0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x5a65e0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x5a6700
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
