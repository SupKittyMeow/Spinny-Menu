#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor, public cocos2d::CCKeyboardDelegate {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("UILayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS: 0x4a2e40
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x4a3760
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);
    
private:
    [[deprecated("UILayer::onCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4a3630
     * @note[short] Windows: 0x3b8d90
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4a4600
     * @note[short] Android
     */
    void enableMenu();

    /**
     * @note[short] MacOS: 0x4a3ea0
     * @note[short] Android
     */
    void disableMenu();

    /**
     * @note[short] MacOS: 0x4a3950
     * @note[short] Android
     */
    void refreshDpad();
    
private:
    [[deprecated("UILayer::editorPlaytest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorPlaytest(bool p0);
public:

    /**
     * @note[short] MacOS: 0x4a4090
     * @note[short] Windows: 0x3b8900
     * @note[short] Android
     */
    void handleKeypress(cocos2d::enumKeyCodes p0, bool p1);
    
private:
    [[deprecated("UILayer::updateDualMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDualMode(bool p0);
public:

    /**
     * @note[short] MacOS: 0x4a4710
     * @note[short] Windows: 0x3b8f10
     * @note[short] Android
     */
    void resetAllButtons();
    
private:
    [[deprecated("UILayer::enableEditorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableEditorMode();
public:
    
private:
    [[deprecated("UILayer::resetUINodeState not implemented")]]
    /**
     * @note[short] Windows: 0x3b8810
     * @note[short] Android
     */
    void resetUINodeState();
public:
    
private:
    [[deprecated("UILayer::processUINodeTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
public:
    
private:
    [[deprecated("UILayer::isJumpButtonPressed not implemented")]]
    /**
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool p0);
public:
    
private:
    [[deprecated("UILayer::processUINodesTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);
public:

    /**
     * @note[short] MacOS: 0x4a4620
     * @note[short] Windows: 0x3b8ec0
     * @note[short] Android
     */
    void toggleMenuVisibility(bool p0);
    
private:
    [[deprecated("UILayer::togglePlatformerMode not implemented")]]
    /**
     * @note[short] Android
     */
    void togglePlatformerMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::toggleCheckpointsMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCheckpointsMenu(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateUINodeVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUINodeVisibility(bool p0);
public:

    /**
     * @note[short] MacOS: 0x4a4800
     * @note[short] Windows: 0x3ba4c0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x4a4850
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4a4c90
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4a5140
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4a57c0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4a5800
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x4a4580
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4a44e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x4a4530
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
