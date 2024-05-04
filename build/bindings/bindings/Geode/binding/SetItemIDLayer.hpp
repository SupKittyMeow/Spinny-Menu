#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SetItemIDLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x967f0
     * @note[short] Android
     */
    void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x96a00
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetItemIDLayer::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();
public:

    /**
     * @note[short] MacOS: 0x96910
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
