#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("SlideInLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SlideInLayer* create();
public:

    /**
     * @note[short] MacOS: 0x26c340
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x26ca70
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x26caa0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x26cb00
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x26cac0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x26cae0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x26c770
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x26c7b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x26c6f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x26c740
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS: 0x26c7f0
     * @note[short] Android
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x26c840
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS: 0x26c930
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS: 0x26ca10
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS: 0x26ca30
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0x26ca00
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] MacOS: 0x26c700
     * @note[short] Android
     */
    virtual TodoReturn disableUI();

    /**
     * @note[short] MacOS: 0x26c720
     * @note[short] Android
     */
    virtual TodoReturn enableUI();
};
