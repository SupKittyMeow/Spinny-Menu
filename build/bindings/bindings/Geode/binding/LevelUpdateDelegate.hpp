#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelUpdateDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelUpdateDelegate";
    
private:
    [[deprecated("LevelUpdateDelegate::levelUpdateFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);
public:
    
private:
    [[deprecated("LevelUpdateDelegate::levelUpdateFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int p0);
public:
};
