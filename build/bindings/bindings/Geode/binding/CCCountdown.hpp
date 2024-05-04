#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCountdown : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCCountdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCountdown, cocos2d::CCSprite)
    
private:
    [[deprecated("CCCountdown::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCCountdown* create();
public:
    
private:
    [[deprecated("CCCountdown::lapFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lapFinished();
public:
    
private:
    [[deprecated("CCCountdown::startTimerWithSeconds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startTimerWithSeconds(float p0, cocos2d::SEL_CallFunc p1, cocos2d::CCNode* p2);
public:

    /**
     * @note[short] MacOS: 0x782f70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x783340
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
