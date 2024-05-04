#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0xf450
     * @note[short] Android
     */
    static GJRotationControl* create();
    
private:
    [[deprecated("GJRotationControl::setAngle not implemented")]]
    /**
     * @note[short] Android
     */
    void setAngle(float p0);
public:
    
private:
    [[deprecated("GJRotationControl::finishTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishTouch();
public:
    
private:
    [[deprecated("GJRotationControl::updateSliderPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliderPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x54a10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x55010
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x54c80
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x54da0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x54f00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x54fd0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
