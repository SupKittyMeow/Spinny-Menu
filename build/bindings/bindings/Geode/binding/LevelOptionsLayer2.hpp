#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)
    
private:
    [[deprecated("LevelOptionsLayer2::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer2::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
public:

    /**
     * @note[short] MacOS: 0x24feb0
     * @note[short] Android
     */
    virtual void setupOptions();
};
