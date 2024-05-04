#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsDelegate";
    
private:
    [[deprecated("LevelSettingsDelegate::levelSettingsUpdated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void levelSettingsUpdated();
public:
};
