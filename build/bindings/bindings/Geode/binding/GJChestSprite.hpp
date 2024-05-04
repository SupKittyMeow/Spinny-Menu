#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x1faf50
     * @note[short] Android
     */
    static GJChestSprite* create(int p0);
    
private:
    [[deprecated("GJChestSprite::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS: 0x1fc3d0
     * @note[short] Android
     */
    void switchToState(ChestSpriteState p0, bool p1);

    /**
     * @note[short] MacOS: 0x1fda20
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1fd930
     * @note[short] Android
     */
    virtual void setColor(cocos2d::_ccColor3B const& p0);
};
