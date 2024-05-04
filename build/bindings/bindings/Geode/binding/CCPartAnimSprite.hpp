#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("CCPartAnimSprite::initWithAnimDesc not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:
    
private:
    [[deprecated("CCPartAnimSprite::getSpriteForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteForKey(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x353390
     * @note[short] Windows: 0x27270
     * @note[short] Android
     */
    void setColor(cocos2d::_ccColor3B p0);
    
private:
    [[deprecated("CCPartAnimSprite::setFlipX not implemented")]]
    /**
     * @note[short] Android
     */
    void setFlipX(bool p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::setFlipY not implemented")]]
    /**
     * @note[short] Android
     */
    void setFlipY(bool p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::countParts not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countParts();
public:
    
private:
    [[deprecated("CCPartAnimSprite::tweenToFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenToFrame(cocos2d::CCSpriteFrame* p0, float p1);
public:
    
private:
    [[deprecated("CCPartAnimSprite::tweenSpriteTo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenSpriteTo(SpriteDescription* p0, float p1);
public:
    
private:
    [[deprecated("CCPartAnimSprite::transformSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformSprite(SpriteDescription* p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::changeTextureOfID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeTextureOfID(char const* p0, char const* p1);
public:
    
private:
    [[deprecated("CCPartAnimSprite::createWithAnimDesc not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:
    
private:
    [[deprecated("CCPartAnimSprite::dirtify not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtify();
public:

    /**
     * @note[short] MacOS: 0x3531d0
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS: 0x3531f0
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS: 0x3531b0
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x353460
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x353210
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);

    /**
     * @note[short] MacOS: 0x352d80
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS: 0x352ef0
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS: 0x352f10
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();
};
