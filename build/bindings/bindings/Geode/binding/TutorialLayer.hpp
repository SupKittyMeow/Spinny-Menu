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

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)
    
private:
    [[deprecated("TutorialLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TutorialLayer* create();
public:
    
private:
    [[deprecated("TutorialLayer::onNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::removeTutorialTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeTutorialTexture();
public:
    
private:
    [[deprecated("TutorialLayer::loadPage not implemented")]]
    /**
     * @note[short] Android
     */
    void loadPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x4b7b20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x4b8560
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
