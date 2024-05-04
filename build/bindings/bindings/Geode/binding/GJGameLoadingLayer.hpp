#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x151030
     * @note[short] Windows: 0x1c6530
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS: 0x151390
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS: 0xfa680
     * @note[short] Android
     */
    void gameLayerDidUnload();

    /**
     * @note[short] MacOS: 0x150f10
     * @note[short] Windows: 0x1c6430
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS: 0x151490
     * @note[short] Android
     */
    void loadLevel();

    /**
     * @note[short] MacOS: 0x151500
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS: 0x1514f0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();
    GJGameLevel* m_level;
    bool m_editor;
};
