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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x261c80
     * @note[short] Android
     */
    static RateDemonLayer* create(int p0);

    /**
     * @note[short] MacOS: 0x261df0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("RateDemonLayer::onRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateDemonLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateDemonLayer::selectRating not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x2629a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x262660
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x262750
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x2628c0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
