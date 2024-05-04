#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x1d96f0
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x1d9820
     * @note[short] Windows: 0x9bdf0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x1dc2c0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onMoveToTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onMoveToTop();
public:

    /**
     * @note[short] MacOS: 0x1dc080
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1dc500
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x1dc120
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1dbc30
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1dc170
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1dadc0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1dbe00
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x1daf10
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onTest not implemented")]]
    /**
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onClone not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onClone();
public:

    /**
     * @note[short] MacOS: 0x1db050
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onDelete();
public:

    /**
     * @note[short] MacOS: 0x1dbed0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x1dbd10
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditLevelLayer::setupLevelInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupLevelInfo();
public:
    
private:
    [[deprecated("EditLevelLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDescText(char const* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::closeTextInputs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeTextInputs();
public:
    
private:
    [[deprecated("EditLevelLayer::verifyLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyLevelName();
public:

    /**
     * @note[short] MacOS: 0x1dbfa0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x1d9590
     * @note[short] Android
     */
    TodoReturn scene(GJGameLevel* p0);
    
private:
    [[deprecated("EditLevelLayer::playStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("EditLevelLayer::playStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep3();
public:

    /**
     * @note[short] MacOS: 0x1dd510
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x1dd540
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x1dd410
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS: 0x1dd060
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x1dc940
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1dc650
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1dca20
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1dd5e0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x1dd770
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x1dd590
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    TextArea* m_descriptionInput;
    cocos2d::CCArray* m_someArray;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_unk;
    bool m_lowDetailModeTriggered;
    GJLevelType m_levelType;
};
