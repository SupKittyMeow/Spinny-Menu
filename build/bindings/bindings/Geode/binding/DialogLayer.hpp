#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS: 0x3a5600
     * @note[short] Windows: 0x99d60
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* p0, int p1);

    /**
     * @note[short] MacOS: 0x3a5770
     * @note[short] Windows: 0x99e10
     * @note[short] Android
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onClose();
public:
    
private:
    [[deprecated("DialogLayer::addToMainScene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToMainScene();
public:
    
private:
    [[deprecated("DialogLayer::animateInDialog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateInDialog();
public:
    
private:
    [[deprecated("DialogLayer::handleDialogTap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleDialogTap();
public:

    /**
     * @note[short] MacOS: 0x3a5610
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS: 0x3a5750
     * @note[short] Android
     */
    TodoReturn createWithObjects(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] MacOS: 0x3a5c50
     * @note[short] Android
     */
    TodoReturn displayNextObject();

    /**
     * @note[short] MacOS: 0x3a6830
     * @note[short] Android
     */
    TodoReturn animateInRandomSide();

    /**
     * @note[short] MacOS: 0x3a5d00
     * @note[short] Android
     */
    TodoReturn displayDialogObject(DialogObject* p0);

    /**
     * @note[short] MacOS: 0x3a6100
     * @note[short] Android
     */
    TodoReturn updateChatPlacement(DialogChatPlacement p0);
    
private:
    [[deprecated("DialogLayer::updateNavButtonFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateNavButtonFrame();
public:
    
private:
    [[deprecated("DialogLayer::finishCurrentAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishCurrentAnimation();
public:

    /**
     * @note[short] MacOS: 0x3a6880
     * @note[short] Windows: 0x9a9d0
     * @note[short] Android
     */
    TodoReturn animateIn(DialogAnimationType p0);

    /**
     * @note[short] MacOS: 0x3a6730
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS: 0x3a65e0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3a6680
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3a6640
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3a66a0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3a66f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x3a64b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x3a6ad0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x3a6740
     * @note[short] Android
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
};
