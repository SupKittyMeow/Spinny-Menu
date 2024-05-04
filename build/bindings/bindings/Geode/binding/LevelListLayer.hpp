#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)
    
private:
    [[deprecated("LevelListLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* p0);
public:

    /**
     * @note[short] MacOS: 0x33a9a0
     * @note[short] Windows: 0x22de00
     * @note[short] Android
     */
    bool init(GJLevelList* p0);

    /**
     * @note[short] MacOS: 0x33a830
     * @note[short] Android
     */
     ~LevelListLayer();
    
private:
    [[deprecated("LevelListLayer::onFavorite not implemented")]]
    /**
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onListInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onSelectIcon not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onToggleEditMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onRefreshLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x33e710
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelListLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onLike not implemented")]]
    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onShare not implemented")]]
    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onDelete();
public:
    
private:
    [[deprecated("LevelListLayer::ownerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ownerDelete();
public:
    
private:
    [[deprecated("LevelListLayer::confirmClone not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::updateEditMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditMode();
public:
    
private:
    [[deprecated("LevelListLayer::updateStatsArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStatsArt();
public:
    
private:
    [[deprecated("LevelListLayer::verifyListName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyListName();
public:
    
private:
    [[deprecated("LevelListLayer::updateSideButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSideButtons();
public:
    
private:
    [[deprecated("LevelListLayer::confirmOwnerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x33ed50
     * @note[short] Android
     */
    void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS: 0x33a8b0
     * @note[short] Android
     */
    TodoReturn scene(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::cloneList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cloneList();
public:

    /**
     * @note[short] MacOS: 0x33dbe0
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS: 0x33dc10
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x33df90
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS: 0x33e1d0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS: 0x33e9c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x33e5b0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS: 0x33e6f0
     * @note[short] Android
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x33e200
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS: 0x33ee20
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS: 0x33f060
     * @note[short] Android
     */
    virtual TodoReturn iconSelectClosed(SelectListIconLayer* p0);

    /**
     * @note[short] MacOS: 0x33f1f0
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int p0);

    /**
     * @note[short] MacOS: 0x33f2f0
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int p0);

    /**
     * @note[short] MacOS: 0x33f5c0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x33f3f0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x33f690
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
