#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)
    
private:
    [[deprecated("HardStreak::create not implemented")]]
    /**
     * @note[short] Android
     */
    static HardStreak* create();
public:
    
private:
    [[deprecated("HardStreak::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("HardStreak::stopStroke not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopStroke();
public:
    
private:
    [[deprecated("HardStreak::resumeStroke not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeStroke();
public:

    /**
     * @note[short] MacOS: 0x96e30
     * @note[short] Windows: 0x221c00
     * @note[short] Android
     */
    void updateStroke(float p0);
    
private:
    [[deprecated("HardStreak::clearAboveXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearAboveXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::normalizeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn normalizeAngle(double p0);
public:
    
private:
    [[deprecated("HardStreak::clearBehindXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearBehindXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::createDuplicate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createDuplicate();
public:
    
private:
    [[deprecated("HardStreak::quadCornerOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("HardStreak::scheduleAutoUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scheduleAutoUpdate();
public:
    
private:
    [[deprecated("HardStreak::reset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reset();
public:
    
private:
    [[deprecated("HardStreak::addPoint not implemented")]]
    /**
     * @note[short] Windows: 0x2224f0
     * @note[short] Android
     */
    TodoReturn addPoint(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x96c80
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(32);
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
};
