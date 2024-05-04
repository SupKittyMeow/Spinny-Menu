#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewDelegate.hpp"
#include "TableViewDataSource.hpp"

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)
    
private:
    [[deprecated("BoomListView::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5);
public:

    /**
     * @note[short] MacOS: 0x2e9890
     * @note[short] Windows: 0x1d400
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] Out of line
     */
     BoomListView();

    /**
     * @note[short] Out of line
     */
     ~BoomListView();
	inline bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return this->init(entries, nullptr, height, width, 0, type, 0.0f);
	}
    
private:
    [[deprecated("BoomListView::addObjectToList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToList(cocos2d::CCNode* p0);
public:

    /**
     * @note[short] MacOS: 0x2e9a40
     * @note[short] Android
     */
    TodoReturn lockList(bool p0);

    /**
     * @note[short] Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x2e9ac0
     * @note[short] Windows: 0x1d5c0
     * @note[short] Android
     */
    virtual void setupList(float p0);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS: 0x2e9ba0
     * @note[short] Windows: 0x1d650
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Out of line
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS: 0x2e9be0
     * @note[short] Windows: 0x1d660
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    /**
     * @note[short] MacOS: 0x2e9c10
     * @note[short] Windows: 0x1d250
     * @note[short] Android
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] MacOS: 0x2e9c30
     * @note[short] Windows: 0x1d670
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS: 0x2ea4a0
     * @note[short] Windows: 0x1d230
     * @note[short] Android
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] Out of line
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS: 0x2e9d40
     * @note[short] Windows: 0x1d6d0
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] MacOS: 0x2e9f80
     * @note[short] Windows: 0x1d7b0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
