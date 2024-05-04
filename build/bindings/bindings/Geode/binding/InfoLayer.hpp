#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x76fe50
     * @note[short] Windows: 0x2239c0
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);

    /**
     * @note[short] MacOS: 0x770000
     * @note[short] Windows: 0x223a80
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::getAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    int getAccountID();
public:
    
private:
    [[deprecated("InfoLayer::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Out of line
     */
    int getID();
    
private:
    [[deprecated("InfoLayer::getRealID not implemented")]]
    /**
     * @note[short] Android
     */
    int getRealID();
public:

    /**
     * @note[short] MacOS: 0x772a20
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x772260
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x772a00
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x7732c0
     * @note[short] Windows: 0x225f00
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x7738c0
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onGetComments not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("InfoLayer::onRefreshComments not implemented")]]
    /**
     * @note[short] Windows: 0x2258f0
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x772010
     * @note[short] Windows: 0x225bf0
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x772980
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x7723a0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onSimilar not implemented")]]
    /**
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("InfoLayer::reloadWindow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadWindow();
public:

    /**
     * @note[short] MacOS: 0x7727d0
     * @note[short] Android
     */
    TodoReturn confirmReport(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x774030
     * @note[short] Android
     */
    void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS: 0x772060
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS: 0x772b20
     * @note[short] Android
     */
    TodoReturn toggleCommentMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("InfoLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("InfoLayer::toggleExtendedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleExtendedMode(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x773120
     * @note[short] Windows: 0x226770
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("InfoLayer::toggleSmallCommentMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSmallCommentMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("InfoLayer::updateCommentModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCommentModeButtons();
public:

    /**
     * @note[short] MacOS: 0x772d80
     * @note[short] Windows: 0x226440
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);
    
private:
    [[deprecated("InfoLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x773d50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x773c40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x774ae0
     * @note[short] Windows: 0x8f6a0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x773ec0
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x773f90
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS: 0x774690
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS: 0x7747e0
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS: 0x7744f0
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS: 0x773a00
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
