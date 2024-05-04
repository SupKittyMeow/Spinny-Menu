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

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x2915e0
     * @note[short] Windows: 0x211b30
     * @note[short] Android
     */
    static GJPromoPopup* create(gd::string p0);

    /**
     * @note[short] MacOS: 0x291760
     * @note[short] Windows: 0x211bf0
     * @note[short] Android
     */
    bool init(gd::string p0);
    
private:
    [[deprecated("GJPromoPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x291a40
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x291b50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x291a80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x291b90
     * @note[short] Android
     */
    virtual void show();
};
