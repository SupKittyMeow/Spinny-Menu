#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)

    /**
     * @note[short] MacOS: 0x5e4240
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, TableViewCellDelegate* p2, cocos2d::CCRect p3);
    
private:
    [[deprecated("TableView::initTableViewCells not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initTableViewCells();
public:
    
private:
    [[deprecated("TableView::claimTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:

    /**
     * @note[short] MacOS: 0x5e5020
     * @note[short] Windows: 0x504d0
     * @note[short] Android
     */
    void reloadData();
    
private:
    [[deprecated("TableView::touchFinish not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::cellForTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::checkLastCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkLastCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkFirstCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkFirstCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::scrollToIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x5e4cf0
     * @note[short] Android
     */
    TodoReturn deleteTableViewCell(TableViewCell* p0);
    
private:
    [[deprecated("TableView::isDuplicateIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::cellForRowAtIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfContent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfContent(float p0);
public:
    
private:
    [[deprecated("TableView::isDuplicateInVisibleCellArray not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);
public:

    /**
     * @note[short] MacOS: 0x5e4f80
     * @note[short] Android
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);
    
private:
    [[deprecated("TableView::removeIndexPathFromPathAddedArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);
public:

    /**
     * @note[short] MacOS: 0x5e55c0
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS: 0x5e55d0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x5e5770
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x5e62b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x5e6070
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x5e61f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x5e55e0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x5e63a0
     * @note[short] Windows: 0x50d30
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS: 0x5e6fa0
     * @note[short] Android
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS: 0x5e6fc0
     * @note[short] Android
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS: 0x5e6fe0
     * @note[short] Android
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS: 0x5e7000
     * @note[short] Android
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    void* m_idk;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_array3;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    int m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
};
