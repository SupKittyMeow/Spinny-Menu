#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS: 0x4675c0
     * @note[short] Windows: 0x22dd50
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* p0);

    /**
     * @note[short] MacOS: 0x467790
     * @note[short] Windows: 0x22de00
     * @note[short] Android
     */
    bool init(GJSearchObject* p0);

    /**
     * @note[short] MacOS: 0x467380
     * @note[short] Android
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS: 0x46c370
     * @note[short] Android
     */
    gd::string getSearchTitle();
    
private:
    [[deprecated("LevelBrowserLayer::getItemsMatchingSearch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItemsMatchingSearch(cocos2d::CCArray* p0, gd::string p1, GJSearchObject* p2);
public:
    
private:
    [[deprecated("LevelBrowserLayer::setSearchObject not implemented")]]
    /**
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* p0);
public:

    /**
     * @note[short] MacOS: 0x469350
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4691f0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4691b0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469cf0
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469f90
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469b00
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469dc0
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46a500
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46a880
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46a5b0
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469460
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469890
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469710
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469bd0
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x4697a0
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46d2e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x46a1a0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x469e90
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46a5f0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46a090
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x46d520
     * @note[short] Android
     */
    TodoReturn createNewList(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelBrowserLayer::createNewLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewLevel(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:

    /**
     * @note[short] MacOS: 0x469230
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
    
private:
    [[deprecated("LevelBrowserLayer::reloadAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadAllObjects();
public:

    /**
     * @note[short] MacOS: 0x46c070
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelBrowserLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("LevelBrowserLayer::createNewSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::show not implemented")]]
    /**
     * @note[short] Android
     */
    void show();
public:

    /**
     * @note[short] Out of line
     */
    static cocos2d::CCScene* scene(GJSearchObject* search);

    /**
     * @note[short] MacOS: 0x46a900
     * @note[short] Windows: 0x22f480
     * @note[short] Android
     */
    void loadPage(GJSearchObject* p0);
    
private:
    [[deprecated("LevelBrowserLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::isCorrect not implemented")]]
    /**
     * @note[short] Windows: 0x22f340
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x46de00
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS: 0x46dfa0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS: 0x46e090
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x46e0f0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x46e0b0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x46e0d0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x46dfb0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x46d390
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x46d3d0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x46ca00
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS: 0x46cb60
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS: 0x46cc40
     * @note[short] Windows: 0x230980
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS: 0x46d6b0
     * @note[short] Android
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS: 0x46d790
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x46d9e0
     * @note[short] Windows: 0x2326e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x46d1b0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS: 0x46e110
     * @note[short] Android
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x46de80
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_selected;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
private:
    int m_zOffset;
public:
private:
    bool m_unk2;
public:
private:
    int m_listHeight;
public:
};
