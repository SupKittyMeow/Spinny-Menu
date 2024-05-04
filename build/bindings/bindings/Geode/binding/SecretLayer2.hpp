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
#include "DialogDelegate.hpp"

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x478d00
     * @note[short] Android
     */
    static SecretLayer2* create();
    
private:
    [[deprecated("SecretLayer2::getMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getBasicMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getErrorMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getErrorMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getThreadMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer2::onSecretLevel not implemented")]]
    /**
     * @note[short] Windows: 0x2ff730
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onDoor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x47a0d0
     * @note[short] Windows: 0x2ffcc0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretLayer2::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer2::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer2::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer2::showSecretLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void showSecretLevel();
public:
    
private:
    [[deprecated("SecretLayer2::updateSearchLabel not implemented")]]
    /**
     * @note[short] Windows: 0x301260
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
public:
    
private:
    [[deprecated("SecretLayer2::showCompletedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void showCompletedLevel();
public:
    
private:
    [[deprecated("SecretLayer2::updateMessageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMessageLabel(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x478cc0
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] MacOS: 0x478e30
     * @note[short] Windows: 0x2fe1d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x47f0b0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x47efc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x47e0d0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x47e190
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x47e260
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x47e0b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x47cce0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
