#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)
    
private:
    [[deprecated("GJChallengeItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJChallengeItem* create(GJChallengeType p0, int p1, int p2, int p3, gd::string p4);
public:

    /**
     * @note[short] MacOS: 0x8b120
     * @note[short] Android
     */
    static GJChallengeItem* create();
    
private:
    [[deprecated("GJChallengeItem::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJChallengeType p0, int p1, int p2, int p3, gd::string p4);
public:

    /**
     * @note[short] MacOS: 0x8b3c0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJChallengeItem::incrementCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementCount(int p0);
public:

    /**
     * @note[short] MacOS: 0x8b350
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x8af60
     * @note[short] Android
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] MacOS: 0x8b520
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x8b5f0
     * @note[short] Android
     */
    virtual bool canEncode();
    GJChallengeType m_challengeType;
    geode::SeedValueSRV m_count;
    geode::SeedValueSRV m_reward;
    geode::SeedValueSRV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    gd::string m_name;
};
