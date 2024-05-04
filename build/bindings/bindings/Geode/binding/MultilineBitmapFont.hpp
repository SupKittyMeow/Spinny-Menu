#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)

    /**
     * @note[short] MacOS: 0x463bd0
     * @note[short] Android
     */
    TodoReturn initWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS: 0x464480
     * @note[short] Android
     */
    TodoReturn readColorInfo(gd::string p0);

    /**
     * @note[short] MacOS: 0x463a80
     * @note[short] Android
     */
    TodoReturn createWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS: 0x465060
     * @note[short] Android
     */
    TodoReturn stringWithMaxWidth(gd::string p0, float p1, float p2);
    
private:
    [[deprecated("MultilineBitmapFont::moveSpecialDescriptors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveSpecialDescriptors(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x4654e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
