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

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)
    
private:
    [[deprecated("PlayerControlGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PlayerControlGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1ce540
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1cda10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1cda60
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
