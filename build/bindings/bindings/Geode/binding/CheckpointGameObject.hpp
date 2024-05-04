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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)
    
private:
    [[deprecated("CheckpointGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CheckpointGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1b89c0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
    
private:
    [[deprecated("CheckpointGameObject::resetCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCheckpoint();
public:

    /**
     * @note[short] MacOS: 0x1ba120
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1b8db0
     * @note[short] Android
     */
    void setupCustomSprites(gd::string p0);
    
private:
    [[deprecated("CheckpointGameObject::updateCheckpointSpriteVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointSpriteVisibility();
public:

    /**
     * @note[short] MacOS: 0x1b8960
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1ba260
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x1b97a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x1b89e0
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS: 0x1ba2d0
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS: 0x1b9390
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
};
