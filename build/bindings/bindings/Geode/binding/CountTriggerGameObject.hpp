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

class CountTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CountTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CountTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("CountTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CountTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("CountTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x1ba430
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1ba850
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1bac80
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
