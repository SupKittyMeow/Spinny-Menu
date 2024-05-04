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

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)
    
private:
    [[deprecated("KeyframeGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static KeyframeGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1ad8d0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1ad510
     * @note[short] Android
     */
    TodoReturn updateShadowObjects(GJBaseGameLayer* p0, EditorUI* p1);

    /**
     * @note[short] MacOS: 0x1ad4a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1ad770
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1ade40
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
