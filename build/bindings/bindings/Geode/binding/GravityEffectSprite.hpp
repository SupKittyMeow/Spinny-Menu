#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("GravityEffectSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GravityEffectSprite* create();
public:
    
private:
    [[deprecated("GravityEffectSprite::updateSpritesColor not implemented")]]
    /**
     * @note[short] Windows: 0x2e5f40
     * @note[short] Android
     */
    TodoReturn updateSpritesColor(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] MacOS: 0xb8f00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0xb9160
     * @note[short] Android
     */
    virtual void draw();
};
