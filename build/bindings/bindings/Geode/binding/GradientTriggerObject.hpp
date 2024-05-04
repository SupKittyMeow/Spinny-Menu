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

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)
    
private:
    [[deprecated("GradientTriggerObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GradientTriggerObject* create();
public:

    /**
     * @note[short] MacOS: 0x18b290
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x18a0a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x18a100
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
