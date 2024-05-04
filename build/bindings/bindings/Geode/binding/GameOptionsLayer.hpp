#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS: 0x28c970
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);
    
private:
    [[deprecated("GameOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameOptionsLayer::onUIOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x28d090
     * @note[short] Windows: 0x20eeb0
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GameOptionsLayer::showPracticeMusicSyncUnlockInfo not implemented")]]
    /**
     * @note[short] Windows: 0x20eba0
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();
public:

    /**
     * @note[short] MacOS: 0x28cc30
     * @note[short] Windows: 0x20e710
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS: 0x28d610
     * @note[short] Android
     */
    virtual TodoReturn didToggle(int p0);
};
