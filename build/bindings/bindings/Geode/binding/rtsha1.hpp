#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class rtsha1 {
public:
    static constexpr auto CLASS_NAME = "rtsha1";
    
private:
    [[deprecated("rtsha1::toHexString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toHexString(unsigned char const* p0, char* p1);
public:
    
private:
    [[deprecated("rtsha1::calc not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calc(void const* p0, int p1, unsigned char* p2);
public:
};
