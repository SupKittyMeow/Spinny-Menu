#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x291d10
     * @note[short] Windows: 0x211eb0
     * @note[short] Android
     */
    static GJDifficultySprite* create(int p0, GJDifficultyName p1);
    
private:
    [[deprecated("GJDifficultySprite::init not implemented")]]
    /**
     * @note[short] Windows: 0x211f80
     * @note[short] Android
     */
    bool init(int p0, GJDifficultyName p1);
public:

    /**
     * @note[short] MacOS: 0x291e60
     * @note[short] Windows: 0x212010
     * @note[short] Android
     */
    gd::string getDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS: 0x292100
     * @note[short] Windows: 0x2122c0
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState p0);

    /**
     * @note[short] MacOS: 0x291f80
     * @note[short] Windows: 0x212100
     * @note[short] Android
     */
    void updateDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS: 0x2920b0
     * @note[short] Windows: 0x212240
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* p0);
};
