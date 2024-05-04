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
#include "LevelUploadDelegate.hpp"

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x25f2c0
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x25f5e0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("UploadPopup::onReturnToLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x260020
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x25ffb0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x25fb50
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x25fda0
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* p0);
};
