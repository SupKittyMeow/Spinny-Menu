#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJGarageLayer::getLockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLockFrame(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::getItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItems(IconType p0);
public:

    /**
     * @note[short] MacOS: 0x34c160
     * @note[short] Android
     */
    TodoReturn getItems(int p0, int p1, IconType p2, int p3);
    
private:
    [[deprecated("GJGarageLayer::onNavigate not implemented")]]
    /**
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x34b150
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34cde0
     * @note[short] Windows: 0x1ee7d0
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34a9f0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34ac40
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34ab50
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJGarageLayer::onArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x34abe0
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34c580
     * @note[short] Windows: 0x1ee4b0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x34abb0
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJGarageLayer::onSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJGarageLayer::toggleGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGlow();
public:
    
private:
    [[deprecated("GJGarageLayer::titleForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn titleForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x349ee0
     * @note[short] Android
     */
    void setupIconSelect();
    
private:
    [[deprecated("GJGarageLayer::playShadowEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playShadowEffect();
public:

    /**
     * @note[short] MacOS: 0x34baa0
     * @note[short] Android
     */
    void setupSpecialPage();
    
private:
    [[deprecated("GJGarageLayer::updatePlayerName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerName(char const* p0);
public:
    
private:
    [[deprecated("GJGarageLayer::playRainbowEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playRainbowEffect();
public:
    
private:
    [[deprecated("GJGarageLayer::showUnlockPopupNew not implemented")]]
    /**
     * @note[short] Android
     */
    void showUnlockPopupNew(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x3498d0
     * @note[short] Android
     */
    void updatePlayerColors();
    
private:
    [[deprecated("GJGarageLayer::achievementForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::descriptionForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn descriptionForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x347bd0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS: 0x34b2e0
     * @note[short] Android
     */
    void selectTab(IconType p0);

    /**
     * @note[short] MacOS: 0x34b420
     * @note[short] Android
     */
    void setupPage(int p0, IconType p1);

    /**
     * @note[short] MacOS: 0x347d60
     * @note[short] Windows: 0x1eaa40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x34df30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x34ae00
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x34af60
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x34b0f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x34d510
     * @note[short] Android
     */
    virtual TodoReturn listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] MacOS: 0x34d6a0
     * @note[short] Windows: 0x1eea30
     * @note[short] Android
     */
    virtual void showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x34dce0
     * @note[short] Windows: 0x1ef000
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS: 0x34da70
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x34db80
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS: 0x34d410
     * @note[short] Android
     */
    virtual void playerColorChanged();
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    GEODE_PAD(16);
    bool m_hasClosed;
    IconType m_iconType;
    gd::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_iconSelectionMenu;
    int m_iconID;
    IconType m_selectedIconType;
};
