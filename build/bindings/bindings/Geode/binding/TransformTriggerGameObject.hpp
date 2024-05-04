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

class TransformTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TransformTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TransformTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("TransformTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TransformTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("TransformTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x1bcdb0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1bcde0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1bd1d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
