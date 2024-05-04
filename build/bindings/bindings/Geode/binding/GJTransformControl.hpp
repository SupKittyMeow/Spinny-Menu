#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJTransformControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJTransformControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJTransformControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x57e40
     * @note[short] Android
     */
    static GJTransformControl* create();
    
private:
    [[deprecated("GJTransformControl::onToggleLockScale not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJTransformControl::loadValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);
public:
    
private:
    [[deprecated("GJTransformControl::finishTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishTouch();
public:
    
private:
    [[deprecated("GJTransformControl::saveToState not implemented")]]
    /**
     * @note[short] Android
     */
    void saveToState(GJTransformState& p0);
public:
    
private:
    [[deprecated("GJTransformControl::spriteByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spriteByTag(int p0);
public:
    
private:
    [[deprecated("GJTransformControl::scaleButtons not implemented")]]
    /**
     * @note[short] Windows: 0xdeff0
     * @note[short] Android
     */
    TodoReturn scaleButtons(float p0);
public:
    
private:
    [[deprecated("GJTransformControl::applyRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyRotation(float p0);
public:
    
private:
    [[deprecated("GJTransformControl::loadFromState not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromState(GJTransformState& p0);
public:

    /**
     * @note[short] MacOS: 0x4df90
     * @note[short] Android
     */
    void updateButtons(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x4d980
     * @note[short] Android
     */
    TodoReturn refreshControl();
    
private:
    [[deprecated("GJTransformControl::logCurrentZeroPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logCurrentZeroPos();
public:
    
private:
    [[deprecated("GJTransformControl::updateAnchorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnchorSprite(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJTransformControl::updateMinMaxPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMinMaxPositions();
public:
    
private:
    [[deprecated("GJTransformControl::calculateRotationOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateRotationOffset();
public:

    /**
     * @note[short] MacOS: 0x561e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x56650
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x56b20
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x570d0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x572e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
