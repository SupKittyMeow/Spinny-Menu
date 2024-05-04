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

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer* create();
public:
    
private:
    [[deprecated("SecretLayer::getMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer::getBasicMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer::getThreadMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer::updateSearchLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSearchLabel(char const* p0);
public:
    
private:
    [[deprecated("SecretLayer::updateMessageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMessageLabel(gd::string p0);
public:
    
private:
    [[deprecated("SecretLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:

    /**
     * @note[short] MacOS: 0x5bfb20
     * @note[short] Windows: 0x2fe1d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x5c3930
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5c2ac0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5c2b80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5c2c50
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5c2aa0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
