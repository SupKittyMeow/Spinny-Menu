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

class EnterEffectObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnterEffectObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnterEffectObject, EffectGameObject)
    
private:
    [[deprecated("EnterEffectObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EnterEffectObject* create(char const* p0);
public:
    
private:
    [[deprecated("EnterEffectObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x185f00
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("EnterEffectObject::resetEnterAnimValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetEnterAnimValues();
public:

    /**
     * @note[short] MacOS: 0x185bc0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x175e70
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
