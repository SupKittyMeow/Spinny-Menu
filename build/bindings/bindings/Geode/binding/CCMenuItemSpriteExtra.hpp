#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] Out of line
     */
    void useAnimationType(MenuAnimationType type);

    /**
     * @note[short] Out of line
     */
    void setDestination(cocos2d::CCPoint const& pos);

    /**
     * @note[short] Out of line
     */
    void setOffset(cocos2d::CCPoint const& pos);

    /**
     * @note[short] Out of line
     */
    void setScale(float scale);

    /**
     * @note[short] Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS: 0x254900
     * @note[short] Windows: 0x25830
     * @note[short] Android
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] MacOS: 0x254990
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Out of line
     */
     ~CCMenuItemSpriteExtra();

    /**
     * @note[short] Out of line
     */
     CCMenuItemSpriteExtra();

    /**
     * @note[short] Out of line
     */
    void setSizeMult(float mult);

    /**
     * @note[short] MacOS: 0x254b20
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS: 0x254c90
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS: 0x254f00
     * @note[short] Android
     */
    virtual void unselected();

    /**
Set a new image for this button

 Prefer using this over `setNormalImage` as the latter does not actually

 handle any of the special sizing operations `CCMenuItemSpriteExtra` has

 @param sprite The sprite to replace this button's sprite with

 @note Geode addit     * @note[short] Out of line
     */
    void setSprite(cocos2d::CCSprite* sprite);

    /**
Update the sizing of this button's image

 If you for example have a `ButtonSprite` on this button and change the

 text, you need to call `updateSprite` afterwards to fix the button's

 content size

 @note Geode addit     * @note[short] Out of line
     */
    void updateSprite();
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_unknown1;
    gd::string m_unknown2;
    gd::string m_unknown3;
    float m_colorDip;
    cocos2d::CCPoint m_destPosition;
    cocos2d::CCPoint m_offset;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    int m_unknown4;
};
