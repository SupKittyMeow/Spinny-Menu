#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS: 0x49a640
     * @note[short] Windows: 0x48140
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] MacOS: 0x49a970
     * @note[short] Windows: 0x483e0
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS: 0x49a880
     * @note[short] Windows: 0x48300
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] Out of line
     */
    void setParentLayer(cocos2d::CCLayer* layer);

    /**
     * @note[short] Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] MacOS: 0x49a7b0
     * @note[short] Windows: 0x48240
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x49aa00
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x49ac80
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x49ac90
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x49aca0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x49acb0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x49aa20
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
