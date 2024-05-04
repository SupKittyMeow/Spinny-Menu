#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MenuGameLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x274450
     * @note[short] Android
     */
    static MenuGameLayer* create();
public:
    
private:
    [[deprecated("MenuGameLayer::getBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x4d52a0
     * @note[short] Android
     */
    void resetPlayer();
    
private:
    [[deprecated("MenuGameLayer::updateColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColor(float p0);
public:
    
private:
    [[deprecated("MenuGameLayer::updateColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColors();
public:

    /**
     * @note[short] MacOS: 0x4d5e50
     * @note[short] Android
     */
    void destroyPlayer();
    
private:
    [[deprecated("MenuGameLayer::tryJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryJump(float p0);
public:

    /**
     * @note[short] MacOS: 0x4d5ae0
     * @note[short] Windows: 0x274f10
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x4d4940
     * @note[short] Windows: 0x2744f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x4d6050
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4d6170
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4d6190
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4d61b0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4d61f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
};
