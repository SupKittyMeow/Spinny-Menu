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

class NewgroundsInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)
    
private:
    [[deprecated("NewgroundsInfoLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static NewgroundsInfoLayer* create();
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onSupporter not implemented")]]
    /**
     * @note[short] Android
     */
    void onSupporter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onNewgrounds not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onArtists not implemented")]]
    /**
     * @note[short] Android
     */
    void onArtists(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NewgroundsInfoLayer::onChanges not implemented")]]
    /**
     * @note[short] Android
     */
    void onChanges(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x1f60d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1f6bc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x1f6b60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
