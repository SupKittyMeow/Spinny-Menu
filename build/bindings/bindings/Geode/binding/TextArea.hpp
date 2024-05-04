#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x2fecb0
     * @note[short] Windows: 0x51fb0
     * @note[short] Android
     */
    static TextArea* create(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);

    /**
     * @note[short] MacOS: 0x2fee50
     * @note[short] Windows: 0x520b0
     * @note[short] Android
     */
    bool init(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);
    
private:
    [[deprecated("TextArea::setIgnoreColorCode not implemented")]]
    /**
     * @note[short] Android
     */
    void setIgnoreColorCode(bool p0);
public:

    /**
     * @note[short] MacOS: 0x2fef40
     * @note[short] Windows: 0x521c0
     * @note[short] Android
     */
    void setString(gd::string p0);
    
private:
    [[deprecated("TextArea::finishFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishFade();
public:
    
private:
    [[deprecated("TextArea::colorAllLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorAllLabels(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] MacOS: 0x2ffae0
     * @note[short] Android
     */
    TodoReturn fadeInCharacters(float p0, float p1);
    
private:
    [[deprecated("TextArea::fadeOutAndRemove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeOutAndRemove();
public:
    
private:
    [[deprecated("TextArea::colorAllCharactersTo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorAllCharactersTo(cocos2d::_ccColor3B p0);
public:
    
private:
    [[deprecated("TextArea::stopAllCharacterActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAllCharacterActions();
public:
    
private:
    [[deprecated("TextArea::fadeIn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeIn(float p0, bool p1);
public:
    
private:
    [[deprecated("TextArea::fadeOut not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeOut(float p0);
public:
    
private:
    [[deprecated("TextArea::hideAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideAll();
public:
    
private:
    [[deprecated("TextArea::showAll not implemented")]]
    /**
     * @note[short] Android
     */
    void showAll();
public:

    /**
     * @note[short] MacOS: 0x2ff930
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x2ff920
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x2ff780
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    int m_unknown;
    gd::string m_fontFile;
    float m_height;
private:
    cocos2d::CCPoint m_anchorPoint;
public:
};
