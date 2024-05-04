#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Out of line
     */
     ~FLAlertLayer();

    /**
     * @note[short] Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] Out of line
     */
    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);

    /**
     * @note[short] MacOS: 0x476e40
     * @note[short] Windows: 0x30c40
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4);

    /**
     * @note[short] MacOS: 0x4770a0
     * @note[short] Windows: 0x30cf0
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5);

    /**
     * @note[short] MacOS: 0x476ee0
     * @note[short] Windows: 0x30da0
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7, float p8);

    /**
     * @note[short] MacOS: 0x477b50
     * @note[short] Windows: 0x30eb0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS: 0x477140
     * @note[short] Windows: 0x30f50
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* p0, char const* title, gd::string description, char const* btn1, char const* btn2, float width, bool scrollable, float height, float textScale);

    /**
     * @note[short] MacOS: 0x477c50
     * @note[short] Windows: 0x31a40
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x477cb0
     * @note[short] Windows: 0x31a80
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x477c00
     * @note[short] Android
     */
    void incrementForcePrio();

    /**
     * @note[short] MacOS: 0x477ee0
     * @note[short] Windows: 0x31ac0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x478120
     * @note[short] Windows: 0x31c10
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x478000
     * @note[short] Windows: 0x31b50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4780a0
     * @note[short] Windows: 0x31bc0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x478350
     * @note[short] Windows: 0x31df0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x477dc0
     * @note[short] Windows: 0x319a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x477d10
     * @note[short] Windows: 0x31930
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x4781a0
     * @note[short] Windows: 0x31c60
     * @note[short] Android
     */
    virtual void show();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};
