#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)
    
private:
    [[deprecated("AnimatedGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AnimatedGameObject* create(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::getTweenTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenTime(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x1a13a0
     * @note[short] Android
     */
    TodoReturn playAnimation(int p0);
    
private:
    [[deprecated("AnimatedGameObject::animationForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animationForID(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupAnimatedSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupAnimatedSize(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupChildSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChildSprites();
public:

    /**
     * @note[short] MacOS: 0x1a0fb0
     * @note[short] Android
     */
    TodoReturn displayFrameChanged(cocos2d::CCObject* p0, gd::string p1);
    
private:
    [[deprecated("AnimatedGameObject::updateObjectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateObjectAnimation();
public:
    
private:
    [[deprecated("AnimatedGameObject::updateChildSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChildSpriteColor(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] MacOS: 0x19fa60
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1a17a0
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x1a1730
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x19f990
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS: 0x19f9d0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS: 0x19fb40
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x19fb70
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
};
