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
#include "UploadMessageDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJWriteMessagePopup : public FLAlertLayer, public TextInputDelegate, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x283ff0
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int p0, int p1);

    /**
     * @note[short] MacOS: 0x284a60
     * @note[short] Android
     */
    bool init(int p0, int p1);
    
private:
    [[deprecated("GJWriteMessagePopup::onClearBody not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onSend not implemented")]]
    /**
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateBody not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBody(gd::string p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateText(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateSubject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSubject(gd::string p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::closeMessagePopup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeMessagePopup(bool p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateCharCountLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCharCountLabel(int p0);
public:

    /**
     * @note[short] MacOS: 0x286000
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x285fd0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x286080
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x286040
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x2860a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x286690
     * @note[short] Android
     */
    virtual void uploadMessageFinished(int p0);

    /**
     * @note[short] MacOS: 0x2867a0
     * @note[short] Android
     */
    virtual void uploadMessageFailed(int p0);

    /**
     * @note[short] MacOS: 0x2868c0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x286a10
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x286af0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x286bb0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
};
