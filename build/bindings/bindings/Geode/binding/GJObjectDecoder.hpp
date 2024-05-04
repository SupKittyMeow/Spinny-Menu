#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ObjectDecoderDelegate.hpp"

class GJObjectDecoder : public cocos2d::CCNode, public ObjectDecoderDelegate {
public:
    static constexpr auto CLASS_NAME = "GJObjectDecoder";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJObjectDecoder, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x6e7c70
     * @note[short] Android
     */
    TodoReturn sharedDecoder();

    /**
     * @note[short] MacOS: 0x6e7cf0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x6e7d00
     * @note[short] Windows: 0x1f7b60
     * @note[short] Android
     */
    virtual TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
};
