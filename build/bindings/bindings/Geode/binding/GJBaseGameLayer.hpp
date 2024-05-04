#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Out of line
     */
    static GJBaseGameLayer* get();
    
private:
    [[deprecated("GJBaseGameLayer::getBumpMod not implemented")]]
    /**
     * @note[short] Windows: 0x19a5d0
     * @note[short] Android
     */
    TodoReturn getBumpMod(PlayerObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getItemValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItemValue(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMaxPortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMaxPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMinPortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMinPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSpecialKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialKey(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMinDistance not implemented")]]
    /**
     * @note[short] Windows: 0x1c0c90
     * @note[short] Android
     */
    TodoReturn getMinDistance(cocos2d::CCPoint p0, cocos2d::CCArray* p1, float p2, int p3);
public:

    /**
     * @note[short] MacOS: 0x10e1c0
     * @note[short] Android
     */
    TodoReturn getOtherPlayer(PlayerObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey not implemented")]]
    /**
     * @note[short] Windows: 0x1beb20
     * @note[short] Android
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getStaticGroup not implemented")]]
    /**
     * @note[short] Windows: 0x1a4f10
     * @note[short] Android
     */
    TodoReturn getStaticGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getStickyGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStickyGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroup(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundHeight(PlayerObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey2(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPortalTarget(TeleportPortalObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRecordString();
public:

    /**
     * @note[short] MacOS: 0x13eb50
     * @note[short] Android
     */
    float getModifiedDelta(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::getSavedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedPosition(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCapacityString not implemented")]]
    /**
     * @note[short] Windows: 0x1938e0
     * @note[short] Android
     */
    TodoReturn getCapacityString();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingKey(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getFollowSpeedVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFollowSpeedVal(GameObject* p0, int p1, int p2, float p3, float p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getOptimizedGroup not implemented")]]
    /**
     * @note[short] Windows: 0x1a4f70
     * @note[short] Android
     */
    TodoReturn getOptimizedGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayerButtonID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayerButtonID(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerMilli not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerMilli();
public:

    /**
     * @note[short] MacOS: 0x13bf90
     * @note[short] Android
     */
    TodoReturn getCameraEdgeValue(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getMoveTargetDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveTargetDelta(EffectGameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTargetPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPortalTargetPos(TeleportPortalObject* p0, GameObject* p1, PlayerObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingValue(float p0, int p1, float p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetFlyCameraY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetFlyCameraY(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCenterGroupObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCenterGroupObject(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSingleGroupObject not implemented")]]
    /**
     * @note[short] Windows: 0x1a4fd0
     * @note[short] Android
     */
    TodoReturn getSingleGroupObject(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroupOrigin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroupOrigin(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParentsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParentsString(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getScaledGroundHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScaledGroundHeight(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeightForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundHeightForMode(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerFullSeconds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerFullSeconds();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRotateCommandTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRotateCommandTargets(EnhancedTriggerObject* p0, GameObject*& p1, GameObject*& p2, GameObject*& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getActiveOrderSpawnObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveOrderSpawnObjects();
public:

    /**
     * @note[short] MacOS: 0x1097a0
     * @note[short] Windows: 0x1a4eb0
     * @note[short] Android
     */
    TodoReturn getGroup(int p0);

    /**
     * @note[short] MacOS: 0x129f80
     * @note[short] Android
     */
    void setGroupParent(GameObject* p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::setStartPosObject not implemented")]]
    /**
     * @note[short] Windows: 0x195fc0
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyRemap(EffectGameObject* p0, gd::vector<int> const& p1, gd::unordered_map<int, int>& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyShake not implemented")]]
    /**
     * @note[short] Windows: 0x1bd670
     * @note[short] Android
     */
    TodoReturn applyShake(cocos2d::CCPoint& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::atlasValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn atlasValue(int p0);
public:

    /**
     * @note[short] MacOS: 0x113750
     * @note[short] Windows: 0x19a6b0
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::isFlipping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isFlipping();
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObject not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObject(GameObject* p0, double p1, double p2, bool p3);
public:

    /**
     * @note[short] MacOS: 0x13ea60
     * @note[short] Windows: 0x1b7460
     * @note[short] Android
     */
    TodoReturn pauseAudio();

    /**
     * @note[short] MacOS: 0x113fc0
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* p0);

    /**
     * @note[short] MacOS: 0x13eac0
     * @note[short] Android
     */
    TodoReturn resetAudio();

    /**
     * @note[short] MacOS: 0x102770
     * @note[short] Android
     */
    TodoReturn sortGroups();
    
private:
    [[deprecated("GJBaseGameLayer::swapGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapGround(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateOBB2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateZoom not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZoom(float p0, float p1, int p2, float p3, int p4, int p5);
public:

    /**
     * @note[short] MacOS: 0x14e320
     * @note[short] Android
     */
    TodoReturn addGuideArt(GameObject* p0);

    /**
     * @note[short] MacOS: 0x129840
     * @note[short] Windows: 0x1a4be0
     * @note[short] Android
     */
    void addToGroups(GameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::addUIObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addUIObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveX(float p0, float p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveY(float p0, float p1, float p2, bool p3);
public:

    /**
     * @note[short] MacOS: 0x10f940
     * @note[short] Windows: 0x196720
     * @note[short] Android
     */
    void flipGravity(PlayerObject* p0, bool p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::flipObjects not implemented")]]
    /**
     * @note[short] Windows: 0x1c4540
     * @note[short] Android
     */
    void flipObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObjects not implemented")]]
    /**
     * @note[short] Windows: 0x1ade90
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* p0, double p1, double p2, bool p3);
public:

    /**
     * @note[short] MacOS: 0x1375f0
     * @note[short] Windows: 0x1b19c0
     * @note[short] Android
     */
    void queueButton(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS: 0x145830
     * @note[short] Windows: 0x1be060
     * @note[short] Android
     */
    void resetCamera();

    /**
     * @note[short] MacOS: 0x10e540
     * @note[short] Windows: 0x195ed5
     * @note[short] Android
     */
    void resetPlayer();
    
private:
    [[deprecated("GJBaseGameLayer::resumeAudio not implemented")]]
    /**
     * @note[short] Windows: 0x1b74c0
     * @note[short] Android
     */
    void resumeAudio();
public:
    
private:
    [[deprecated("GJBaseGameLayer::setupLayers not implemented")]]
    /**
     * @note[short] Windows: 0x18ddc0
     * @note[short] Android
     */
    void setupLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::setupReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupReplay(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x146e40
     * @note[short] Windows: 0x1ba3c0
     * @note[short] Android
     */
    TodoReturn shakeCamera(float p0, float p1, float p2);
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncGLoaded(int p0);
public:

    /**
     * @note[short] MacOS: 0xfee30
     * @note[short] Windows: 0x18fed0
     * @note[short] Android
     */
    void createPlayer();
    
private:
    [[deprecated("GJBaseGameLayer::flipFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipFinished();
public:

    /**
     * @note[short] MacOS: 0x137800
     * @note[short] Windows: 0x1b2880
     * @note[short] Android
     */
    void handleButton(bool push, int button, bool player1);
    
private:
    [[deprecated("GJBaseGameLayer::processItems not implemented")]]
    /**
     * @note[short] Windows: 0x1992d0
     * @note[short] Android
     */
    TodoReturn processItems();
public:
    
private:
    [[deprecated("GJBaseGameLayer::recordAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recordAction(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreRemap(EffectGameObject* p0, gd::unordered_map<int, int>& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateObject(GameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnPlayer2 not implemented")]]
    /**
     * @note[short] Windows: 0x199990
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetObject(int p0);
public:

    /**
     * @note[short] MacOS: 0x140660
     * @note[short] Windows: 0x1bcbef
     * @note[short] Android
     */
    void updateCamera(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateReplay();
public:
    
private:
    [[deprecated("GJBaseGameLayer::addAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJAreaActionType p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncBGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncBGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncMGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncMGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::canProcessSFX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canProcessSFX(SFXTriggerState& p0, gd::unordered_map<int, int>& p1, gd::unordered_map<int, float>& p2, gd::vector<SFXTriggerState>& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimParticle(gd::string p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x113df0
     * @note[short] Android
     */
    void destroyObject(GameObject* p0);

    /**
     * @note[short] MacOS: 0x115120
     * @note[short] Android
     */
    TodoReturn enterDualMode(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS: 0x113ec0
     * @note[short] Windows: 0x1995a0
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* p0);

    /**
     * @note[short] MacOS: 0x13ea50
     * @note[short] Android
     */
    TodoReturn preResumeGame();
    
private:
    [[deprecated("GJBaseGameLayer::removePlayer2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlayer2();
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, cocos2d::CCPoint p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);
public:

    /**
     * @note[short] MacOS: 0x113560
     * @note[short] Android
     */
    void toggleFlipped(bool p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animatePortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animatePortalY(float p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::canTouchObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canTouchObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createParticle not implemented")]]
    /**
     * @note[short] Windows: 0x1bed60
     * @note[short] Android
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
public:

    /**
     * @note[short] MacOS: 0x113960
     * @note[short] Windows: 0x19a7b0
     * @note[short] Android
     */
    void gravBumpPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] MacOS: 0x14f370
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1);

    /**
     * @note[short] MacOS: 0x10ce20
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);

    /**
     * @note[short] MacOS: 0x1383e0
     * @note[short] Android
     */
    TodoReturn removeKeyframe(KeyframeGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::reparentObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reparentObject(cocos2d::CCNode* p0, cocos2d::CCNode* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::sortAllGroupsX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortAllGroupsX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopSFXTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopSFXTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapBackground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::syncBGTextures not implemented")]]
    /**
     * @note[short] Windows: 0x1b98c0
     * @note[short] Android
     */
    TodoReturn syncBGTextures();
public:

    /**
     * @note[short] MacOS: 0x10c5d0
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* p0, PlayerObject* p1);

    /**
     * @note[short] MacOS: 0x10f070
     * @note[short] Windows: 0x1996c0
     * @note[short] Android
     */
    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] MacOS: 0x13eaf0
     * @note[short] Android
     */
    TodoReturn tryResumeAudio();
    
private:
    [[deprecated("GJBaseGameLayer::updateCounters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCounters(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGuideArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGuideArt();
public:

    /**
     * @note[short] MacOS: 0x101730
     * @note[short] Android
     */
    TodoReturn addRemapTargets(gd::set<int>& p0);

    /**
     * @note[short] MacOS: 0x110890
     * @note[short] Windows: 0x1973f0
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* p0, float p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::claimMoveAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimMoveAction(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::collectedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectedObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::isPlayer2Button not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPlayer2Button(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveCameraToPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveCameraToPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playFlashEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);
public:

    /**
     * @note[short] MacOS: 0x140200
     * @note[short] Android
     */
    void processCommands(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::processSFXState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSFXState(SFXTriggerState* p0, SFXTriggerState* p1, int p2, float p3);
public:

    /**
     * @note[short] MacOS: 0x10e7f0
     * @note[short] Windows: 0x196000
     * @note[short] Android
     */
    TodoReturn setupLevelStart(LevelSettingsObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::stopCameraShake not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCameraShake();
public:

    /**
     * @note[short] MacOS: 0x10f3d0
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);
    
private:
    [[deprecated("GJBaseGameLayer::unclaimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::unlinkAllEvents not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlinkAllEvents();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMGOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMGOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticles(float p0);
public:

    /**
     * @note[short] MacOS: 0x138be0
     * @note[short] Windows: 0x1b3350
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::addPickupTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPickupTrigger(CountTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::buttonIDToButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonIDToButton(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlEventLink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlEventLink(int p0, int p1, GJActionCommand p2);
public:

    /**
     * @note[short] MacOS: 0xff150
     * @note[short] Android
     */
    void createBackground(int p0);

    /**
     * @note[short] MacOS: 0x10b4b0
     * @note[short] Windows: 0x193a90
     * @note[short] Android
     */
    TodoReturn createTextLayers();
    
private:
    [[deprecated("GJBaseGameLayer::exitStaticCamera not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitStaticCamera(bool p0, bool p1, float p2, int p3, float p4, bool p5, float p6, bool p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadUpToPosition not implemented")]]
    /**
     * @note[short] Windows: 0x1b4d10
     * @note[short] Android
     */
    void loadUpToPosition(float p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSongState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSongState(int p0, float p1, float p2, int p3, float p4, float p5, gd::vector<SongTriggerState>* p6);
public:

    /**
     * @note[short] MacOS: 0xff310
     * @note[short] Android
     */
    void removeBackground();

    /**
     * @note[short] MacOS: 0x129a80
     * @note[short] Android
     */
    void removeFromGroups(GameObject* p0);

    /**
     * @note[short] MacOS: 0x105ba0
     * @note[short] Android
     */
    TodoReturn sortStickyGroups();
    
private:
    [[deprecated("GJBaseGameLayer::swapMiddleground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMiddleground(int p0);
public:

    /**
     * @note[short] MacOS: 0x10f520
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::toggleLockPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleLockPlayer(bool p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x10e6f0
     * @note[short] Windows: 0x1a4fd0
     * @note[short] Android
     */
    GameObject* tryGetMainObject(int p0);

    /**
     * @note[short] MacOS: 0x1454f0
     * @note[short] Android
     */
    TodoReturn updateBGArtSpeed(float p0, float p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraEdge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEdge(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraMode(EffectGameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x10f730
     * @note[short] Android
     */
    TodoReturn updateDualGround(PlayerObject* p0, int p1, bool p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::updateMGArtSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMGArtSpeed(float p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x12a190
     * @note[short] Android
     */
    void addToGroupParents(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::checkRepellPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkRepellPlayer();
public:

    /**
     * @note[short] MacOS: 0x117d20
     * @note[short] Windows: 0x19d320
     * @note[short] Android
     */
    void checkSpawnObjects();
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJActionCommand p2);
public:

    /**
     * @note[short] MacOS: 0xff6d0
     * @note[short] Android
     */
    void createGroundLayer(int p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::gameEventToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gameEventToString(GJGameEvent p0);
public:

    /**
     * @note[short] MacOS: 0x144400
     * @note[short] Android
     */
    void loadLevelSettings();
    
private:
    [[deprecated("GJBaseGameLayer::moveObjectsSilent not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObjectsSilent(int p0, double p1, double p2);
public:

    /**
     * @note[short] MacOS: 0x14e270
     * @note[short] Windows: 0x1c37e0
     * @note[short] Android
     */
    TodoReturn orderSpawnObjects();

    /**
     * @note[short] MacOS: 0x113aa0
     * @note[short] Windows: 0x19acd0
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* p0, RingObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::playSpeedParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playSpeedParticle(float p0);
public:

    /**
     * @note[short] MacOS: 0x107bf0
     * @note[short] Android
     */
    void positionUIObjects();

    /**
     * @note[short] MacOS: 0x109360
     * @note[short] Android
     */
    void processSFXObjects();

    /**
     * @note[short] MacOS: 0xffa40
     * @note[short] Android
     */
    void removeGroundLayer();
    
private:
    [[deprecated("GJBaseGameLayer::removeGroupParent not implemented")]]
    /**
     * @note[short] Windows: 0x1a54b0
     * @note[short] Android
     */
    TodoReturn removeGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStaticCamera not implemented")]]
    /**
     * @note[short] Windows: 0x1be2c0
     * @note[short] Android
     */
    TodoReturn resetStaticCamera(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::sortSectionVector not implemented")]]
    /**
     * @note[short] Windows: 0x1a7f50
     * @note[short] Android
     */
    TodoReturn sortSectionVector();
public:

    /**
     * @note[short] MacOS: 0x10f5d0
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetGroupParent(int p0);
public:

    /**
     * @note[short] MacOS: 0x147180
     * @note[short] Android
     */
    TodoReturn updateCameraBGArt(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] MacOS: 0xff3c0
     * @note[short] Windows: 0x190db0
     * @note[short] Android
     */
    TodoReturn updateLevelColors();

    /**
     * @note[short] MacOS: 0x127c40
     * @note[short] Windows: 0x1a37b0
     * @note[short] Android
     */
    TodoReturn updateShaderLayer(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateTimerLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimerLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateCustomRing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateCustomRing(RingObject* p0);
public:

    /**
     * @note[short] MacOS: 0x146380
     * @note[short] Windows: 0x1bfff0
     * @note[short] Android
     */
    TodoReturn activateSFXTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] MacOS: 0x10fda0
     * @note[short] Android
     */
    TodoReturn animateInGroundNew(bool p0, float p1, bool p2);

    /**
     * @note[short] MacOS: 0x144590
     * @note[short] Android
     */
    TodoReturn applyLevelSettings(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::clearPickedUpItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearPickedUpItems();
public:

    /**
     * @note[short] MacOS: 0xff8e0
     * @note[short] Android
     */
    void createMiddleground(int p0);

    /**
     * @note[short] MacOS: 0x10d070
     * @note[short] Windows: 0x1b1ac0
     * @note[short] Android
     */
    TodoReturn gameEventTriggered(GJGameEvent p0, int p1, int p2);

    /**
     * @note[short] MacOS: 0x1023a0
     * @note[short] Android
     */
    TodoReturn generateSpawnRemap();

    /**
     * @note[short] MacOS: 0x12a680
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GJBaseGameLayer::loadStartPosObject not implemented")]]
    /**
     * @note[short] Windows: 0x1b4ba0
     * @note[short] Android
     */
    void loadStartPosObject();
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyGroupPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyGroupPhysics(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x102c20
     * @note[short] Android
     */
    TodoReturn optimizeMoveGroups();

    /**
     * @note[short] MacOS: 0x114c50
     * @note[short] Windows: 0x199ab0
     * @note[short] Android
     */
    TodoReturn playExitDualEffect(PlayerObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::processAreaActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaEffects(gd::vector<EnterEffectInstance>* p0, GJAreaActionType p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processMoveActions not implemented")]]
    /**
     * @note[short] Windows: 0x1ada80
     * @note[short] Android
     */
    void processMoveActions();
public:

    /**
     * @note[short] MacOS: 0x12aa00
     * @note[short] Android
     */
    TodoReturn reAddToStickyGroup(GameObject* p0);

    /**
     * @note[short] MacOS: 0x122620
     * @note[short] Android
     */
    TodoReturn registerSpawnRemap(gd::vector<ChanceObject>& p0);

    /**
     * @note[short] MacOS: 0xffa10
     * @note[short] Android
     */
    void removeMiddleground();
    
private:
    [[deprecated("GJBaseGameLayer::resetGroupCounters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupCounters(bool p0);
public:

    /**
     * @note[short] MacOS: 0x10f680
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::triggerMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEnterEffects(float p0);
public:

    /**
     * @note[short] MacOS: 0x1445f0
     * @note[short] Windows: 0x1b97a0
     * @note[short] Android
     */
    TodoReturn updateMaxGameplayY();
    
private:
    [[deprecated("GJBaseGameLayer::updateQueuedLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateQueuedLabels();
public:

    /**
     * @note[short] MacOS: 0x145d60
     * @note[short] Windows: 0x1bfba0
     * @note[short] Android
     */
    TodoReturn activateSongTrigger(SongTriggerGameObject* p0);

    /**
     * @note[short] MacOS: 0x110090
     * @note[short] Android
     */
    TodoReturn animateOutGroundNew(bool p0);
    
private:
    [[deprecated("GJBaseGameLayer::applySFXEditTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x1c03b0
     * @note[short] Android
     */
    TodoReturn applySFXEditTrigger(int p0, int p1, SFXTriggerGameObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimRotationAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimRotationAction(int p0, int p1, float& p2, float& p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::maxZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn maxZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::minZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn minZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyObjectPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyObjectPhysics(AdvancedFollowEditObject* p0, GameObjectPhysics& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::performMathRounding not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathRounding(double p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchedObject(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::preUpdateVisibility not implemented")]]
    /**
     * @note[short] Windows: 0x1b5660
     * @note[short] Android
     */
    TodoReturn preUpdateVisibility(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCameraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processCameraObject(GameObject* p0, PlayerObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processStateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processStateObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::registerStateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerStateObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetGradientLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGradientLayers();
public:

    /**
     * @note[short] MacOS: 0x144860
     * @note[short] Windows: 0x1b9950
     * @note[short] Android
     */
    void resetLevelVariables();
    
private:
    [[deprecated("GJBaseGameLayer::restoreAllUIObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreAllUIObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroupTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnGroupTriggered(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObjectsInOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnObjectsInOrder(cocos2d::CCArray* p0, double p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::staticObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn staticObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetX(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGroundShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundShadows();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateKeyframeOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateKeyframeOrder(int p0);
public:

    /**
     * @note[short] MacOS: 0x100360
     * @note[short] Android
     */
    TodoReturn updateLayerCapacity(gd::string p0);

    /**
     * @note[short] MacOS: 0x142d10
     * @note[short] Windows: 0x1b8a0e
     * @note[short] Android
     */
    void updateSpecialLabels();
    
private:
    [[deprecated("GJBaseGameLayer::visitWithColorFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn visitWithColorFlash();
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEventTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateEventTrigger(EventLinkTrigger* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateResetTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateResetTrigger(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateTimerTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateTimerTrigger(TimerTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::calculateColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateColorGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollisionBlocks(EffectGameObject* p0, gd::vector<EffectGameObject*>* p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x105cf0
     * @note[short] Android
     */
    TodoReturn generateTargetGroups();
    
private:
    [[deprecated("GJBaseGameLayer::performMathOperation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathOperation(double p0, double p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playAnimationCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playAnimationCommand(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x113b50
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] MacOS: 0x10fb00
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::processFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processFollowActions();
public:

    /**
     * @note[short] MacOS: 0x137790
     * @note[short] Windows: 0x1b1a10
     * @note[short] Android
     */
    TodoReturn processQueuedButtons();
    
private:
    [[deprecated("GJBaseGameLayer::rectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::refreshCounterLabels not implemented")]]
    /**
     * @note[short] Windows: 0x1b4630
     * @note[short] Android
     */
    void refreshCounterLabels();
public:

    /**
     * @note[short] MacOS: 0x109170
     * @note[short] Android
     */
    TodoReturn refreshKeyframeAnims();

    /**
     * @note[short] MacOS: 0x1161e0
     * @note[short] Android
     */
    TodoReturn reorderObjectSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(int p0, cocos2d::CCPoint p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(SpawnParticleGameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x128de0
     * @note[short] Android
     */
    TodoReturn speedForShaderTarget(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::stopAllGroundActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAllGroundActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::transformAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerGravityChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGravityChange(EffectGameObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerShaderCommand not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShaderCommand(ShaderGameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x12a7a0
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS: 0x125fd0
     * @note[short] Windows: 0x1a1750
     * @note[short] Android
     */
    void updateGradientLayers();

    /**
     * @note[short] MacOS: 0x143350
     * @note[short] Windows: 0x1b8be0
     * @note[short] Android
     */
    void updatePlatformerTime();
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::assignNewStickyGroups not implemented")]]
    /**
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0x111970
     * @note[short] Android
     */
    void collisionCheckObjects(PlayerObject* p0, gd::vector<GameObject*>* p1, int p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicCommand(EffectGameObject* p0, int p1, gd::vector<DynamicObjectAction>& p2, GJActionCommand p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createNewKeyframeAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();
public:
    
private:
    [[deprecated("GJBaseGameLayer::damagingObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn damagingObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectTypeToGameEvent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectTypeToGameEvent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerCircleCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerCircleCollision(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playKeyframeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playKeyframeAnimation(KeyframeAnimTriggerObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processOptionsTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processOptionsTrigger(GameOptionsTrigger* p0);
public:

    /**
     * @note[short] MacOS: 0x12a970
     * @note[short] Android
     */
    TodoReturn removeFromStickyGroup(GameObject* p0);

    /**
     * @note[short] MacOS: 0xfec60
     * @note[short] Windows: 0x18fe20
     * @note[short] Android
     */
    bool shouldExitHackedLevel();
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleAudioVisualizer not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAudioVisualizer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAudioVisualizer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollisionBlocks();
public:

    /**
     * @note[short] MacOS: 0x129020
     * @note[short] Android
     */
    TodoReturn updateExtraGameLayers();
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetX(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetY(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x110240
     * @note[short] Windows: 0x1bda60
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPos(cocos2d::CCPoint p0, bool p1, bool p2, bool p3, float p4, int p5, float p6);

    /**
     * @note[short] MacOS: 0x1468d0
     * @note[short] Windows: 0x1c0160
     * @note[short] Android
     */
    TodoReturn activateSFXEditTrigger(SFXTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::animateInDualGroundNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateInDualGroundNew(GameObject* p0, float p1, bool p2, float p3);
public:

    /**
     * @note[short] MacOS: 0x1132f0
     * @note[short] Windows: 0x19a4b0
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::controlGradientTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlGradientTrigger(GradientTriggerObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersInGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersInGroup(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIntersectsCircle(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::prepareTransformParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareTransformParent(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processMoveActionsStep not implemented")]]
    /**
     * @note[short] Windows: 0x1abbb0
     * @note[short] Android
     */
    void processMoveActionsStep(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processRotationActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processRotationActions();
public:

    /**
     * @note[short] MacOS: 0x12a0d0
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::resetSongTriggerValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSongTriggerValues();
public:

    /**
     * @note[short] MacOS: 0x145ba0
     * @note[short] Windows: 0x1c3a00
     * @note[short] Android
     */
    void resetSpawnChannelIndex();
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerVisibility(bool p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x125850
     * @note[short] Android
     */
    TodoReturn triggerGradientCommand(GradientTriggerObject* p0);

    /**
     * @note[short] MacOS: 0x1446e0
     * @note[short] Android
     */
    TodoReturn updateAllObjectSection();

    /**
     * @note[short] MacOS: 0x102330
     * @note[short] Android
     */
    TodoReturn updateSpecialGroupData();
    
private:
    [[deprecated("GJBaseGameLayer::activateItemEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemEditTrigger(ItemTriggerGameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x1460d0
     * @note[short] Android
     */
    TodoReturn activateSongEditTrigger(SongTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffectWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffectWithID(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerWasTouchingObject not implemented")]]
    /**
     * @note[short] Windows: 0x19a570
     * @note[short] Android
     */
    TodoReturn playerWasTouchingObject(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS: 0x128cc0
     * @note[short] Android
     */
    TodoReturn positionForShaderTarget(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::processTransformActions not implemented")]]
    /**
     * @note[short] Windows: 0x1acba0
     * @note[short] Android
     */
    void processTransformActions(bool p0);
public:

    /**
     * @note[short] MacOS: 0x12adc0
     * @note[short] Windows: 0x1a7d80
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* p0);

    /**
     * @note[short] MacOS: 0x109840
     * @note[short] Windows: 0x192c70
     * @note[short] Android
     */
    TodoReturn resetActiveEnterEffects();
    
private:
    [[deprecated("GJBaseGameLayer::resetMoveOptimizedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOptimizedValue();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStoppedAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStoppedAreaObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::testInstantCountTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4, gd::vector<int> const& p5, int p6, int p7);
public:

    /**
     * @note[short] MacOS: 0x129760
     * @note[short] Android
     */
    TodoReturn togglePlayerStreakBlend(bool p0);
    
private:
    [[deprecated("GJBaseGameLayer::triggerTransformCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerTransformCommand(TransformTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateActiveEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActiveEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtendedCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateExtendedCollision(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addProximityVolumeEffect not implemented")]]
    /**
     * @note[short] Windows: 0x1c0820
     * @note[short] Android
     */
    TodoReturn addProximityVolumeEffect(int p0, int p1, SFXTriggerGameObject* p2);
public:

    /**
     * @note[short] MacOS: 0x1081b0
     * @note[short] Android
     */
    TodoReturn generateVisibilityGroups();
    
private:
    [[deprecated("GJBaseGameLayer::processAreaVisualActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaVisualActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeTemporaryParticles not implemented")]]
    /**
     * @note[short] Windows: 0x1bfae0
     * @note[short] Android
     */
    TodoReturn removeTemporaryParticles();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetX(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetY(float p0, float p1, float p2);
public:

    /**
     * @note[short] MacOS: 0x14a680
     * @note[short] Windows: 0x1c08e0
     * @note[short] Android
     */
    TodoReturn volumeForProximityEffect(SFXTriggerInstance& p0);
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicMoveCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::convertToClosestDirection not implemented")]]
    /**
     * @note[short] Windows: 0x1aeb00
     * @note[short] Android
     */
    TodoReturn convertToClosestDirection(float p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x10abb0
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffer(int p0, float p1);
    
private:
    [[deprecated("GJBaseGameLayer::generatePickupAnimRandVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generatePickupAnimRandVal(GameObject* p0, float& p1, float& p2);
public:

    /**
     * @note[short] MacOS: 0x1001c0
     * @note[short] Android
     */
    TodoReturn increaseBatchNodeCapacity();
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateLegacyLayerCapacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateSavePositionObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSavePositionObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemCompareTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemCompareTrigger(ItemTriggerGameObject* p0, gd::vector<int> const& p1);
public:

    /**
     * @note[short] MacOS: 0x115d70
     * @note[short] Windows: 0x19b1c0
     * @note[short] Android
     */
    void createPlayerCollisionBlock();
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffers(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadGroupParentsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadGroupParentsFromString(GameObject* p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x103270
     * @note[short] Android
     */
    TodoReturn prepareSavePositionObjects();
    
private:
    [[deprecated("GJBaseGameLayer::processAreaFadeGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaFadeGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaMoveGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaMoveGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTintGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTintGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processPlayerFollowActions not implemented")]]
    /**
     * @note[short] Windows: 0x1ae2f0
     * @note[short] Android
     */
    void processPlayerFollowActions(float p0);
public:

    /**
     * @note[short] MacOS: 0x145c90
     * @note[short] Windows: 0x1ba310
     * @note[short] Android
     */
    TodoReturn processQueuedAudioTriggers();
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffectAnimation(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::clearActivatedAudioTriggers not implemented")]]
    /**
     * @note[short] Windows: 0x1c1380
     * @note[short] Android
     */
    TodoReturn clearActivatedAudioTriggers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicRotateCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowAction(AdvancedFollowInstance& p0, bool p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processDynamicObjectActions not implemented")]]
    /**
     * @note[short] Windows: 0x1ae630
     * @note[short] Android
     */
    void processDynamicObjectActions(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updatePlayerCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateObjectControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlayerControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatePlayerControlTrigger(PlayerControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAdvancedFollowCommand(AdvancedFollowTriggerObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersWithControlID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersWithControlID(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaRotateGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaRotateGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:

    /**
     * @note[short] MacOS: 0x1025b0
     * @note[short] Android
     */
    TodoReturn regenerateEnterEasingBuffers();
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* p0);
public:

    /**
     * @note[short] MacOS: 0x1431d0
     * @note[short] Android
     */
    void updateProximityVolumeEffects();
    
private:
    [[deprecated("GJBaseGameLayer::updateStaticCameraPosToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPosToGroup(int p0, bool p1, bool p2, bool p3, float p4, float p5, int p6, float p7, bool p8, float p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePersistentItemTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatePersistentItemTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCameraLimitAfterTeleport not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCameraLimitAfterTeleport(PlayerObject* p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x14bf80
     * @note[short] Windows: 0x1c1750
     * @note[short] Android
     */
    TodoReturn processActivatedAudioTriggers(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTransformGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTransformGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowEditCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::hasItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasItem(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addPoints not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPoints(int p0);
public:

    /**
     * @note[short] MacOS: 0x13ec00
     * @note[short] Windows: 0x1b75e0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0xfa710
     * @note[short] Windows: 0x18cc80
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJBaseGameLayer::visit not implemented")]]
    /**
     * @note[short] Windows: 0x1c4a60
     * @note[short] Android
     */
    virtual void visit();
public:
    
private:
    [[deprecated("GJBaseGameLayer::postUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void postUpdate(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkForEnd not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();
public:
    
private:
    [[deprecated("GJBaseGameLayer::testTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn testTime();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVerifyDamage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateVerifyDamage();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAttemptTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateAttemptTime(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateVisibility(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTookDamage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::opacityForObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addToSpeedObjects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectsCollided not implemented")]]
    /**
     * @note[short] Windows: 0x19ba50
     * @note[short] Android
     */
    virtual TodoReturn objectsCollided(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateColor not implemented")]]
    /**
     * @note[short] Windows: 0x1a46f0
     * @note[short] Android
     */
    virtual TodoReturn updateColor(cocos2d::_ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroupTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void toggleGroupTriggered(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void spawnGroup(int p0, bool p1, double p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void spawnObject(GameObject* p0, double p1, gd::vector<int> const& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlatformerEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGlitter not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGlitter(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::destroyPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS: 0x12b1c0
     * @note[short] Windows: 0x1a76e0
     * @note[short] Android
     */
    virtual void addToSection(GameObject* p0);

    /**
     * @note[short] MacOS: 0x1298b0
     * @note[short] Windows: 0x1a4c40
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    /**
     * @note[short] MacOS: 0x129ae0
     * @note[short] Windows: 0x1a4d60
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateObjectSection not implemented")]]
    /**
     * @note[short] Windows: 0x1a8c20
     * @note[short] Android
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateDisabledObjectsLastPos not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroundVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMGVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleHideAttempts not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Out of line
     */
    virtual float posForTime(float p0);

    /**
     * @note[short] Out of line
     */
    virtual void resetSPTriggered();
    
private:
    [[deprecated("GJBaseGameLayer::updateScreenRotation not implemented")]]
    /**
     * @note[short] Windows: 0x1b52e0
     * @note[short] Android
     */
    virtual TodoReturn updateScreenRotation(float p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::reverseDirection not implemented")]]
    /**
     * @note[short] Windows: 0x19afc0
     * @note[short] Android
     */
    virtual TodoReturn reverseDirection(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateGameplay not implemented")]]
    /**
     * @note[short] Windows: 0x19b020
     * @note[short] Android
     */
    virtual TodoReturn rotateGameplay(RotateGameplayGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::didRotateGameplay not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn didRotateGameplay();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(GameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyTimeWarp not implemented")]]
    /**
     * @note[short] Windows: 0x1b5600
     * @note[short] Android
     */
    virtual void applyTimeWarp(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playGravityEffect not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::manualUpdateObjectColors not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn createCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkpointActivated not implemented")]]
    /**
     * @note[short] Windows: 0x1c4610
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::flipArt not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addKeyframe not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleProgressbar not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void toggleProgressbar();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeAllCheckpoints not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMusicInPractice not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    GEODE_PAD(1280);
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    GEODE_PAD(460);
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_unknownE90;
    cocos2d::CCNode* m_unknownE98;
    cocos2d::CCNode* m_unknownEA0;
    cocos2d::CCLayer* m_objectLayer;
    GEODE_PAD(180);
    std::array<float, 2000> m_massiveFloatArray;
    GEODE_PAD(420);
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_unk2a80;
    cocos2d::CCNode* m_unk2a84;
    int m_unk2a88;
    float m_unk2a8c;
    int m_unk2a90;
    int m_unk2a94;
    int m_unk2a98;
    cocos2d::CCDictionary* m_unk2a9c;
    float m_levelLength;
    int m_unk2aa4;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    GEODE_PAD(192);
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    GEODE_PAD(296);
    UILayer* m_uiLayer;
    GEODE_PAD(80);
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections;
    GEODE_PAD(384);
    GJGameLoadingLayer* m_loadingLayer;
};
