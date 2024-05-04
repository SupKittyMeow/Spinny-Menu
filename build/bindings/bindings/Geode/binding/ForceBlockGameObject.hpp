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

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)
    
private:
    [[deprecated("ForceBlockGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x1ccec0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("ForceBlockGameObject::calculateForceToTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateForceToTarget(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x1cc370
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
