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

class SelectPremadeLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectPremadeLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectPremadeLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectPremadeLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectPremadeLayer* create();
public:
    
private:
    [[deprecated("SelectPremadeLayer::onSelectPremade not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectPremadeLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2e6ea0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2e73b0
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
