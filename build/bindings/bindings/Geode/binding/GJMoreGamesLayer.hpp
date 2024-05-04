#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)
    
private:
    [[deprecated("GJMoreGamesLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();
public:
    
private:
    [[deprecated("GJMoreGamesLayer::getMoreGamesList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoreGamesList();
public:

    /**
     * @note[short] MacOS: 0x757290
     * @note[short] Android
     */
    virtual void customSetup();
};
