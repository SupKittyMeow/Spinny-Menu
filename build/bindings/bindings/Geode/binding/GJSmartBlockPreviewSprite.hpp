#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();
public:

    /**
     * @note[short] MacOS: 0x408950
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x408960
     * @note[short] Android
     */
    virtual void visit();
};
