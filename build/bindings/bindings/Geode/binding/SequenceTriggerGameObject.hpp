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

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("SequenceTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::deleteTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteTarget(int p0);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::reorderTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderTarget(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x1ab7b0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x1abe10
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("SequenceTriggerGameObject::updateSequenceTotalCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSequenceTotalCount();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCount(int p0, int p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTarget(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x1ab4a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1ab4f0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x1ac290
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
