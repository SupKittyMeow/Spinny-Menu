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

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("SpawnTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::changeRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeRemap(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::removeRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeRemap(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x1b6f40
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1b6690
     * @note[short] Android
     */
    void updateRemapKeys(gd::vector<int> const& p0);

    /**
     * @note[short] MacOS: 0x1b7420
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("SpawnTriggerGameObject::addRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRemap(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x1b6640
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1b7830
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
