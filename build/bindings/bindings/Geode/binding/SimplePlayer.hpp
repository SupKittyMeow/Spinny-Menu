#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x349730
     * @note[short] Windows: 0x1ef610
     * @note[short] Android
     */
    static SimplePlayer* create(int p0);

    /**
     * @note[short] MacOS: 0x34e0e0
     * @note[short] Windows: 0x1ef6b0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Out of line
     */
    void setSecondColor(cocos2d::_ccColor3B const& color);
    
private:
    [[deprecated("SimplePlayer::setColors not implemented")]]
    /**
     * @note[short] Android
     */
    void setColors(cocos2d::_ccColor3B const& p0, cocos2d::_ccColor3B const& p1);
public:
    
private:
    [[deprecated("SimplePlayer::setFrames not implemented")]]
    /**
     * @note[short] Windows: 0x1f0540
     * @note[short] Android
     */
    void setFrames(char const* p0, char const* p1, char const* p2, char const* p3, char const* p4);
public:

    /**
     * @note[short] MacOS: 0x34cf50
     * @note[short] Windows: 0x1efe50
     * @note[short] Android
     */
    void updateColors();
    
private:
    [[deprecated("SimplePlayer::asyncLoadIcon not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncLoadIcon(int p0, IconType p1);
public:
    
private:
    [[deprecated("SimplePlayer::hideSecondary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideSecondary();
public:
    
private:
    [[deprecated("SimplePlayer::createRobotSprite not implemented")]]
    /**
     * @note[short] Windows: 0x1efd50
     * @note[short] Android
     */
    TodoReturn createRobotSprite(int p0);
public:

    /**
     * @note[short] MacOS: 0x349a00
     * @note[short] Windows: 0x1f0140
     * @note[short] Android
     */
    void updatePlayerFrame(int p0, IconType p1);

    /**
     * @note[short] MacOS: 0x349850
     * @note[short] Windows: 0x1efda0
     * @note[short] Android
     */
    TodoReturn createSpiderSprite(int p0);
    
private:
    [[deprecated("SimplePlayer::iconFinishedLoading not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn iconFinishedLoading(int p0, IconType p1);
public:

    /**
     * @note[short] Out of line
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);

    /**
     * @note[short] Out of line
     */
    void disableCustomGlowColor();

    /**
     * @note[short] Out of line
     */
    void setGlowOutline(cocos2d::ccColor3B color);

    /**
     * @note[short] Out of line
     */
    void disableGlowOutline();
    
private:
    [[deprecated("SimplePlayer::hideAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideAll();
public:

    /**
     * @note[short] MacOS: 0x34ece0
     * @note[short] Windows: 0x1f06f0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x34e980
     * @note[short] Windows: 0x1efe20
     * @note[short] Android
     */
    virtual void setColor(cocos2d::_ccColor3B const& p0);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    GEODE_PAD(7);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(8);
};
