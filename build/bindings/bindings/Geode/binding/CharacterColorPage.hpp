#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x61fec0
     * @note[short] Android
     */
    static CharacterColorPage* create();

    /**
     * @note[short] MacOS: 0x621a50
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x620db0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CharacterColorPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CharacterColorPage::checkColor not implemented")]]
    /**
     * @note[short] Android
     */
    void checkColor(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x6214b0
     * @note[short] Android
     */
    void toggleGlow(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x620d00
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x621a30
     * @note[short] Android
     */
    int colorForIndex(int p0);

    /**
     * @note[short] MacOS: 0x621ca0
     * @note[short] Android
     */
    cocos2d::CCPoint& offsetForIndex(int p0);

    /**
     * @note[short] MacOS: 0x6210e0
     * @note[short] Android
     */
    void createColorMenu();
    
private:
    [[deprecated("CharacterColorPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CharacterColorPage::toggleGlowItems not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleGlowItems(bool p0);
public:

    /**
     * @note[short] MacOS: 0x6214f0
     * @note[short] Android
     */
    void updateColorMode(int p0);

    /**
     * @note[short] MacOS: 0x620f80
     * @note[short] Android
     */
    void updateIconColors();

    /**
     * @note[short] Out of line
     */
    int activeColorForMode(int mode);

    /**
     * @note[short] MacOS: 0x620020
     * @note[short] Windows: 0x5e640
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x621ff0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x621f50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x621dc0
     * @note[short] Android
     */
    virtual void show();
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};
