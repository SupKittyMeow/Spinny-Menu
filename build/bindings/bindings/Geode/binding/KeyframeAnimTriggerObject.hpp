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

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)
    
private:
    [[deprecated("KeyframeAnimTriggerObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();
public:

    /**
     * @note[short] MacOS: 0x1a4a20
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1a3e10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1a3e60
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
