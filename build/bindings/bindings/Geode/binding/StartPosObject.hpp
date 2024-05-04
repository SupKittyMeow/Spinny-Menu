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

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)
    
private:
    [[deprecated("StartPosObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static StartPosObject* create();
public:
    
private:
    [[deprecated("StartPosObject::setSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* p0);
public:

    /**
     * @note[short] MacOS: 0x1a59d0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("StartPosObject::loadSettingsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadSettingsFromString(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x1a5880
     * @note[short] Windows: 0x3a0d10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1a59e0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    LevelSettingsObject* m_startSettings;
};
