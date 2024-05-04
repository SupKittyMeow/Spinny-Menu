#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetDelegate";
    
private:
    [[deprecated("HSVWidgetDelegate::hsvPopupClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::_ccHSVValue p1);
public:
    
private:
    [[deprecated("HSVWidgetDelegate::hsvChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* p0);
public:
};
