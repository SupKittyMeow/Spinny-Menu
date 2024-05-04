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

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x75d140
     * @note[short] Android
     */
    static VideoOptionsLayer* create();
    
private:
    [[deprecated("VideoOptionsLayer::onAdvanced not implemented")]]
    /**
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onFullscreen not implemented")]]
    /**
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionPrev not implemented")]]
    /**
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityPrev not implemented")]]
    /**
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x761e10
     * @note[short] Windows: 0x2aff80
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);
    
private:
    [[deprecated("VideoOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::reloadMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadMenu();
public:
    
private:
    [[deprecated("VideoOptionsLayer::toggleResolution not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleResolution();
public:
    
private:
    [[deprecated("VideoOptionsLayer::updateResolution not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateResolution(int p0);
public:
    
private:
    [[deprecated("VideoOptionsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("VideoOptionsLayer::updateTextureQuality not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextureQuality(int p0);
public:

    /**
     * @note[short] MacOS: 0x760bd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x7625b0
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
