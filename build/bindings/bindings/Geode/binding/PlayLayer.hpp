#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "CCCircleWaveDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"
#include "DialogDelegate.hpp"

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] MacOS: 0xa5d30
     * @note[short] Windows: 0x2d68f0
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* p0, bool p1, bool p2);

    /**
     * @note[short] Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] MacOS: 0xa5db0
     * @note[short] Windows: 0x2d69a0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1, bool p2);

    /**
     * @note[short] MacOS: 0xa5920
     * @note[short] Windows: 0x2d6580
     * @note[short] Android
     */
     ~PlayLayer();
    
private:
    [[deprecated("PlayLayer::getEndPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEndPosition();
public:
    
private:
    [[deprecated("PlayLayer::getRelativeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayLayer::getTempMilliTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTempMilliTime();
public:

    /**
     * @note[short] MacOS: 0xb3970
     * @note[short] Android
     */
    float getCurrentPercent();

    /**
     * @note[short] MacOS: 0xb6b70
     * @note[short] Windows: 0x2e3000
     * @note[short] Android
     */
    CheckpointObject* getLastCheckpoint();
    
private:
    [[deprecated("PlayLayer::getRelativeModNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeModNew(cocos2d::CCPoint p0, float p1, float p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("PlayLayer::getCurrentPercentInt not implemented")]]
    /**
     * @note[short] Windows: 0x2e09e0
     * @note[short] Android
     */
    int getCurrentPercentInt();
public:

    /**
     * @note[short] MacOS: 0xad390
     * @note[short] Windows: 0x2e5650
     * @note[short] Android
     */
    void onQuit();
    
private:
    [[deprecated("PlayLayer::playReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playReplay(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0xac8d0
     * @note[short] Windows: 0x2e42b0
     * @note[short] Android
     */
    void resetLevel();

    /**
     * @note[short] MacOS: 0xad570
     * @note[short] Windows: 0x2e5570
     * @note[short] Android
     */
    void startMusic();
    
private:
    [[deprecated("PlayLayer::colorObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorObject(int p0, cocos2d::_ccColor3B p1);
public:
    
private:
    [[deprecated("PlayLayer::commitJumps not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commitJumps();
public:
    
private:
    [[deprecated("PlayLayer::shouldBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);
public:

    /**
     * @note[short] MacOS: 0xaf2e0
     * @note[short] Windows: 0x2d9100
     * @note[short] Android
     */
    void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
    
private:
    [[deprecated("PlayLayer::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayLayer::canPauseGame not implemented")]]
    /**
     * @note[short] Android
     */
    bool canPauseGame();
public:

    /**
     * @note[short] MacOS: 0xad230
     * @note[short] Windows: 0x2e5480
     * @note[short] Android
     */
    void prepareMusic(bool p0);
    
private:
    [[deprecated("PlayLayer::showEndLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void showEndLayer();
public:
    
private:
    [[deprecated("PlayLayer::addToGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    void addToGroupOld(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0xad6d0
     * @note[short] Windows: 0x2d7f30
     * @note[short] Android
     */
    void levelComplete();
    
private:
    [[deprecated("PlayLayer::spawnFirework not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnFirework();
public:
    
private:
    [[deprecated("PlayLayer::stopRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRecording();
public:

    /**
     * @note[short] MacOS: 0xb8700
     * @note[short] Windows: 0x2e4e50
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS: 0xb53a0
     * @note[short] Windows: 0x2e2880
     * @note[short] Android
     */
    CheckpointObject* markCheckpoint();
    
private:
    [[deprecated("PlayLayer::showRetryLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void showRetryLayer();
public:
    
private:
    [[deprecated("PlayLayer::startRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecording();
public:
    
private:
    [[deprecated("PlayLayer::tryStartRecord not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryStartRecord();
public:
    
private:
    [[deprecated("PlayLayer::updateAttempts not implemented")]]
    /**
     * @note[short] Windows: 0x2e4cc0
     * @note[short] Android
     */
    TodoReturn updateAttempts();
public:
    
private:
    [[deprecated("PlayLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeWarp(EffectGameObject* p0, float p1);
public:
    
private:
    [[deprecated("PlayLayer::queueCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueCheckpoint();
public:

    /**
     * @note[short] MacOS: 0xb74f0
     * @note[short] Windows: 0x2e27d0
     * @note[short] Android
     */
    void storeCheckpoint(CheckpointObject* p0);

    /**
     * @note[short] MacOS: 0xa96e0
     * @note[short] Windows: 0x2dfe30
     * @note[short] Android
     */
    TodoReturn updateInfoLabel();
    
private:
    [[deprecated("PlayLayer::applyEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyEnterEffect(GameObject* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("PlayLayer::checkpointWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkpointWithID(int p0);
public:
    
private:
    [[deprecated("PlayLayer::createCheckpoint not implemented")]]
    /**
     * @note[short] Windows: 0x2e1a20
     * @note[short] Android
     */
    CheckpointObject* createCheckpoint();
public:
    
private:
    [[deprecated("PlayLayer::delayedFullReset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn delayedFullReset();
public:
    
private:
    [[deprecated("PlayLayer::isGameplayActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isGameplayActive();
public:

    /**
     * @note[short] MacOS: 0xad440
     * @note[short] Windows: 0x2e5750
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS: 0xb7590
     * @note[short] Android
     */
    void removeCheckpoint(bool p0);

    /**
     * @note[short] MacOS: 0xb88d0
     * @note[short] Windows: 0x2e5160
     * @note[short] Android
     */
    void resumeAndRestart(bool p0);

    /**
     * @note[short] MacOS: 0xae690
     * @note[short] Windows: 0x2d8770
     * @note[short] Android
     */
    void showCompleteText();

    /**
     * @note[short] MacOS: 0xad660
     * @note[short] Windows: 0x2d7ec0
     * @note[short] Android
     */
    void startGameDelayed();

    /**
     * @note[short] MacOS: 0xb4c20
     * @note[short] Windows: 0x2e4200
     * @note[short] Android
     */
    void delayedResetLevel();

    /**
     * @note[short] MacOS: 0xab730
     * @note[short] Windows: 0x2df1e0
     * @note[short] Android
     */
    void loadDefaultColors();

    /**
     * @note[short] MacOS: 0xa7210
     * @note[short] Windows: 0x2d71b0
     * @note[short] Android
     */
    void setupHasCompleted();
    
private:
    [[deprecated("PlayLayer::takeStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn takeStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleGhostEffect not implemented")]]
    /**
     * @note[short] Windows: 0x2d20d0
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(int p0);
public:

    /**
     * @note[short] MacOS: 0xab590
     * @note[short] Windows: 0x2df7a0
     * @note[short] Android
     */
    void updateProgressbar();

    /**
     * @note[short] MacOS: 0xb7690
     * @note[short] Windows: 0x2e28d0
     * @note[short] Android
     */
    void loadFromCheckpoint(CheckpointObject* p0);

    /**
     * @note[short] MacOS: 0xb7640
     * @note[short] Android
     */
    CheckpointObject* loadLastCheckpoint();
    
private:
    [[deprecated("PlayLayer::removeFromGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    void removeFromGroupOld(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0xae230
     * @note[short] Android
     */
    void showCompleteEffect();
    
private:
    [[deprecated("PlayLayer::showTwoPlayerGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void showTwoPlayerGuide();
public:

    /**
     * @note[short] MacOS: 0xb81f0
     * @note[short] Windows: 0x2e4eb0
     * @note[short] Android
     */
    void togglePracticeMode(bool p0);

    /**
     * @note[short] MacOS: 0xa7f40
     * @note[short] Windows: 0x2dc8b0
     * @note[short] Android
     */
    void optimizeColorGroups();

    /**
     * @note[short] MacOS: 0xb8330
     * @note[short] Windows: 0x2e4210
     * @note[short] Android
     */
    void resetLevelFromStart();
    
private:
    [[deprecated("PlayLayer::compareStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn compareStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::updateScreenRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateScreenRotation(int p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
public:
    
private:
    [[deprecated("PlayLayer::gravityEffectFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityEffectFinished();
public:
    
private:
    [[deprecated("PlayLayer::loadActiveSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:

    /**
     * @note[short] MacOS: 0xa8130
     * @note[short] Windows: 0x2dcb10
     * @note[short] Android
     */
    TodoReturn optimizeOpacityGroups();

    /**
     * @note[short] MacOS: 0xaffb0
     * @note[short] Windows: 0x2da140
     * @note[short] Android
     */
    void playEndAnimationToPos(cocos2d::CCPoint p0);
    
private:
    [[deprecated("PlayLayer::saveActiveSaveObjects not implemented")]]
    /**
     * @note[short] Windows: 0x2e3d60
     * @note[short] Android
     */
    TodoReturn saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:

    /**
     * @note[short] MacOS: 0xa91b0
     * @note[short] Android
     */
    TodoReturn scanActiveSaveObjects();
    
private:
    [[deprecated("PlayLayer::startRecordingDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecordingDelayed();
public:

    /**
     * @note[short] MacOS: 0xb4d20
     * @note[short] Windows: 0x2e1470
     * @note[short] Android
     */
    TodoReturn updateEffectPositions();
    
private:
    [[deprecated("PlayLayer::applyCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyCustomEnterEffect(GameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0xb7ba0
     * @note[short] Android
     */
    TodoReturn loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);
    
private:
    [[deprecated("PlayLayer::saveDynamicSaveObjects not implemented")]]
    /**
     * @note[short] Windows: 0x2e38c0
     * @note[short] Android
     */
    TodoReturn saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);
public:

    /**
     * @note[short] MacOS: 0xa8320
     * @note[short] Android
     */
    TodoReturn scanDynamicSaveObjects();

    /**
     * @note[short] MacOS: 0xb0ef0
     * @note[short] Android
     */
    TodoReturn processLoadedMoveActions();
    
private:
    [[deprecated("PlayLayer::toggleBGEffectVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleBGEffectVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::prepareCreateObjectsFromSetup not implemented")]]
    /**
     * @note[short] Windows: 0x2dafd0
     * @note[short] Android
     */
    void prepareCreateObjectsFromSetup(gd::string& p0);
public:

    /**
     * @note[short] MacOS: 0xa69f0
     * @note[short] Windows: 0x2db250
     * @note[short] Android
     */
    void processCreateObjectsFromSetup();

    /**
     * @note[short] MacOS: 0xb0a50
     * @note[short] Windows: 0x2dbab0
     * @note[short] Android
     */
    void createObjectsFromSetupFinished();

    /**
     * @note[short] MacOS: 0xb0570
     * @note[short] Windows: 0x2da920
     * @note[short] Android
     */
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] MacOS: 0xa5c80
     * @note[short] Windows: 0x2d68a0
     * @note[short] Android
     */
    cocos2d::CCScene* scene(GJGameLevel* p0, bool p1, bool p2);

    /**
     * @note[short] MacOS: 0xb8a50
     * @note[short] Android
     */
    void resume();

    /**
     * @note[short] MacOS: 0xb4ab0
     * @note[short] Windows: 0x2e12d0
     * @note[short] Android
     */
    void showHint();

    /**
     * @note[short] MacOS: 0xb4cc0
     * @note[short] Android
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] MacOS: 0xabae0
     * @note[short] Windows: 0x2dbd30
     * @note[short] Android
     */
    void addObject(GameObject* p0);

    /**
     * @note[short] MacOS: 0xb8080
     * @note[short] Windows: 0x2e40c0
     * @note[short] Android
     */
    void fullReset();

    /**
     * @note[short] MacOS: 0xb8790
     * @note[short] Windows: 0x2e4fc0
     * @note[short] Android
     */
    void pauseGame(bool p0);

    /**
     * @note[short] MacOS: 0xad330
     * @note[short] Windows: 0x2d7e80
     * @note[short] Android
     */
    void startGame();
    
private:
    [[deprecated("PlayLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     * @note[short] Windows: 0x2e58e0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();
public:
    
private:
    [[deprecated("PlayLayer::onExit not implemented")]]
    /**
     * @note[short] Windows: 0x2e5910
     * @note[short] Android
     */
    virtual void onExit();
public:

    /**
     * @note[short] MacOS: 0xb4df0
     * @note[short] Windows: 0x2e1560
     * @note[short] Android
     */
    virtual void postUpdate(float p0);
    
private:
    [[deprecated("PlayLayer::checkForEnd not implemented")]]
    /**
     * @note[short] Windows: 0x2e1810
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();
public:
    
private:
    [[deprecated("PlayLayer::testTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn testTime();
public:
    
private:
    [[deprecated("PlayLayer::updateVerifyDamage not implemented")]]
    /**
     * @note[short] Windows: 0x2e18f0
     * @note[short] Android
     */
    virtual TodoReturn updateVerifyDamage();
public:
    
private:
    [[deprecated("PlayLayer::updateAttemptTime not implemented")]]
    /**
     * @note[short] Windows: 0x2e1970
     * @note[short] Android
     */
    virtual TodoReturn updateAttemptTime(float p0);
public:

    /**
     * @note[short] MacOS: 0xb10e0
     * @note[short] Windows: 0x2dcf70
     * @note[short] Android
     */
    virtual void updateVisibility(float p0);
    
private:
    [[deprecated("PlayLayer::opacityForObject not implemented")]]
    /**
     * @note[short] Windows: 0x2ddc80
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::updateColor not implemented")]]
    /**
     * @note[short] Windows: 0x2df440
     * @note[short] Android
     */
    virtual TodoReturn updateColor(cocos2d::_ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
public:
    
private:
    [[deprecated("PlayLayer::activateEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0xb0480
     * @note[short] Windows: 0x2da810
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);
    
private:
    [[deprecated("PlayLayer::toggleGlitter not implemented")]]
    /**
     * @note[short] Windows: 0x2e0990
     * @note[short] Android
     */
    virtual TodoReturn toggleGlitter(bool p0);
public:

    /**
     * @note[short] MacOS: 0xb40f0
     * @note[short] Windows: 0x2e0a90
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS: 0xb3f40
     * @note[short] Windows: 0x2e0840
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);
    
private:
    [[deprecated("PlayLayer::toggleMGVisibility not implemented")]]
    /**
     * @note[short] Windows: 0x2e08c0
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::toggleHideAttempts not implemented")]]
    /**
     * @note[short] Windows: 0x2e0910
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::timeForPos not implemented")]]
    /**
     * @note[short] Windows: 0x2e0740
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);
public:
    
private:
    [[deprecated("PlayLayer::posForTime not implemented")]]
    /**
     * @note[short] Windows: 0x2e07b0
     * @note[short] Android
     */
    virtual float posForTime(float p0);
public:
    
private:
    [[deprecated("PlayLayer::resetSPTriggered not implemented")]]
    /**
     * @note[short] Windows: 0x2e0800
     * @note[short] Android
     */
    virtual void resetSPTriggered();
public:
    
private:
    [[deprecated("PlayLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Windows: 0x1b5590
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);
public:
    
private:
    [[deprecated("PlayLayer::playGravityEffect not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::manualUpdateObjectColors not implemented")]]
    /**
     * @note[short] Windows: 0x2ddca0
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::checkpointActivated not implemented")]]
    /**
     * @note[short] Windows: 0x2e1a00
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::flipArt not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);
public:

    /**
     * @note[short] MacOS: 0xb39e0
     * @note[short] Android
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);
    
private:
    [[deprecated("PlayLayer::checkSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();
public:

    /**
     * @note[short] MacOS: 0xb3bb0
     * @note[short] Android
     */
    virtual void toggleProgressbar();
    
private:
    [[deprecated("PlayLayer::toggleInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("PlayLayer::removeAllCheckpoints not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();
public:
    
private:
    [[deprecated("PlayLayer::toggleMusicInPractice not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    
private:
    [[deprecated("PlayLayer::currencyWillExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
public:
    
private:
    [[deprecated("PlayLayer::circleWaveWillBeRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave* p0);
public:
    
private:
    [[deprecated("PlayLayer::dialogClosed not implemented")]]
    /**
     * @note[short] Windows: 0x2e12b0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
public:
    GEODE_PAD(44);
    cocos2d::CCArray* m_coinArray;
    GEODE_PAD(200);
    cocos2d::CCArray* m_circleWaveArray;
    GEODE_PAD(24);
    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    void* m_unkptr0;
    cocos2d::CCSprite* m_progressBar;
    GEODE_PAD(256);
    cocos2d::CCDictionary* m_colorKeyDict;
    gd::vector<int> m_keyColors;
    gd::vector<int> m_keyOpacities;
    gd::vector<int> m_keyPulses;
    int m_nextColorKey;
    GEODE_PAD(36);
};
