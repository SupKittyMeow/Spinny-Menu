#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x66050
     * @note[short] Android
     */
    TodoReturn getItemKey(int p0, int p1);

    /**
     * @note[short] MacOS: 0x6cd80
     * @note[short] Windows: 0x16d350
     * @note[short] Android
     */
    gd::string getLevelKey(int p0, bool p1, bool p2, bool p3);

    /**
     * @note[short] MacOS: 0x6cd20
     * @note[short] Windows: 0x16d2e0
     * @note[short] Android
     */
    gd::string getLevelKey(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x73750
     * @note[short] Windows: 0x170bd0
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardKey(GJRewardType p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMapPackKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardItem(GJRewardType p0);
public:

    /**
     * @note[short] MacOS: 0x6fcd0
     * @note[short] Windows: 0x16f440
     * @note[short] Android
     */
    TodoReturn getCurrencyKey(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x6c690
     * @note[short] Android
     */
    TodoReturn getStatFromKey(StatKey p0);
    
private:
    [[deprecated("GameStatsManager::getBaseCurrency not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBaseCurrency(int p0, bool p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x706c0
     * @note[short] Android
     */
    TodoReturn getBaseDiamonds(int p0);
    
private:
    [[deprecated("GameStatsManager::getStarLevelKey not implemented")]]
    /**
     * @note[short] Windows: 0x16d4e0
     * @note[short] Android
     */
    TodoReturn getStarLevelKey(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x706e0
     * @note[short] Android
     */
    TodoReturn getBonusDiamonds(int p0);
    
private:
    [[deprecated("GameStatsManager::getDailyLevelKey not implemented")]]
    /**
     * @note[short] Windows: 0x171530
     * @note[short] Android
     */
    TodoReturn getDailyLevelKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getDemonLevelKey not implemented")]]
    /**
     * @note[short] Windows: 0x16d480
     * @note[short] Android
     */
    TodoReturn getDemonLevelKey(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getListRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getListRewardKey(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getPathRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPathRewardKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getSecretCoinKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretCoinKey(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x77e40
     * @note[short] Android
     */
    int getItemUnlockState(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x73830
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getCompletedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompletedMapPacks();
public:

    /**
     * @note[short] MacOS: 0x78490
     * @note[short] Android
     */
    gd::string getGauntletRewardKey(int p0);
    
private:
    [[deprecated("GameStatsManager::getNextVideoAdReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextVideoAdReward();
public:
    
private:
    [[deprecated("GameStatsManager::getSecretChestForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretChestForItem(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getItemUnlockStateLite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItemUnlockStateLite(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x6fde0
     * @note[short] Windows: 0x16f560
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getRewardForSecretChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardForSpecialChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSpecialChest(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::getCollectedCoinsForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x16d240
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialChestKeyForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialChestKeyForItem(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS: 0x74b00
     * @note[short] Android
     */
    int getTotalCollectedCurrency();

    /**
     * @note[short] MacOS: 0x757b0
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();

    /**
     * @note[short] MacOS: 0x6ffb0
     * @note[short] Windows: 0x16f680
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x70720
     * @note[short] Android
     */
    TodoReturn getAwardedDiamondsForLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x73910
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getSpecialRewardDescription not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialRewardDescription(gd::string p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x789e0
     * @note[short] Android
     */
    TodoReturn getSpecialUnlockDescription(int p0, UnlockType p1, bool p2);

    /**
     * @note[short] MacOS: 0x66800
     * @note[short] Windows: 0x168680
     * @note[short] Android
     */
    int getStat(char const* p0);
    
private:
    [[deprecated("GameStatsManager::setStatIfHigher not implemented")]]
    /**
     * @note[short] Android
     */
    void setStatIfHigher(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::setStarsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void setStarsForMapPack(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x66a40
     * @note[short] Windows: 0x168760
     * @note[short] Android
     */
    void setStat(char const* p0, int p1);

    /**
     * @note[short] MacOS: 0x89460
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GameStatsManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] MacOS: 0x6f490
     * @note[short] Windows: 0x16ecd0
     * @note[short] Android
     */
    bool hasUserCoin(char const* p0);

    /**
     * @note[short] MacOS: 0x5d0a0
     * @note[short] Windows: 0x165df0
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] MacOS: 0x662c0
     * @note[short] Windows: 0x167fb0
     * @note[short] Android
     */
    TodoReturn addStoreItem(int p0, int p1, int p2, int p3, ShopType p4);
    
private:
    [[deprecated("GameStatsManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Windows: 0x17de70
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoin(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::purchaseItem not implemented")]]
    /**
     * @note[short] Windows: 0x168160
     * @note[short] Android
     */
    TodoReturn purchaseItem(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::resetPreSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetPreSync();
public:

    /**
     * @note[short] MacOS: 0x6cc30
     * @note[short] Windows: 0x16efb0
     * @note[short] Android
     */
    bool hasSecretCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     * @note[short] Windows: 0x1682c0
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x78170
     * @note[short] Windows: 0x173f90
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType p0, int p1);
    
private:
    [[deprecated("GameStatsManager::storeUserCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeUserCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::awardSecretKey not implemented")]]
    /**
     * @note[short] Windows: 0x17d860
     * @note[short] Android
     */
    TodoReturn awardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::completedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x6b670
     * @note[short] Windows: 0x173d10
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType p0, int p1);
    
private:
    [[deprecated("GameStatsManager::isPathUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::resetUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetUserCoins();
public:
    
private:
    [[deprecated("GameStatsManager::claimListReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::removeChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::restorePostSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restorePostSync();
public:
    
private:
    [[deprecated("GameStatsManager::starsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn starsForMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::storeSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSecretCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::uncompleteLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn uncompleteLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockPathChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockPathChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::verifyUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyUserCoins();
public:

    /**
     * @note[short] MacOS: 0x3087a0
     * @note[short] Android
     */
    TodoReturn accountIDForIcon(int p0, UnlockType p1);

    /**
     * @note[short] MacOS: 0x70f00
     * @note[short] Android
     */
    TodoReturn areRewardsLoaded();
    
private:
    [[deprecated("GameStatsManager::checkAchievement not implemented")]]
    /**
     * @note[short] Windows: 0x168870
     * @note[short] Android
     */
    TodoReturn checkAchievement(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x5d4c0
     * @note[short] Android
     */
    TodoReturn createStoreItems();
    
private:
    [[deprecated("GameStatsManager::preSaveGameStats not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSaveGameStats();
public:
    
private:
    [[deprecated("GameStatsManager::recountUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recountUserCoins(bool p0);
public:

    /**
     * @note[short] MacOS: 0x308880
     * @note[short] Android
     */
    TodoReturn setupIconCredits();
    
private:
    [[deprecated("GameStatsManager::storeRewardState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeRewardState(GJRewardType p0, int p1, int p2, gd::string p3);
public:

    /**
     * @note[short] MacOS: 0x78200
     * @note[short] Windows: 0x174030
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType p0, int p1, bool p2);
    
private:
    [[deprecated("GameStatsManager::updateActivePath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActivePath(StatKey p0);
public:

    /**
     * @note[short] MacOS: 0x885d0
     * @note[short] Android
     */
    TodoReturn countSecretChests(GJRewardType p0);

    /**
     * @note[short] Out of line
     */
    bool hasCompletedLevel(GJGameLevel* level);
    
private:
    [[deprecated("GameStatsManager::isSecretCoinValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoinValid(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::postLoadGameStats not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postLoadGameStats();
public:
    
private:
    [[deprecated("GameStatsManager::shopTypeForItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shopTypeForItemID(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockSecretChest not implemented")]]
    /**
     * @note[short] Windows: 0x1780b0
     * @note[short] Android
     */
    TodoReturn unlockSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::checkCoinsForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCoinsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::collectVideoReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectVideoReward(int p0);
public:

    /**
     * @note[short] MacOS: 0x6d730
     * @note[short] Windows: 0x16d970
     * @note[short] Android
     */
    TodoReturn completedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x6f3c0
     * @note[short] Windows: 0x16ee40
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::incrementChallenge not implemented")]]
    /**
     * @note[short] Windows: 0x170e40
     * @note[short] Android
     */
    TodoReturn incrementChallenge(GJChallengeType p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x73130
     * @note[short] Android
     */
    TodoReturn storeChallengeTime(int p0);
    
private:
    [[deprecated("GameStatsManager::unlockSpecialChest not implemented")]]
    /**
     * @note[short] Windows: 0x177940
     * @note[short] Android
     */
    TodoReturn unlockSpecialChest(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x731b0
     * @note[short] Android
     */
    TodoReturn areChallengesLoaded();
    
private:
    [[deprecated("GameStatsManager::completedDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedDailyLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x6d5a0
     * @note[short] Windows: 0x16d880
     * @note[short] Android
     */
    TodoReturn completedDemonLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::hasCompletedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::incrementActivePath not implemented")]]
    /**
     * @note[short] Windows: 0x168560
     * @note[short] Android
     */
    TodoReturn incrementActivePath(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::isPathChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPathChestUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::isStoreItemUnlocked not implemented")]]
    /**
     * @note[short] Windows: 0x168080
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int p0);
public:

    /**
     * @note[short] MacOS: 0x75ce0
     * @note[short] Android
     */
    TodoReturn recountSpecialStats();

    /**
     * @note[short] MacOS: 0x73190
     * @note[short] Android
     */
    TodoReturn resetChallengeTimer();

    /**
     * @note[short] MacOS: 0x6c280
     * @note[short] Android
     */
    TodoReturn trySelectActivePath();
    
private:
    [[deprecated("GameStatsManager::unlockGauntletChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockGauntletChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::checkCoinAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCoinAchievement(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasClaimedListReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasClaimedListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::shouldAwardSecretKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldAwardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::storePendingUserCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storePendingUserCoin(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x308810
     * @note[short] Windows: 0x15c8b0
     * @note[short] Android
     */
    TodoReturn usernameForAccountID(int p0);

    /**
     * @note[short] MacOS: 0x70180
     * @note[short] Windows: 0x16f850
     * @note[short] Android
     */
    TodoReturn awardCurrencyForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::awardDiamondsForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x16fd70
     * @note[short] Android
     */
    TodoReturn awardDiamondsForLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] Out of line
     */
    bool hasCompletedMainLevel(int levelID);

    /**
     * @note[short] MacOS: 0x6d360
     * @note[short] Windows: 0x16d690
     * @note[short] Android
     */
    TodoReturn hasCompletedStarLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::isSecretChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::keyCostForSecretChest not implemented")]]
    /**
     * @note[short] Windows: 0x1781c0
     * @note[short] Android
     */
    TodoReturn keyCostForSecretChest(int p0);
public:

    /**
     * @note[short] MacOS: 0x73d60
     * @note[short] Android
     */
    TodoReturn processChallengeQueue(int p0);
    
private:
    [[deprecated("GameStatsManager::removeQueuedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeQueuedChallenge(int p0);
public:

    /**
     * @note[short] MacOS: 0x5fb50
     * @note[short] Android
     */
    void createSecretChestItems();

    /**
     * @note[short] MacOS: 0x741b0
     * @note[short] Windows: 0x1715b0
     * @note[short] Android
     */
    TodoReturn hasCompletedDailyLevel(int p0);
    
private:
    [[deprecated("GameStatsManager::hasCompletedDemonLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedDemonLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasRewardBeenCollected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasRewardBeenCollected(GJRewardType p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x77d60
     * @note[short] Windows: 0x177860
     * @note[short] Android
     */
    bool isSpecialChestUnlocked(gd::string p0);

    /**
     * @note[short] MacOS: 0x5fca0
     * @note[short] Android
     */
    TodoReturn createSpecialChestItems();

    /**
     * @note[short] MacOS: 0x6d140
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int p0);

    /**
     * @note[short] MacOS: 0x77bc0
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int p0);

    /**
     * @note[short] MacOS: 0x79370
     * @note[short] Android
     */
    TodoReturn createSecretChestRewards();

    /**
     * @note[short] MacOS: 0x88630
     * @note[short] Android
     */
    TodoReturn countUnlockedSecretChests(GJRewardType p0);

    /**
     * @note[short] MacOS: 0x6d1c0
     * @note[short] Android
     */
    TodoReturn hasCompletedGauntletLevel(int p0);

    /**
     * @note[short] MacOS: 0x65480
     * @note[short] Android
     */
    TodoReturn generateItemUnlockableData();
    
private:
    [[deprecated("GameStatsManager::addSimpleSpecialChestReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSimpleSpecialChestReward(gd::string p0, UnlockType p1, int p2, bool p3);
public:
    
private:
    [[deprecated("GameStatsManager::addSpecialRewardDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void addSpecialRewardDescription(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameStatsManager::isSpecialChestLiteUnlockable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialChestLiteUnlockable(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x77560
     * @note[short] Android
     */
    TodoReturn removeErrorFromSpecialChests();

    /**
     * @note[short] MacOS: 0x77920
     * @note[short] Android
     */
    TodoReturn resetSpecialStatAchievements();
    
private:
    [[deprecated("GameStatsManager::markLevelAsCompletedAndClaimed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsCompletedAndClaimed(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::removeQueuedSecondaryChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeQueuedSecondaryChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::logCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logCoins();
public:
    
private:
    [[deprecated("GameStatsManager::tempClear not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tempClear();
public:

    /**
     * @note[short] MacOS: 0x5d410
     * @note[short] Android
     */
    virtual bool init();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::map<gd::string, gd::string> m_specialRewardDescriptions;
    gd::map<gd::string, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::map<int, int> m_playerStatsRandMap;
    gd::map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueSRV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    bool m_unkBoolIncrementStat;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<int, UnlockType> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    int m_activePath;
};
