#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "LeaderboardManagerDelegate";
    
private:
    [[deprecated("LeaderboardManagerDelegate::updateUserScoreFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();
public:
    
private:
    [[deprecated("LeaderboardManagerDelegate::updateUserScoreFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();
public:
    
private:
    [[deprecated("LeaderboardManagerDelegate::loadLeaderboardFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("LeaderboardManagerDelegate::loadLeaderboardFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);
public:
};
