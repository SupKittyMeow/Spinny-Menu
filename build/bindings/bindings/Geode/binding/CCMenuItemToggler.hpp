#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)
	inline CCMenuItemToggler() : CCMenuItem(), m_onButton(nullptr), m_offButton(nullptr), m_toggled(false), m_notClickable(false) {}

    /**
     * @note[short] Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] Out of line
     */
    bool isOn();

    /**
     * @note[short] Out of line
     */
    bool isToggled();

    /**
     * @note[short] Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] Out of line
     */
    void toggleWithCallback(bool on);

    /**
     * @note[short] MacOS: 0x5c8b0
     * @note[short] Windows: 0x25e50
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* offSpr, cocos2d::CCNode* onSpr, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS: 0x5c980
     * @note[short] Windows: 0x25f30
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS: 0x5ce30
     * @note[short] Android
     */
    void setSizeMult(float p0);

    /**
     * @note[short] MacOS: 0x5cd60
     * @note[short] Windows: 0x261e0
     * @note[short] Android
     */
    void toggle(bool p0);
    
private:
    [[deprecated("CCMenuItemToggler::activeItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeItem();
public:
    
private:
    [[deprecated("CCMenuItemToggler::normalTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn normalTouch(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CCMenuItemToggler::selectedTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectedTouch(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x5cfd0
     * @note[short] Windows: 0x26160
     * @note[short] Android
     */
    virtual void setEnabled(bool enabled);

    /**
     * @note[short] MacOS: 0x5cf70
     * @note[short] Windows: 0x26100
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS: 0x5cf40
     * @note[short] Windows: 0x260d0
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS: 0x5cfa0
     * @note[short] Windows: 0x26130
     * @note[short] Android
     */
    virtual void unselected();

    /**
Update the sizing of this toggle's image

 If you for example have a `ButtonSprite` on this toggle and change the

 text, you need to call `updateSprite` afterwards to fix the toggle's

 content size

 @note Geode addit     * @note[short] Out of line
     */
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
