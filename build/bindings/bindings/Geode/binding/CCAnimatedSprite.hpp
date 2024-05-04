#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x32e2b0
     * @note[short] Windows: 0x20d20
     * @note[short] Android
     */
    TodoReturn initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS: 0x32eda0
     * @note[short] Windows: 0x21640
     * @note[short] Android
     */
    TodoReturn runAnimation(gd::string p0);
    
private:
    [[deprecated("CCAnimatedSprite::switchToMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchToMode(spriteMode p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::cleanupSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cleanupSprite();
public:
    
private:
    [[deprecated("CCAnimatedSprite::createWithType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x32eeb0
     * @note[short] Windows: 0x21750
     * @note[short] Android
     */
    void tweenToAnimation(gd::string p0, float p1);
    
private:
    [[deprecated("CCAnimatedSprite::willPlayAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn willPlayAnimation();
public:
    
private:
    [[deprecated("CCAnimatedSprite::runAnimationForced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runAnimationForced(gd::string p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::tweenToAnimationFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void tweenToAnimationFinished();
public:
    
private:
    [[deprecated("CCAnimatedSprite::loadType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:
    
private:
    [[deprecated("CCAnimatedSprite::stopTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopTween();
public:

    /**
     * @note[short] MacOS: 0x32f2d0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x32f380
     * @note[short] Android
     */
    virtual void setColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x32f2b0
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);

    /**
     * @note[short] MacOS: 0x32f280
     * @note[short] Android
     */
    virtual TodoReturn animationFinishedO(cocos2d::CCObject* p0);
};
