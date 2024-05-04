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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)
    
private:
    [[deprecated("AccountRegisterLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AccountRegisterLayer* create();
public:
    
private:
    [[deprecated("AccountRegisterLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validEmail not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validEmail(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabels();
public:
    
private:
    [[deprecated("AccountRegisterLayer::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::disableNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountRegisterLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::validPassword not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validPassword(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validUser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validUser(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x471180
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x473c90
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x473ac0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x473610
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x4746a0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x473cd0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4746c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4746e0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x4747a0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x474850
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x472e80
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFinished();

    /**
     * @note[short] MacOS: 0x473010
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFailed(AccountError p0);
};
