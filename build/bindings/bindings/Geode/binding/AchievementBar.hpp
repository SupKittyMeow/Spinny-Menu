#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)
    
private:
    [[deprecated("AchievementBar::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AchievementBar* create(char const* p0, char const* p1, char const* p2, bool p3);
public:
    
private:
    [[deprecated("AchievementBar::init not implemented")]]
    /**
     * @note[short] Windows: 0x59430
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, char const* p2, bool p3);
public:
    
private:
    [[deprecated("AchievementBar::show not implemented")]]
    /**
     * @note[short] Android
     */
    void show();
public:

    /**
     * @note[short] MacOS: 0x5de590
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
