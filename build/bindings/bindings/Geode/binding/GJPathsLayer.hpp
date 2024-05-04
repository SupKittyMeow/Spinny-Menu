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
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x2dad20
     * @note[short] Android
     */
    static GJPathsLayer* create();

    /**
     * @note[short] MacOS: 0x2db510
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJPathsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2dab80
     * @note[short] Android
     */
    static gd::string nameForPath(int p0);
    
private:
    [[deprecated("GJPathsLayer::darkenButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenButtons(bool p0);
public:

    /**
     * @note[short] MacOS: 0x2dae70
     * @note[short] Windows: 0x1f82a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2db590
     * @note[short] Windows: 0x1f8756
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x2db9b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x2db8e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2db9f0
     * @note[short] Android
     */
    virtual void show();
};
