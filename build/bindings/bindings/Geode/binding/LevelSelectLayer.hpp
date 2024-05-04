#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x410b80
     * @note[short] Android
     */
    static LevelSelectLayer* create(int p0);

    /**
     * @note[short] MacOS: 0x410c70
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS: 0x4109e0
     * @note[short] Android
     */
     ~LevelSelectLayer();

    /**
     * @note[short] MacOS: 0x4133f0
     * @note[short] Android
     */
    TodoReturn getColorValue(int p0, int p1, float p2);

    /**
     * @note[short] MacOS: 0x411980
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x411a30
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x411a80
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x411a00
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSelectLayer::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4119d0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSelectLayer::colorForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x410a60
     * @note[short] Android
     */
    TodoReturn scene(int p0);
    
private:
    [[deprecated("LevelSelectLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] MacOS: 0x413710
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4137b0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x411ac0
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] MacOS: 0x413280
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};
