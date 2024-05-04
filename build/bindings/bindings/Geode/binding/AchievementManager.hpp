#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)
    
private:
    [[deprecated("AchievementManager::getAllAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievements();
public:

    /**
     * @note[short] MacOS: 0x746b10
     * @note[short] Android
     */
    TodoReturn getAchievementsWithID(char const* p0);
    
private:
    [[deprecated("AchievementManager::getAchievementRewardDict not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAchievementRewardDict();
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievementsSorted not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievementsSorted(bool p0);
public:

    /**
     * @note[short] MacOS: 0x7467f0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("AchievementManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] MacOS: 0x6eed90
     * @note[short] Windows: 0x9ac0
     * @note[short] Android
     */
    TodoReturn sharedState();
    
private:
    [[deprecated("AchievementManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::addAchievement not implemented")]]
    /**
     * @note[short] Windows: 0x9bc0
     * @note[short] Android
     */
    TodoReturn addAchievement(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, int p5);
public:
    
private:
    [[deprecated("AchievementManager::resetAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievement(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("AchievementManager::resetAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievements();
public:
    
private:
    [[deprecated("AchievementManager::checkAchFromUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkAchFromUnlock(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::percentageForCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn percentageForCount(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x7469d0
     * @note[short] Android
     */
    bool isAchievementEarned(char const* p0);

    /**
     * @note[short] MacOS: 0x746c60
     * @note[short] Android
     */
    TodoReturn limitForAchievement(gd::string p0);

    /**
     * @note[short] MacOS: 0x746d00
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
    
private:
    [[deprecated("AchievementManager::addManualAchievements not implemented")]]
    /**
     * @note[short] Windows: 0xf74a
     * @note[short] Android
     */
    TodoReturn addManualAchievements();
public:
    
private:
    [[deprecated("AchievementManager::areAchievementsEarned not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0x7469f0
     * @note[short] Android
     */
    TodoReturn percentForAchievement(char const* p0);
    
private:
    [[deprecated("AchievementManager::isAchievementAvailable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isAchievementAvailable(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievementWithID(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::reportAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("AchievementManager::storeAchievementUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeAchievementUnlocks();
public:
    
private:
    [[deprecated("AchievementManager::reportPlatformAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reportPlatformAchievementWithID(char const* p0, int p1);
public:
    
private:
    [[deprecated("AchievementManager::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:

    /**
     * @note[short] MacOS: 0x6eeea0
     * @note[short] Android
     */
    virtual bool init();
};
