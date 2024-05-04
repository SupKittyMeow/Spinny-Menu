#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("RandTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RandTriggerGameObject* create();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getTotalChance not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTotalChance();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getRandomGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomGroupID();
public:

    /**
     * @note[short] MacOS: 0x1aa2b0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1aa600
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1aa020
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1aab30
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
