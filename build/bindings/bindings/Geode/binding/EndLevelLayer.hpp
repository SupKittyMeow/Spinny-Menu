#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)
    
private:
    [[deprecated("EndLevelLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EndLevelLayer* create();
public:
    
private:
    [[deprecated("EndLevelLayer::getEndText not implemented")]]
    /**
     * @note[short] Windows: 0xe96b0
     * @note[short] Android
     */
    char const* getEndText();
public:
    
private:
    [[deprecated("EndLevelLayer::getCoinString not implemented")]]
    /**
     * @note[short] Windows: 0xe7d10
     * @note[short] Android
     */
    char const* getCoinString();
public:
    
private:
    [[deprecated("EndLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EndLevelLayer::onLevelLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x49d3f0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x49d2e0
     * @note[short] Windows: 0xe81d0
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EndLevelLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x49e4c0
     * @note[short] Android
     */
    void playEndEffect();
    
private:
    [[deprecated("EndLevelLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] MacOS: 0x49da20
     * @note[short] Android
     */
    void playCoinEffect(float p0);

    /**
     * @note[short] MacOS: 0x49d6a0
     * @note[short] Android
     */
    void playStarEffect(float p0);
    
private:
    [[deprecated("EndLevelLayer::coinEnterFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void coinEnterFinished(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x49df20
     * @note[short] Android
     */
    void playDiamondEffect(float p0);

    /**
     * @note[short] MacOS: 0x49e390
     * @note[short] Android
     */
    void starEnterFinished();
    
private:
    [[deprecated("EndLevelLayer::coinEnterFinishedO not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x49dbc0
     * @note[short] Android
     */
    void playCurrencyEffect(float p0);
    
private:
    [[deprecated("EndLevelLayer::diamondEnterFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn diamondEnterFinished();
public:
    
private:
    [[deprecated("EndLevelLayer::currencyEnterFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn currencyEnterFinished();
public:
    
private:
    [[deprecated("EndLevelLayer::goEdit not implemented")]]
    /**
     * @note[short] Android
     */
    void goEdit();
public:

    /**
     * @note[short] MacOS: 0x49e360
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x49eb10
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x49b580
     * @note[short] Windows: 0xe67b0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x49d530
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS: 0x49e280
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] MacOS: 0x49eba0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    bool m_unknown1;
    bool m_unknown2;
    bool m_unknown3;
    bool m_unknown4;
    bool m_unknown5;
    int m_unknown6;
    cocos2d::CCArray* m_coinsToAnimate;
};
