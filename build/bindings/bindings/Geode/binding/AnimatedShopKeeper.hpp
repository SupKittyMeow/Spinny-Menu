#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)
    
private:
    [[deprecated("AnimatedShopKeeper::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType p0);
public:
    
private:
    [[deprecated("AnimatedShopKeeper::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(ShopType p0);
public:
    
private:
    [[deprecated("AnimatedShopKeeper::startAnimating not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startAnimating();
public:
    
private:
    [[deprecated("AnimatedShopKeeper::playReactAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playReactAnimation();
public:

    /**
     * @note[short] MacOS: 0x3057b0
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
};
