#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)
    
private:
    [[deprecated("RotateGameplayGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1d2480
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("RotateGameplayGameObject::updateGameplayRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayRotation();
public:

    /**
     * @note[short] MacOS: 0x1d1270
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1d2800
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS: 0x1d12c0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
