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

class EndTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EndTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("EndTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EndTriggerGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1becc0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1bf950
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1bec70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1bee70
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
