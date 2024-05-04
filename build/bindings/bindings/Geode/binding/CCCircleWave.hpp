#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x1693e0
     * @note[short] Android
     */
    static CCCircleWave* create(float p0, float p1, float p2, bool p3);

    /**
     * @note[short] MacOS: 0x1693f0
     * @note[short] Windows: 0x23220
     * @note[short] Android
     */
    static CCCircleWave* create(float p0, float p1, float p2, bool p3, bool p4);

    /**
     * @note[short] MacOS: 0x1694d0
     * @note[short] Windows: 0x232f0
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, bool p3, bool p4);
    
private:
    [[deprecated("CCCircleWave::followObject not implemented")]]
    /**
     * @note[short] Windows: 0x23540
     * @note[short] Android
     */
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x169760
     * @note[short] Android
     */
    TodoReturn updatePosition(float p0);
    
private:
    [[deprecated("CCCircleWave::baseSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn baseSetup(float p0);
public:

    /**
     * @note[short] MacOS: 0x169730
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x169c00
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS: 0x169ac0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x169830
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
