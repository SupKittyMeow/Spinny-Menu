#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJMPDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TextInputDelegate.hpp"

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MPLobbyLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MPLobbyLayer* create(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::onUpdateLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onUpdateLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn3 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onComment not implemented")]]
    /**
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::postComment not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postComment();
public:
    
private:
    [[deprecated("MPLobbyLayer::updateLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLobby(float p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::tryExitLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryExitLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(int p0);
public:

    /**
     * @note[short] MacOS: 0x46fce0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x470490
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x46fe60
     * @note[short] Android
     */
    virtual TodoReturn joinLobbyFinished(int p0);

    /**
     * @note[short] MacOS: 0x4702c0
     * @note[short] Android
     */
    virtual TodoReturn joinLobbyFailed(int p0, GJMPErrorCode p1);

    /**
     * @note[short] MacOS: 0x470190
     * @note[short] Android
     */
    virtual TodoReturn updateComments();

    /**
     * @note[short] MacOS: 0x4702a0
     * @note[short] Android
     */
    virtual TodoReturn didUploadMPComment(int p0);

    /**
     * @note[short] MacOS: 0x4703c0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4703e0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x470400
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4704d0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x470420
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x4704f0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x470700
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x4708a0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
