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

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x280050
     * @note[short] Android
     */
    static UploadActionPopup* create(UploadPopupDelegate* p0, gd::string p1);
    
private:
    [[deprecated("UploadActionPopup::init not implemented")]]
    /**
     * @note[short] Windows: 0x206290
     * @note[short] Android
     */
    bool init(UploadPopupDelegate* p0, gd::string p1);
public:
    
private:
    [[deprecated("UploadActionPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x280910
     * @note[short] Android
     */
    TodoReturn closePopup();

    /**
     * @note[short] MacOS: 0x2807d0
     * @note[short] Android
     */
    void showFailMessage(gd::string p0);

    /**
     * @note[short] MacOS: 0x280680
     * @note[short] Android
     */
    void showSuccessMessage(gd::string p0);

    /**
     * @note[short] MacOS: 0x280940
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
