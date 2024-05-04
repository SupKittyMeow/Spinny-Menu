#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GauntletLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType p0);
public:

    /**
     * @note[short] MacOS: 0x3708e0
     * @note[short] Windows: 0x183860
     * @note[short] Android
     */
    bool init(GauntletType p0);
    
private:
    [[deprecated("GauntletLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x3724b0
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x370fb0
     * @note[short] Android
     */
    TodoReturn setupGauntlet(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GauntletLayer::unlockActiveItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockActiveItem();
public:

    /**
     * @note[short] MacOS: 0x3706f0
     * @note[short] Android
     */
    TodoReturn scene(GauntletType p0);

    /**
     * @note[short] MacOS: 0x372af0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x372050
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS: 0x372210
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
