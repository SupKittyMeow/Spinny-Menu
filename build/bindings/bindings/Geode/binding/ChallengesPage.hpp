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
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x37aa70
     * @note[short] Android
     */
    static ChallengesPage* create();

    /**
     * @note[short] MacOS: 0x37b610
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ChallengesPage::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots();
public:

    /**
     * @note[short] MacOS: 0x37b650
     * @note[short] Android
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("ChallengesPage::exitNodeAtSlot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitNodeAtSlot(int p0, float p1);
public:
    
private:
    [[deprecated("ChallengesPage::tryGetChallenges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetChallenges();
public:

    /**
     * @note[short] MacOS: 0x37b890
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);
    
private:
    [[deprecated("ChallengesPage::claimItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);
public:

    /**
     * @note[short] MacOS: 0x37abe0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x37c280
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x37c1f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x37c050
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x37c1d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x37bb50
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFinished();

    /**
     * @note[short] MacOS: 0x37be60
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFailed();

    /**
     * @note[short] MacOS: 0x37c3f0
     * @note[short] Android
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
