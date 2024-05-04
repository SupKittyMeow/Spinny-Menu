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

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LevelAreaInnerLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool p0);
public:

    /**
     * @note[short] MacOS: 0x2579a0
     * @note[short] Windows: 0x22c1e0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("LevelAreaInnerLayer::onNextFloor not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2586b0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x258700
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelAreaInnerLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::tryResumeTowerMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryResumeTowerMusic();
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::showFloor1CompleteDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showFloor1CompleteDialog();
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(bool p0);
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::playStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep1();
public:

    /**
     * @note[short] MacOS: 0x259590
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2593b0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
