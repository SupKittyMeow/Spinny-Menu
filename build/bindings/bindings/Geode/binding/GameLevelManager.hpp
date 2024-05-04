#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x4f3030
     * @note[short] Windows: 0xf2d90
     * @note[short] Android
     */
    static GameLevelManager* sharedState();
	inline static GameLevelManager* get() {
		return GameLevelManager::sharedState();
	}

    /**
     * @note[short] MacOS: 0x527160
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::getDescKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDescKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDiffKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getDiffVal(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x511a30
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* p0);

    /**
     * @note[short] MacOS: 0x50a2f0
     * @note[short] Android
     */
    char const* getPageInfo(char const* p0);

    /**
     * @note[short] MacOS: 0x50a700
     * @note[short] Android
     */
    double getTimeLeft(char const* p0, float p1);

    /**
     * @note[short] MacOS: 0x524400
     * @note[short] Android
     */
    void getUserList(UserListType p0);

    /**
     * @note[short] MacOS: 0x513af0
     * @note[short] Android
     */
    void getGauntlets();

    /**
     * @note[short] MacOS: 0x525ff0
     * @note[short] Android
     */
    void getGJRewards(int p0);

    /**
     * @note[short] MacOS: 0x527ee0
     * @note[short] Android
     */
    int getIntForKey(char const* p0);

    /**
     * @note[short] MacOS: 0x50fcf0
     * @note[short] Android
     */
    gd::string getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5);

    /**
     * @note[short] MacOS: 0x5011a0
     * @note[short] Windows: 0xf40e0
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::getReportKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getReportKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x5280b0
     * @note[short] Windows: 0x110820
     * @note[short] Android
     */
    bool getBoolForKey(char const* p0);

    /**
     * @note[short] MacOS: 0x51e1d0
     * @note[short] Android
     */
    gd::string getCommentKey(int p0, int p1, int p2, CommentKeyType p3);

    /**
     * @note[short] MacOS: 0x5271c0
     * @note[short] Android
     */
    double getDailyTimer(GJTimedLevelType p0);

    /**
     * @note[short] MacOS: 0x50bf00
     * @note[short] Android
     */
    gd::string getFolderName(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x51b4d0
     * @note[short] Windows: 0x105270
     * @note[short] Android
     */
    void getGJUserInfo(int p0);

    /**
     * @note[short] MacOS: 0x512dd0
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getLocalLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMapPackKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMessageKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x509370
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getTopArtists not implemented")]]
    /**
     * @note[short] Android
     */
    void getTopArtists(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getGauntletKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getGauntletKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] MacOS: 0x51c0b0
     * @note[short] Android
     */
    char const* getMessagesKey(bool p0, int p1);

    /**
     * @note[short] MacOS: 0x5089a0
     * @note[short] Windows: 0xf6620
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool p0, int p1);

    /**
     * @note[short] MacOS: 0x50aa00
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getUserInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUserInfoKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x5267e0
     * @note[short] Android
     */
    void getGJChallenges();
    
private:
    [[deprecated("GameLevelManager::getLevelListKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelListKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x5108d0
     * @note[short] Windows: 0xfbab0
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getRateStarsKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getRateStarsKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x511d60
     * @note[short] Android
     */
    TodoReturn getSavedMapPack(int p0);

    /**
     * @note[short] MacOS: 0x51bd80
     * @note[short] Android
     */
    void getUserMessages(bool p0, int p1, int p2);

    /**
     * @note[short] MacOS: 0x527190
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::getActiveDailyID not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getActiveDailyID(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:

    /**
     * @note[short] MacOS: 0x51dcc0
     * @note[short] Android
     */
    void getLevelComments(int p0, int p1, int p2, int p3, CommentKeyType p4);
    
private:
    [[deprecated("GameLevelManager::getLevelSaveData not implemented")]]
    /**
     * @note[short] Android
     */
    void getLevelSaveData();
public:
    
private:
    [[deprecated("GameLevelManager::getNextLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getNextLevelName(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedGauntlet not implemented")]]
    /**
     * @note[short] Android
     */
    GJMapPack* getSavedGauntlet(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getTopArtistsKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getTopArtistsKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();
public:

    /**
     * @note[short] MacOS: 0x50e2f0
     * @note[short] Windows: 0xfa3b0
     * @note[short] Android
     */
    gd::string getBasePostString();

    /**
     * @note[short] MacOS: 0x5219a0
     * @note[short] Android
     */
    void getFriendRequests(bool p0, int p1, int p2);

    /**
     * @note[short] MacOS: 0x513e90
     * @note[short] Windows: 0xff660
     * @note[short] Android
     */
    void getGauntletLevels(int p0);
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getAllUsedSongIDs(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getPostCommentKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int p0);
public:

    /**
     * @note[short] MacOS: 0x5239b0
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType p0);

    /**
     * @note[short] MacOS: 0x51e3f0
     * @note[short] Android
     */
    void getAccountComments(int p0, int p1, int p2);

    /**
     * @note[short] MacOS: 0x508ef0
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool p0);

    /**
     * @note[short] MacOS: 0x5091b0
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int p0);

    /**
     * @note[short] MacOS: 0x508b90
     * @note[short] Windows: 0xf6a70
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int p0);
    
private:
    [[deprecated("GameLevelManager::getSplitIntFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteCommentKey(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteMessageKey(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x51f6f0
     * @note[short] Android
     */
    char const* getFriendRequestKey(bool p0, int p1);
    
private:
    [[deprecated("GameLevelManager::getLevelDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelDownloadKey(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x519f00
     * @note[short] Windows: 0x103e80
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("GameLevelManager::getLocalLevelByName not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevelByName(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x508cb0
     * @note[short] Android
     */
    int getLowestLevelOrder();
    
private:
    [[deprecated("GameLevelManager::getUploadMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUploadMessageKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x51e710
     * @note[short] Android
     */
    char const* getAccountCommentKey(int p0, int p1);

    /**
     * @note[short] MacOS: 0x50c310
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();

    /**
     * @note[short] MacOS: 0x513a50
     * @note[short] Windows: 0xfee80
     * @note[short] Android
     */
    void getGauntletsearchKey(int p0);

    /**
     * @note[short] MacOS: 0x526c80
     * @note[short] Windows: 0x10f150
     * @note[short] Android
     */
    void getGJDailyLevelState(GJTimedLevelType p0);

    /**
     * @note[short] MacOS: 0x508c70
     * @note[short] Android
     */
    int getHighestLevelOrder();

    /**
     * @note[short] MacOS: 0x5196a0
     * @note[short] Android
     */
    void getLeaderboardScores(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeAccountItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getNextFreeTemplateID not implemented")]]
    /**
     * @note[short] Android
     */
    int getNextFreeTemplateID();
public:

    /**
     * @note[short] MacOS: 0x509290
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int p0);

    /**
     * @note[short] MacOS: 0x50a0d0
     * @note[short] Windows: 0xf76f0
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();
public:

    /**
     * @note[short] MacOS: 0x51acf0
     * @note[short] Android
     */
    char const* getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);

    /**
     * @note[short] MacOS: 0x51fa70
     * @note[short] Android
     */
    TodoReturn getStoredLevelComments(char const* p0);

    /**
     * @note[short] MacOS: 0x51bd60
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int p0);

    /**
     * @note[short] MacOS: 0x509450
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int p0);
    
private:
    [[deprecated("GameLevelManager::getNews not implemented")]]
    /**
     * @note[short] Android
     */
    void getNews();
public:

    /**
     * @note[short] MacOS: 0x51b140
     * @note[short] Android
     */
    void getUsers(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getLenKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLenKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLenVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getLenVal(int p0);
public:

    /**
     * @note[short] MacOS: 0x527ac0
     * @note[short] Android
     */
    void setDiffVal(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::setIntForKey not implemented")]]
    /**
     * @note[short] Android
     */
    void setIntForKey(int p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setBoolForKey not implemented")]]
    /**
     * @note[short] Windows: 0x110760
     * @note[short] Android
     */
    void setBoolForKey(bool p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    void setFolderName(int p0, gd::string p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelStars(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelFeatured(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* p0);
public:

    /**
     * @note[short] MacOS: 0x527ce0
     * @note[short] Android
     */
    void setLenVal(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::onBanUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onBanUserCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetNewsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x106c00
     * @note[short] Android
     */
    void onGetNewsCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetUsersCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUsersCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f9860
     * @note[short] Windows: 0x10d0f0
     * @note[short] Android
     */
    void onLikeItemCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onBlockUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlockUserCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onRateDemonCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRateDemonCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f7180
     * @note[short] Android
     */
    void onRateStarsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f65f0
     * @note[short] Windows: 0xfd080
     * @note[short] Android
     */
    void onGetMapPacksCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetUserListCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUserListCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f9bf0
     * @note[short] Android
     */
    void onReportLevelCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onUnblockUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnblockUserCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f70d0
     * @note[short] Android
     */
    void onUpdateLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f5670
     * @note[short] Windows: 0xfb1b0
     * @note[short] Android
     */
    void onUploadLevelCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetGauntletsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0xff060
     * @note[short] Android
     */
    void onGetGauntletsCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJRewardsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGJRewardsCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onRemoveFriendCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFriendCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f9a20
     * @note[short] Android
     */
    void onRestoreItemsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f96b0
     * @note[short] Windows: 0x109740
     * @note[short] Android
     */
    void onDeleteCommentCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f7020
     * @note[short] Windows: 0xffe90
     * @note[short] Android
     */
    void onDownloadLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f9fa0
     * @note[short] Windows: 0x1053d0
     * @note[short] Android
     */
    void onGetGJUserInfoCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetLevelListsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0xfe7f0
     * @note[short] Android
     */
    void onGetLevelListsCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetTopArtistsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x104a50
     * @note[short] Android
     */
    void onGetTopArtistsCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f7490
     * @note[short] Android
     */
    void onSetLevelStarsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f8670
     * @note[short] Windows: 0x108c30
     * @note[short] Android
     */
    void onUploadCommentCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onSubmitUserInfoCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmitUserInfoCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4fe0c0
     * @note[short] Android
     */
    void onGetGJChallengesCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f5930
     * @note[short] Windows: 0xfc270
     * @note[short] Android
     */
    void onGetOnlineLevelsCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetUserMessagesCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUserMessagesCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f7640
     * @note[short] Android
     */
    void onUpdateUserScoreCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onUploadLevelListCompleted not implemented")]]
    /**
     * @note[short] Windows: 0xfe120
     * @note[short] Android
     */
    void onUploadLevelListCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f7d90
     * @note[short] Windows: 0x106f20
     * @note[short] Android
     */
    void onGetLevelCommentsCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetLevelSaveDataCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelSaveDataCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onSetLevelFeaturedCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSetLevelFeaturedCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f7300
     * @note[short] Android
     */
    void onDeleteServerLevelCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onGetFriendRequestsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetFriendRequestsCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onReadFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onReadFriendRequestCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onRequestUserAccessCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRequestUserAccessCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onSuggestLevelStarsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSuggestLevelStarsCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f9d60
     * @note[short] Android
     */
    void onUpdateDescriptionCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onUploadUserMessageCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadUserMessageCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteUserMessagesCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteUserMessagesCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f8200
     * @note[short] Android
     */
    void onGetAccountCommentsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4f3380
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    
private:
    [[deprecated("GameLevelManager::onAcceptFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onAcceptFriendRequestCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteFriendRequestCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onDownloadUserMessageCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadUserMessageCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLevelLeaderboardCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelLeaderboardCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadFriendRequestCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJDailyLevelStateCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x10f350
     * @note[short] Android
     */
    void onGetGJDailyLevelStateCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4f79a0
     * @note[short] Android
     */
    void onGetLeaderboardScoresCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GameLevelManager::onDeleteServerLevelListCompleted not implemented")]]
    /**
     * @note[short] Windows: 0xfe490
     * @note[short] Android
     */
    void onDeleteServerLevelListCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x50c8e0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GameLevelManager::firstSetup not implemented")]]
    /**
     * @note[short] Windows: 0x397d10
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] MacOS: 0x50bc10
     * @note[short] Android
     */
    void followUser(int p0);
    
private:
    [[deprecated("GameLevelManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:

    /**
     * @note[short] MacOS: 0x50a480
     * @note[short] Windows: 0xf7910
     * @note[short] Android
     */
    bool isDLActive(char const* p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x50a1c0
     * @note[short] Android
     */
    bool isTimeValid(char const* p0, float p1);
    
private:
    [[deprecated("GameLevelManager::keyHasTimer not implemented")]]
    /**
     * @note[short] Android
     */
    bool keyHasTimer(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::reportLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void reportLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameLevelManager::unblockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void unblockUser(int p0);
public:

    /**
     * @note[short] MacOS: 0x515ec0
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::uploadLevel not implemented")]]
    /**
     * @note[short] Windows: 0xfa560
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x50c700
     * @note[short] Windows: 0xf8f90
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
    
private:
    [[deprecated("GameLevelManager::hasLikedItem not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] MacOS: 0x523530
     * @note[short] Android
     */
    void removeFriend(int p0);
    
private:
    [[deprecated("GameLevelManager::restoreItems not implemented")]]
    /**
     * @note[short] Android
     */
    void restoreItems();
public:
    
private:
    [[deprecated("GameLevelManager::saveGauntlet not implemented")]]
    /**
     * @note[short] Windows: 0xff920
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* p0);
public:

    /**
     * @note[short] MacOS: 0x50bac0
     * @note[short] Android
     */
    void unfollowUser(int p0);

    /**
     * @note[short] MacOS: 0x50a550
     * @note[short] Windows: 0xf79d0
     * @note[short] Android
     */
    void addDLToActive(char const* p0);

    /**
     * @note[short] MacOS: 0x521210
     * @note[short] Windows: 0x1093f0
     * @note[short] Android
     */
    void deleteComment(int p0, CommentType p1, int p2);

    /**
     * @note[short] MacOS: 0x5144c0
     * @note[short] Windows: 0xffa20
     * @note[short] Android
     */
    void downloadLevel(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::gotoLevelPage not implemented")]]
    /**
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x516e10
     * @note[short] Android
     */
    bool hasRatedDemon(int p0);

    /**
     * @note[short] MacOS: 0x515e80
     * @note[short] Android
     */
    bool isUpdateValid(int p0);

    /**
     * @note[short] MacOS: 0x509fb0
     * @note[short] Windows: 0xf7b30
     * @note[short] Android
     */
    void makeTimeStamp(char const* p0);
    
private:
    [[deprecated("GameLevelManager::saveLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* p0);
public:

    /**
     * @note[short] MacOS: 0x502f30
     * @note[short] Windows: 0xf54c0
     * @note[short] Android
     */
    void storeUserName(int p0, int p1, gd::string p2);

    /**
     * @note[short] MacOS: 0x51fbd0
     * @note[short] Windows: 0x108540
     * @note[short] Android
     */
    void uploadComment(gd::string p0, CommentType p1, int p2, int p3);

    /**
     * @note[short] MacOS: 0x5017f0
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();
    
private:
    [[deprecated("GameLevelManager::createPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPageInfo(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::resetAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    void resetAllTimers();
public:

    /**
     * @note[short] MacOS: 0x514480
     * @note[short] Android
     */
    void resetGauntlets();

    /**
     * @note[short] MacOS: 0x505b60
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::saveLocalScore not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLocalScore(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserNames not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserNames(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::submitUserInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void submitUserInfo();
public:

    /**
     * @note[short] MacOS: 0x5032f0
     * @note[short] Windows: 0xf56f0
     * @note[short] Android
     */
    gd::string tryGetUsername(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] MacOS: 0x50b9d0
     * @note[short] Windows: 0xf86a0
     * @note[short] Android
     */
    bool isFollowingUser(int p0);
    
private:
    [[deprecated("GameLevelManager::likeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int likeFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::markItemAsLiked not implemented")]]
    /**
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateUsernames not implemented")]]
    /**
     * @note[short] Android
     */
    void updateUsernames();
public:

    /**
     * @note[short] MacOS: 0x517ff0
     * @note[short] Windows: 0x1028a0
     * @note[short] Android
     */
    void updateUserScore();
    
private:
    [[deprecated("GameLevelManager::uploadLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasReportedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasReportedLevel(int p0);
public:

    /**
     * @note[short] MacOS: 0x50b1e0
     * @note[short] Windows: 0xf7fd0
     * @note[short] Android
     */
    void limitSavedLevels();
    
private:
    [[deprecated("GameLevelManager::parseRestoreData not implemented")]]
    /**
     * @note[short] Android
     */
    void parseRestoreData(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x50a910
     * @note[short] Android
     */
    void resetTimerForKey(char const* p0);
    
private:
    [[deprecated("GameLevelManager::storeUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GameLevelManager::verifyLevelState not implemented")]]
    /**
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteServerLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteServerLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedList not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::itemIDFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::messageWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void messageWasRemoved(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::purgeUnusedLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void purgeUnusedLevels();
public:
    
private:
    [[deprecated("GameLevelManager::readFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void readFriendRequest(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::requestUserAccess not implemented")]]
    /**
     * @note[short] Android
     */
    void requestUserAccess();
public:

    /**
     * @note[short] MacOS: 0x505dd0
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x509d50
     * @note[short] Android
     */
    void storeSearchResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
    
private:
    [[deprecated("GameLevelManager::suggestLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    void suggestLevelStars(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::updateDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDescription(int p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::updateLevelOrders not implemented")]]
    /**
     * @note[short] Windows: 0xf68d0
     * @note[short] Android
     */
    void updateLevelOrders();
public:

    /**
     * @note[short] MacOS: 0x51ce90
     * @note[short] Android
     */
    void uploadUserMessage(int p0, gd::string p1, gd::string p2);

    /**
     * @note[short] MacOS: 0x503170
     * @note[short] Windows: 0xf5610
     * @note[short] Android
     */
    gd::string userNameForUserID(int p0);

    /**
     * @note[short] MacOS: 0x5037f0
     * @note[short] Android
     */
    int accountIDForUserID(int p0);

    /**
     * @note[short] MacOS: 0x514460
     * @note[short] Android
     */
    bool areGauntletsLoaded();
    
private:
    [[deprecated("GameLevelManager::cleanupDailyLevels not implemented")]]
    /**
     * @note[short] Windows: 0xf8430
     * @note[short] Android
     */
    void cleanupDailyLevels();
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevels not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevels(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x507520
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetScores(gd::string p0, GJScoreType p1);

    /**
     * @note[short] MacOS: 0x502340
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();
    
private:
    [[deprecated("GameLevelManager::deleteLevelComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevelComment(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x51d450
     * @note[short] Android
     */
    void deleteUserMessages(GJUserMessage* p0, cocos2d::CCArray* p1, bool p2);
    
private:
    [[deprecated("GameLevelManager::hasDownloadedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedLevel(int p0);
public:

    /**
     * @note[short] MacOS: 0x516a60
     * @note[short] Android
     */
    bool hasRatedLevelStars(int p0);

    /**
     * @note[short] MacOS: 0x51d940
     * @note[short] Windows: 0x106ad0
     * @note[short] Android
     */
    void invalidateMessages(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x5227f0
     * @note[short] Windows: 0x10c630
     * @note[short] Android
     */
    void invalidateRequests(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x5246b0
     * @note[short] Android
     */
    void invalidateUserList(UserListType p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::pageFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int pageFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::performNetworkTest not implemented")]]
    /**
     * @note[short] Windows: 0xf2e10
     * @note[short] Android
     */
    void performNetworkTest();
public:

    /**
     * @note[short] MacOS: 0x4f3510
     * @note[short] Windows: 0xf2f80
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] MacOS: 0x50a630
     * @note[short] Windows: 0xf7a80
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
    
private:
    [[deprecated("GameLevelManager::removeUserFromList not implemented")]]
    /**
     * @note[short] Android
     */
    void removeUserFromList(int p0, UserListType p1);
public:
    
private:
    [[deprecated("GameLevelManager::specialFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int specialFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x503980
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x51fb60
     * @note[short] Windows: 0x108420
     * @note[short] Android
     */
    void uploadLevelComment(int p0, gd::string p1, int p2);

    /**
     * @note[short] MacOS: 0x5037b0
     * @note[short] Android
     */
    int userIDForAccountID(int p0);

    /**
     * @note[short] MacOS: 0x522b50
     * @note[short] Android
     */
    void acceptFriendRequest(int p0, int p1);

    /**
     * @note[short] MacOS: 0x50c280
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();
    
private:
    [[deprecated("GameLevelManager::deleteSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* p0);
public:
    
private:
    [[deprecated("GameLevelManager::downloadUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadUserMessage(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::hasLikedAccountItem not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsReported not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsReported(int p0);
public:

    /**
     * @note[short] Out of line
     */
    void resetStoredUserInfo(int id);
    
private:
    [[deprecated("GameLevelManager::resetStoredUserList not implemented")]]
    /**
     * @note[short] Android
     */
    void resetStoredUserList(UserListType p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeCommentsResult not implemented")]]
    /**
     * @note[short] Android
     */
    void storeCommentsResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
public:
    
private:
    [[deprecated("GameLevelManager::uploadFriendRequest not implemented")]]
    /**
     * @note[short] Windows: 0x109f10
     * @note[short] Android
     */
    void uploadFriendRequest(int p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x510460
     * @note[short] Android
     */
    gd::string writeSpecialFilters(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::createAndGetMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetMapPacks(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteAccountComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteAccountComment(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::deleteFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::markListAsDownloaded not implemented")]]
    /**
     * @note[short] Android
     */
    void markListAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeDelimiterChars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeDelimiterChars(gd::string p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x51f580
     * @note[short] Windows: 0x107b10
     * @note[short] Android
     */
    void resetAccountComments(int p0);

    /**
     * @note[short] MacOS: 0x5270e0
     * @note[short] Windows: 0x10f810
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType p0);

    /**
     * @note[short] MacOS: 0x526fc0
     * @note[short] Android
     */
    void storeDailyLevelState(int p0, int p1, GJTimedLevelType p2);
    
private:
    [[deprecated("GameLevelManager::updateSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* p0);
public:

    /**
     * @note[short] MacOS: 0x5209a0
     * @note[short] Windows: 0x1084b0
     * @note[short] Android
     */
    void uploadAccountComment(gd::string p0);

    /**
     * @note[short] MacOS: 0x5037d0
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteServerLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteServerLevelList(int p0);
public:

    /**
     * @note[short] MacOS: 0x525520
     * @note[short] Windows: 0x10d7f0
     * @note[short] Android
     */
    bool hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::levelIDFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsDownloaded not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedStars not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsRatedStars(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessageReply(int p0, GJUserMessage* p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelLists(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x5221e0
     * @note[short] Android
     */
    void deleteSentFriendRequest(int p0);
    
private:
    [[deprecated("GameLevelManager::friendRequestWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void friendRequestWasRemoved(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x527120
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::createAndGetCommentsFull not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetCommentsFull(gd::string p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetLevelComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::levelIDFromPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x51bce0
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int p0);
    
private:
    [[deprecated("GameLevelManager::createAndGetAccountComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetAccountComments(gd::string p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x520a10
     * @note[short] Windows: 0x1091b0
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int p0, CommentKeyType p1);
    
private:
    [[deprecated("GameLevelManager::processOnDownloadLevelCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void processOnDownloadLevelCompleted(gd::string p0, gd::string p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::removeLevelDownloadedKeysFromDict not implemented")]]
    /**
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::banUser not implemented")]]
    /**
     * @note[short] Android
     */
    void banUser(int p0);
public:

    /**
     * @note[short] MacOS: 0x4f36d0
     * @note[short] Windows: 0xf3220
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GameLevelManager::likeItem not implemented")]]
    /**
     * @note[short] Android
     */
    void likeItem(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] MacOS: 0x523a60
     * @note[short] Android
     */
    void blockUser(int p0);
    
private:
    [[deprecated("GameLevelManager::rateDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void rateDemon(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::rateStars not implemented")]]
    /**
     * @note[short] Android
     */
    void rateStars(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x5094a0
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x501010
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(24);
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_GLM21;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_dailyIDUnk;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_weeklyIDUnk;
    int m_eventTimeLeft;
    int m_eventID;
    int m_eventIDUnk;
    cocos2d::CCDictionary* m_gauntletLevels;
    gd::map<gd::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_unkDict24;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    gd::string m_unkStr1;
    gd::string m_unkStr2;
    LeaderboardState m_leaderboardState;
    bool m_unkEditLevelLayerOnBack;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    void* m_unkDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    int m_unkDownload;
private:
    gd::string m_unkStr3;
public:
private:
    cocos2d::CCString* m_unkStr4;
public:
};
