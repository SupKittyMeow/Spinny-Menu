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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)
    
private:
    [[deprecated("UploadListPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* p0);
public:
    
private:
    [[deprecated("UploadListPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
public:
    
private:
    [[deprecated("UploadListPopup::onReturnToList not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x342eb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x342e40
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x342960
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* p0);

    /**
     * @note[short] MacOS: 0x342b80
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* p0, int p1);
};
