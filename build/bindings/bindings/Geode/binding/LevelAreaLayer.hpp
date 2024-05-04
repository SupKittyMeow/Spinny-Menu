#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LevelAreaLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelAreaLayer* create();
public:
    
private:
    [[deprecated("LevelAreaLayer::onClickDoor not implemented")]]
    /**
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelAreaLayer::onEnterTower not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onEnterTower();
public:
    
private:
    [[deprecated("LevelAreaLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelAreaLayer::showDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog();
public:
    
private:
    [[deprecated("LevelAreaLayer::fadeInsideTower not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInsideTower();
public:
    
private:
    [[deprecated("LevelAreaLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("LevelAreaLayer::addTorch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTorch(cocos2d::CCNode* p0, cocos2d::CCPoint p1, int p2, float p3, int p4, bool p5);
public:
    
private:
    [[deprecated("LevelAreaLayer::addGodRay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGodRay(float p0, float p1, float p2, float p3, float p4, cocos2d::CCPoint p5);
public:

    /**
     * @note[short] MacOS: 0x255640
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x257750
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x257500
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
