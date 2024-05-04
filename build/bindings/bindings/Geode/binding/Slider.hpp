#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float idk);

    /**
     * @note[short] MacOS: 0x2e1100
     * @note[short] Windows: 0x4ce90
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);

    /**
     * @note[short] MacOS: 0x2e1340
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    
private:
    [[deprecated("Slider::getLiveDragging not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLiveDragging();
public:

    /**
     * @note[short] Out of line
     */
    SliderThumb* getThumb();
    
private:
    [[deprecated("Slider::getValue not implemented")]]
    /**
     * @note[short] Windows: 0x4d250
     * @note[short] Android
     */
    float getValue();
public:
    
private:
    [[deprecated("Slider::setRotated not implemented")]]
    /**
     * @note[short] Android
     */
    void setRotated(bool p0);
public:
    
private:
    [[deprecated("Slider::setMaxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("Slider::setLiveDragging not implemented")]]
    /**
     * @note[short] Android
     */
    void setLiveDragging(bool p0);
public:

    /**
     * @note[short] MacOS: 0x2e1920
     * @note[short] Android
     */
    void setBarVisibility(bool p0);

    /**
     * @note[short] Out of line
     */
    void setValue(float val);
    
private:
    [[deprecated("Slider::hideGroove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideGroove(bool p0);
public:
    
private:
    [[deprecated("Slider::sliderBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderBegan();
public:
    
private:
    [[deprecated("Slider::sliderEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderEnded();
public:

    /**
     * @note[short] MacOS: 0x2e1830
     * @note[short] Android
     */
    void disableTouch();
    
private:
    [[deprecated("Slider::enableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableSlider();
public:
    
private:
    [[deprecated("Slider::disableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableSlider();
public:

    /**
     * @note[short] Out of line
     */
    void updateBar();

    /**
     * @note[short] MacOS: 0x2e1980
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2e1a00
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x2e19c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    void* m_unknown;
    void* m_unknown2;
};
