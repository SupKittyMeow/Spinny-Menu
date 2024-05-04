#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)
    
private:
    [[deprecated("FindBPMLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FindBPMLayer* create(int p0);
public:
    
private:
    [[deprecated("FindBPMLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS: 0x4e5a50
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4e5a60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4e57c0
     * @note[short] Android
     */
    void onRecord(cocos2d::CCObject* sender);
    
private:
    [[deprecated("FindBPMLayer::calculateBPM not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateBPM();
public:

    /**
     * @note[short] MacOS: 0x4e58d0
     * @note[short] Android
     */
    virtual TodoReturn playMusic();

    /**
     * @note[short] MacOS: 0x4e5960
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();

    /**
     * @note[short] MacOS: 0x4e5800
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
};
