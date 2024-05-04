#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCIndexPath : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCIndexPath";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCIndexPath, cocos2d::CCObject)
	inline CCIndexPath() {}

    /**
     * @note[short] MacOS: 0x4670c0
     * @note[short] Android
     */
     ~CCIndexPath();
};
