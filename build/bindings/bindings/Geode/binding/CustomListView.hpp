#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomListView.hpp"

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)
	inline static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return CustomListView::create(entries, nullptr, width, height, 0, type, 0.0f);
	}

    /**
     * @note[short] MacOS: 0x21f7d0
     * @note[short] Windows: 0x7a880
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
	inline CustomListView() {}

    /**
     * @note[short] MacOS: 0x21f750
     * @note[short] Android
     */
     ~CustomListView();

    /**
     * @note[short] MacOS: 0x2209d0
     * @note[short] Android
     */
    float getCellHeight(BoomListType p0);

    /**
     * @note[short] MacOS: 0x22c700
     * @note[short] Android
     */
    TodoReturn reloadAll();

    /**
     * @note[short] MacOS: 0x22bed0
     * @note[short] Windows: 0x7b710
     * @note[short] Android
     */
    virtual void setupList(float p0);

    /**
     * @note[short] MacOS: 0x21f910
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] MacOS: 0x2214a0
     * @note[short] Windows: 0x7b2d0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);
    int m_unknown;
};
