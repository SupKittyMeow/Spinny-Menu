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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)
    
private:
    [[deprecated("RingObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RingObject* create(char const* p0);
public:
    
private:
    [[deprecated("RingObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("RingObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:

    /**
     * @note[short] MacOS: 0x19d110
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x19d080
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x19d0e0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x19d060
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x19d260
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x19d0b0
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS: 0x19cf00
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS: 0x19d0f0
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS: 0x19cf10
     * @note[short] Android
     */
    virtual TodoReturn powerOnObject(int p0);
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
