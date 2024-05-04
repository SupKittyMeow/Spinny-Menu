#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableViewCell : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TableViewCell, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x5eb040
     * @note[short] Windows: 0x51b10
     * @note[short] Android
     */
     TableViewCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS: 0x5eb320
     * @note[short] Android
     */
     ~TableViewCell();

    /**
     * @note[short] MacOS: 0x5eb5b0
     * @note[short] Android
     */
    TodoReturn updateVisibility();
    bool m_unknown;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    void* m_unknown2;
    void* m_unknown3;
    int m_unknownThing;
    gd::string m_unknownString;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};
