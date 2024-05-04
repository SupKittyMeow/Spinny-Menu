#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("CCBlockLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCBlockLayer* create();
public:

    /**
     * @note[short] MacOS: 0x4f0940
     * @note[short] Android
     */
    TodoReturn decrementForcePrio();
    
private:
    [[deprecated("CCBlockLayer::incrementForcePrio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementForcePrio();
public:

    /**
     * @note[short] MacOS: 0x4f05e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x4f0890
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x4f08c0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4f0920
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4f08e0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4f0900
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4f0750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x4f0790
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4f06f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x4f0720
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS: 0x4f07c0
     * @note[short] Android
     */
    virtual void exitLayer();

    /**
     * @note[short] MacOS: 0x4f0800
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS: 0x4f0810
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS: 0x4f0830
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS: 0x4f0850
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0x4f0820
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] MacOS: 0x4f0700
     * @note[short] Android
     */
    virtual TodoReturn disableUI();

    /**
     * @note[short] MacOS: 0x4f0710
     * @note[short] Android
     */
    virtual TodoReturn enableUI();
    void* m_unknown;
};
