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

class HSVWidgetPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVWidgetPopup, FLAlertLayer)
    
private:
    [[deprecated("HSVWidgetPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static HSVWidgetPopup* create(cocos2d::_ccHSVValue p0, HSVWidgetDelegate* p1, gd::string p2);
public:
    
private:
    [[deprecated("HSVWidgetPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::_ccHSVValue p0, HSVWidgetDelegate* p1, gd::string p2);
public:
    
private:
    [[deprecated("HSVWidgetPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x40ec10
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
