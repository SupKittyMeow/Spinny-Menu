#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)
    
private:
    [[deprecated("GJPathSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJPathSprite* create(int p0);
public:

    /**
     * @note[short] MacOS: 0x2df780
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS: 0x2db490
     * @note[short] Android
     */
    TodoReturn updateState();

    /**
     * @note[short] MacOS: 0x2df890
     * @note[short] Android
     */
    TodoReturn addRankLabel(int p0);

    /**
     * @note[short] MacOS: 0x2df370
     * @note[short] Android
     */
    TodoReturn addShardSprite();

    /**
     * @note[short] MacOS: 0x2de380
     * @note[short] Android
     */
    TodoReturn changeToLockedArt();
};
