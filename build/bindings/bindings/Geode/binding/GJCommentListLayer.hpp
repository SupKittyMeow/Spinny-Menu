#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS: 0x27c4e0
     * @note[short] Windows: 0x203350
     * @note[short] Android
     */
    static GJCommentListLayer* create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5);

    /**
     * @note[short] MacOS: 0x27c5f0
     * @note[short] Windows: 0x203440
     * @note[short] Android
     */
    bool init(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5);
    BoomListView* m_list;
};
