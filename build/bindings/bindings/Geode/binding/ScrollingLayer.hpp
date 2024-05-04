#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("ScrollingLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("ScrollingLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("ScrollingLayer::getViewRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getViewRect();
public:
    
private:
    [[deprecated("ScrollingLayer::setStartOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x6e4030
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x6e4120
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS: 0x6e4270
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x6e4410
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x6e4530
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x6e4570
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
