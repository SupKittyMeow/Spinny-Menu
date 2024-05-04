#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "GJAccountDelegate.hpp"
#include "GJAccountBackupDelegate.hpp"
#include "GJAccountSyncDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)
    
private:
    [[deprecated("AccountLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AccountLayer* create();
public:
    
private:
    [[deprecated("AccountLayer::onRegister not implemented")]]
    /**
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::onMore not implemented")]]
    /**
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::onSync not implemented")]]
    /**
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::onLogin not implemented")]]
    /**
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::onBackup not implemented")]]
    /**
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLayer::updatePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePage(bool p0);
public:
    
private:
    [[deprecated("AccountLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("AccountLayer::doSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doSync();
public:
    
private:
    [[deprecated("AccountLayer::doBackup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doBackup();
public:
    
private:
    [[deprecated("AccountLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:

    /**
     * @note[short] MacOS: 0xc85a0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0xca520
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0xc9a30
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFinished();

    /**
     * @note[short] MacOS: 0xc9bf0
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] MacOS: 0xc9fe0
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFinished();

    /**
     * @note[short] MacOS: 0xca160
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] MacOS: 0xc9a00
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] MacOS: 0xca400
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
