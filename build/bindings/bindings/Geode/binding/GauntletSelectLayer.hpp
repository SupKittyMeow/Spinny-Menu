#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x53cd80
     * @note[short] Windows: 0x1837c0
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int p0);

    /**
     * @note[short] MacOS: 0x53ce70
     * @note[short] Windows: 0x183860
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GauntletSelectLayer::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x184d50
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onInfo not implemented")]]
    /**
     * @note[short] Windows: 0x1841f0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onNext not implemented")]]
    /**
     * @note[short] Windows: 0x184ba0
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x53e4d0
     * @note[short] Windows: 0x184dc0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::onPrev not implemented")]]
    /**
     * @note[short] Windows: 0x184bc0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x53dad0
     * @note[short] Windows: 0x184250
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::unblockPlay not implemented")]]
    /**
     * @note[short] Windows: 0x184d00
     * @note[short] Android
     */
    void unblockPlay();
public:
    
private:
    [[deprecated("GauntletSelectLayer::updateArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateArrows();
public:

    /**
     * @note[short] MacOS: 0x53db90
     * @note[short] Windows: 0x184670
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS: 0x53cc60
     * @note[short] Windows: 0x182f70
     * @note[short] Android
     */
    bool scene(int p0);

    /**
     * @note[short] MacOS: 0x53e950
     * @note[short] Windows: 0x184be0
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x53ecc0
     * @note[short] Windows: 0x185120
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x53eb90
     * @note[short] Windows: 0x184db0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x53eaf0
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS: 0x53ea50
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS: 0x53e100
     * @note[short] Windows: 0x184300
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS: 0x53e2d0
     * @note[short] Windows: 0x1844d0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
