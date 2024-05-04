#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelUploadDelegate";
    
private:
    [[deprecated("LevelUploadDelegate::levelUploadFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* p0);
public:
    
private:
    [[deprecated("LevelUploadDelegate::levelUploadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* p0);
public:
};
