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

class GameOptionsTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GameOptionsTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsTrigger, EffectGameObject)
    
private:
    [[deprecated("GameOptionsTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GameOptionsTrigger* create(char const* p0);
public:
    
private:
    [[deprecated("GameOptionsTrigger::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x199a50
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x198620
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
