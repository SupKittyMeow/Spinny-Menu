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

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)
    
private:
    [[deprecated("UISettingsGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UISettingsGameObject* create();
public:

    /**
     * @note[short] MacOS: 0x1c0840
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1bfbb0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1bfc00
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
