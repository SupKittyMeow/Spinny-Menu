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
#include "FLAlertLayerProtocol.hpp"
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x778c80
     * @note[short] Windows: 0x2e7270
     * @note[short] Android
     */
    static ProfilePage* create(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x778e90
     * @note[short] Windows: 0x2e7320
     * @note[short] Android
     */
    bool init(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x77d2e0
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77cf40
     * @note[short] Windows: 0x2e9f20
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x77d400
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77d490
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77cc20
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c770
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c730
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x779940
     * @note[short] Windows: 0x2eae90
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x779bc0
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c880
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c5f0
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x779e30
     * @note[short] Windows: 0x2e7db0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77d4b0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77d370
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77d110
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c490
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x77c340
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ProfilePage::isOnWatchlist not implemented")]]
    /**
     * @note[short] Android
     */
    bool isOnWatchlist(int p0);
public:

    /**
     * @note[short] MacOS: 0x7799c0
     * @note[short] Android
     */
    TodoReturn setupComments();
    
private:
    [[deprecated("ProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("ProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("ProfilePage::showNoAccountError not implemented")]]
    /**
     * @note[short] Android
     */
    void showNoAccountError();
public:

    /**
     * @note[short] MacOS: 0x77a170
     * @note[short] Windows: 0x2e8040
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] MacOS: 0x77a030
     * @note[short] Windows: 0x2eb980
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("ProfilePage::toggleMainPageVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleMainPageVisibility(bool p0);
public:

    /**
     * @note[short] MacOS: 0x77e370
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS: 0x77d730
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS: 0x77e7a0
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS: 0x77f1b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x77dd50
     * @note[short] Windows: 0x2eaef0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x77dfd0
     * @note[short] Windows: 0x2eb010
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x77d810
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x77de60
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS: 0x77df30
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS: 0x77e2c0
     * @note[short] Windows: 0x2eb5d0
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] MacOS: 0x77e5f0
     * @note[short] Windows: 0x2eb660
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] MacOS: 0x77e6b0
     * @note[short] Windows: 0x2eb6b0
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* p0);

    /**
     * @note[short] MacOS: 0x77e8d0
     * @note[short] Windows: 0x2ebab0
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x77e9c0
     * @note[short] Windows: 0x2ebb10
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS: 0x77ea90
     * @note[short] Windows: 0x2ebb70
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS: 0x77eec0
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS: 0x77ef50
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS: 0x77f020
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x77d9f0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS: 0x77da70
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x77dc30
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    void* m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    void* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
