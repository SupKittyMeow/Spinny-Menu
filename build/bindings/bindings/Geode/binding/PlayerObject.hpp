#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS: 0x3dbca0
     * @note[short] Windows: 0x2bcfd0
     * @note[short] Android
     */
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] MacOS: 0x3dbd30
     * @note[short] Windows: 0x2bd080
     * @note[short] Android
     */
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] MacOS: 0x3de3e0
     * @note[short] Android
     */
    float getYVelocity();

    /**
     * @note[short] MacOS: 0x3f6cc0
     * @note[short] Android
     */
    TodoReturn getActiveMode();
    
private:
    [[deprecated("PlayerObject::getOldPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOldPosition(float p0);
public:
    
private:
    [[deprecated("PlayerObject::getSecondColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondColor();
public:
    
private:
    [[deprecated("PlayerObject::getCurrentXVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrentXVelocity();
public:
    
private:
    [[deprecated("PlayerObject::getModifiedSlopeYVel not implemented")]]
    /**
     * @note[short] Windows: 0x2c4560
     * @note[short] Android
     */
    float getModifiedSlopeYVel();
public:
    
private:
    [[deprecated("PlayerObject::setYVelocity not implemented")]]
    /**
     * @note[short] Windows: 0x2bec70
     * @note[short] Android
     */
    void setYVelocity(double p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x3df590
     * @note[short] Windows: 0x2d0c30
     * @note[short] Android
     */
    void setSecondColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x3fb4e0
     * @note[short] Windows: 0x2d2600
     * @note[short] Android
     */
    void bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    
private:
    [[deprecated("PlayerObject::buttonDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::didHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didHitHead();
public:

    /**
     * @note[short] MacOS: 0x3ece70
     * @note[short] Android
     */
    bool isSafeFlip(float p0);
    
private:
    [[deprecated("PlayerObject::isSafeMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);
public:
    
private:
    [[deprecated("PlayerObject::lockPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x2d2290
     * @note[short] Android
     */
    TodoReturn lockPlayer();
public:

    /**
     * @note[short] MacOS: 0x3f4bf0
     * @note[short] Windows: 0x2cc4d0
     * @note[short] Android
     */
    void pushButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::pushPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushPlayer(float p0);
public:
    
private:
    [[deprecated("PlayerObject::reverseMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseMod();
public:

    /**
     * @note[short] MacOS: 0x3df600
     * @note[short] Windows: 0x2c1290
     * @note[short] Android
     */
    TodoReturn updateJump(float p0);
    
private:
    [[deprecated("PlayerObject::updateMove not implemented")]]
    /**
     * @note[short] Windows: 0x2bfc30
     * @note[short] Android
     */
    TodoReturn updateMove(float p0);
public:
    
private:
    [[deprecated("PlayerObject::yStartDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();
public:

    /**
     * @note[short] MacOS: 0x3e75b0
     * @note[short] Windows: 0x2d2d30
     * @note[short] Android
     */
    void boostPlayer(float p0);

    /**
     * @note[short] MacOS: 0x3dd580
     * @note[short] Android
     */
    TodoReturn createRobot(int p0);

    /**
     * @note[short] MacOS: 0x3efee0
     * @note[short] Android
     */
    TodoReturn flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3);

    /**
     * @note[short] MacOS: 0x3e4a80
     * @note[short] Windows: 0x2cddb0
     * @note[short] Android
     */
    TodoReturn flipGravity(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::gravityDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();
public:

    /**
     * @note[short] MacOS: 0x3e4520
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] MacOS: 0x3ddd10
     * @note[short] Android
     */
    void setupStreak();
    
private:
    [[deprecated("PlayerObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:

    /**
     * @note[short] MacOS: 0x3e2cd0
     * @note[short] Windows: 0x2cb080
     * @note[short] Android
     */
    void stopDashing();
    
private:
    [[deprecated("PlayerObject::stopStreak2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopStreak2();
public:

    /**
     * @note[short] MacOS: 0x3dd8b0
     * @note[short] Android
     */
    TodoReturn createSpider(int p0);
    
private:
    [[deprecated("PlayerObject::isBoostValid not implemented")]]
    /**
     * @note[short] Windows: 0x2c4500
     * @note[short] Android
     */
    bool isBoostValid(float p0);
public:

    /**
     * @note[short] MacOS: 0x3e5890
     * @note[short] Windows: 0x2c2c10
     * @note[short] Android
     */
    void preCollision();
    
private:
    [[deprecated("PlayerObject::redirectDash not implemented")]]
    /**
     * @note[short] Windows: 0x2ca320
     * @note[short] Android
     */
    TodoReturn redirectDash(float p0);
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle2();
public:

    /**
     * @note[short] MacOS: 0x3f2380
     * @note[short] Android
     */
    void startDashing(DashRingObject* p0);
    
private:
    [[deprecated("PlayerObject::stopRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRotation(bool p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::isInBasicMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInBasicMode();
public:
    
private:
    [[deprecated("PlayerObject::levelFlipping not implemented")]]
    /**
     * @note[short] Windows: 0x2cef50
     * @note[short] Android
     */
    TodoReturn levelFlipping();
public:

    /**
     * @note[short] MacOS: 0x3e4780
     * @note[short] Android
     */
    TodoReturn levelWillFlip();

    /**
     * @note[short] MacOS: 0x3f77e0
     * @note[short] Android
     */
    void modeDidChange();

    /**
     * @note[short] MacOS: 0x3e5a90
     * @note[short] Windows: 0x2c2d50
     * @note[short] Android
     */
    void postCollision(float p0);

    /**
     * @note[short] MacOS: 0x3fb7f0
     * @note[short] Windows: 0x2d2700
     * @note[short] Android
     */
    void propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] MacOS: 0x3f5e10
     * @note[short] Windows: 0x2cc710
     * @note[short] Android
     */
    void releaseButton(PlayerButton p0);

    /**
     * @note[short] MacOS: 0x3f6390
     * @note[short] Windows: 0x2cc810
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* p0);
    
private:
    [[deprecated("PlayerObject::stopParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopParticles();
public:
    
private:
    [[deprecated("PlayerObject::switchedDirTo not implemented")]]
    /**
     * @note[short] Windows: 0x2cc3e0
     * @note[short] Android
     */
    TodoReturn switchedDirTo(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::testForMoving not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS: 0x3f6d20
     * @note[short] Windows: 0x2ce170
     * @note[short] Android
     */
    void toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x3fcd70
     * @note[short] Android
     */
    void touchedObject(GameObject* p0);

    /**
     * @note[short] MacOS: 0x3ed5e0
     * @note[short] Windows: 0x2c8cc0
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection p0, GameObject* p1);

    /**
     * @note[short] MacOS: 0x3f1e10
     * @note[short] Windows: 0x2cac70
     * @note[short] Android
     */
    TodoReturn updateDashArt();

    /**
     * @note[short] MacOS: 0x3e3f00
     * @note[short] Android
     */
    TodoReturn updateEffects(float p0);
    
private:
    [[deprecated("PlayerObject::updateSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecial(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateStreaks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStreaks(float p0);
public:

    /**
     * @note[short] MacOS: 0x3ddb80
     * @note[short] Windows: 0x2d3b00
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1);

    /**
     * @note[short] MacOS: 0x3e4610
     * @note[short] Windows: 0x2d2ed0
     * @note[short] Android
     */
    void activateStreak();
    
private:
    [[deprecated("PlayerObject::addToYVelocity not implemented")]]
    /**
     * @note[short] Windows: 0x2bece0
     * @note[short] Android
     */
    void addToYVelocity(double p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::copyAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyAttributes(PlayerObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::fadeOutStreak2 not implemented")]]
    /**
     * @note[short] Windows: 0x2d2fd0
     * @note[short] Android
     */
    TodoReturn fadeOutStreak2(float p0);
public:

    /**
     * @note[short] MacOS: 0x3e4a40
     * @note[short] Windows: 0x2c2250
     * @note[short] Android
     */
    void incrementJumps();
    
private:
    [[deprecated("PlayerObject::isInNormalMode not implemented")]]
    /**
     * @note[short] Windows: 0x2cfe00
     * @note[short] Android
     */
    bool isInNormalMode();
public:
    
private:
    [[deprecated("PlayerObject::isSafeHeadTest not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeHeadTest();
public:
    
private:
    [[deprecated("PlayerObject::playBumpEffect not implemented")]]
    /**
     * @note[short] Windows: 0x2d28d0
     * @note[short] Android
     */
    TodoReturn playBumpEffect(int p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplay not implemented")]]
    /**
     * @note[short] Windows: 0x2cda10
     * @note[short] Android
     */
    TodoReturn rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJump(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::storeCollision not implemented")]]
    /**
     * @note[short] Windows: 0x2c2b70
     * @note[short] Android
     */
    TodoReturn storeCollision(PlayerCollisionDirection p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x3f3880
     * @note[short] Windows: 0x2cf6a0
     * @note[short] Android
     */
    void switchedToMode(GameObjectType p0);

    /**
     * @note[short] MacOS: 0x3f7800
     * @note[short] Windows: 0x2ce400
     * @note[short] Android
     */
    void toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x3f88a0
     * @note[short] Windows: 0x2ce9c0
     * @note[short] Android
     */
    void toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x3f8f60
     * @note[short] Windows: 0x2cef90
     * @note[short] Android
     */
    void toggleRollMode(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     * @note[short] Windows: 0x2c64e0
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0, float p1);
public:
    
private:
    [[deprecated("PlayerObject::addAllParticles not implemented")]]
    /**
     * @note[short] Windows: 0x2be6d0
     * @note[short] Android
     */
    TodoReturn addAllParticles();
public:

    /**
     * @note[short] MacOS: 0x3e3760
     * @note[short] Windows: 0x2cc8f0
     * @note[short] Android
     */
    void doReversePlayer(bool p0);
    
private:
    [[deprecated("PlayerObject::hardFlipGravity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();
public:
    
private:
    [[deprecated("PlayerObject::hitGroundNoJump not implemented")]]
    /**
     * @note[short] Windows: 0x2cf730
     * @note[short] Android
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::playBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();
public:

    /**
     * @note[short] MacOS: 0x1ead80
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] MacOS: 0x3f4690
     * @note[short] Windows: 0x2cc2d0
     * @note[short] Android
     */
    void playerDestroyed(bool p0);
    
private:
    [[deprecated("PlayerObject::playerIsFalling not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsFalling(float p0);
public:
    
private:
    [[deprecated("PlayerObject::playSpawnEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playSpawnEffect();
public:

    /**
     * @note[short] MacOS: 0x3f75e0
     * @note[short] Windows: 0x2cec80
     * @note[short] Android
     */
    TodoReturn resetPlayerIcon();
    
private:
    [[deprecated("PlayerObject::runBallRotation not implemented")]]
    /**
     * @note[short] Windows: 0x2c2890
     * @note[short] Android
     */
    TodoReturn runBallRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::runRotateAction not implemented")]]
    /**
     * @note[short] Windows: 0x2c26f0
     * @note[short] Android
     */
    TodoReturn runRotateAction(bool p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::spawnDualCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnFromPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x2d34b0
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpX(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpY(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::stopBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();
public:

    /**
     * @note[short] MacOS: 0x3f9320
     * @note[short] Windows: 0x2cf0c0
     * @note[short] Android
     */
    void toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x3f7ec0
     * @note[short] Windows: 0x2ce680
     * @note[short] Android
     */
    void toggleSwingMode(bool p0, bool p1);

    /**
     * @note[short] MacOS: 0x3fa940
     * @note[short] Windows: 0x2d0ca0
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] MacOS: 0x3f66e0
     * @note[short] Windows: 0x2ccac0
     * @note[short] Android
     */
    TodoReturn updatePlayerArt();
    
private:
    [[deprecated("PlayerObject::updateSwingFire not implemented")]]
    /**
     * @note[short] Windows: 0x2ce8b0
     * @note[short] Android
     */
    void updateSwingFire();
public:
    
private:
    [[deprecated("PlayerObject::canStickToGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canStickToGround();
public:

    /**
     * @note[short] MacOS: 0x3de280
     * @note[short] Android
     */
    void deactivateStreak(bool p0);
    
private:
    [[deprecated("PlayerObject::disableSwingFire not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableSwingFire();
public:
    
private:
    [[deprecated("PlayerObject::isSafeSpiderFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float p0);
public:

    /**
     * @note[short] MacOS: 0x3e46f0
     * @note[short] Windows: 0x2d3630
     * @note[short] Android
     */
    TodoReturn placeStreakPoint();
    
private:
    [[deprecated("PlayerObject::playerIsMovingUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsMovingUp();
public:
    
private:
    [[deprecated("PlayerObject::playerTeleported not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();
public:
    
private:
    [[deprecated("PlayerObject::playingEndEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playingEndEffect();
public:
    
private:
    [[deprecated("PlayerObject::runBallRotation2 not implemented")]]
    /**
     * @note[short] Windows: 0x2c29d0
     * @note[short] Android
     */
    TodoReturn runBallRotation2();
public:
    
private:
    [[deprecated("PlayerObject::saveToCheckpoint not implemented")]]
    /**
     * @note[short] Windows: 0x2d4140
     * @note[short] Android
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);
public:

    /**
     * @note[short] MacOS: 0x3f4400
     * @note[short] Android
     */
    void spawnScaleCircle();
    
private:
    [[deprecated("PlayerObject::specialGroundHit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();
public:

    /**
     * @note[short] MacOS: 0x3f9760
     * @note[short] Windows: 0x2cf3b0
     * @note[short] Android
     */
    void toggleSpiderMode(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::toggleVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideTop not implemented")]]
    /**
     * @note[short] Windows: 0x2c8eb0
     * @note[short] Android
     */
    TodoReturn updateCollideTop(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS: 0x3f6550
     * @note[short] Windows: 0x2d3170
     * @note[short] Android
     */
    void updatePlayerGlow();
    
private:
    [[deprecated("PlayerObject::addToTouchedRings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToTouchedRings(RingObject* p0);
public:

    /**
     * @note[short] MacOS: 0x3e78f0
     * @note[short] Android
     */
    void collidedWithSlope(float p0, GameObject* p1, bool p2);
    
private:
    [[deprecated("PlayerObject::levelFlipFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();
public:
    
private:
    [[deprecated("PlayerObject::performSlideCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performSlideCheck();
public:
    
private:
    [[deprecated("PlayerObject::preSlopeCollision not implemented")]]
    /**
     * @note[short] Windows: 0x2c46f0
     * @note[short] Android
     */
    TodoReturn preSlopeCollision(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS: 0x3fb040
     * @note[short] Android
     */
    TodoReturn releaseAllButtons();

    /**
     * @note[short] MacOS: 0x3e44b0
     * @note[short] Android
     */
    TodoReturn resetAllParticles();
    
private:
    [[deprecated("PlayerObject::resetCollisionLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionLog(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetTouchedRings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTouchedRings();
public:
    
private:
    [[deprecated("PlayerObject::runNormalRotation not implemented")]]
    /**
     * @note[short] Windows: 0x2c2750
     * @note[short] Android
     */
    TodoReturn runNormalRotation(bool p0, float p1);
public:
    
private:
    [[deprecated("PlayerObject::runNormalRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runNormalRotation();
public:

    /**
     * @note[short] MacOS: 0x3f42d0
     * @note[short] Windows: 0x2cbf20
     * @note[short] Android
     */
    TodoReturn spawnPortalCircle(cocos2d::_ccColor3B p0, float p1);

    /**
     * @note[short] MacOS: 0x3f3e50
     * @note[short] Windows: 0x2d20d0
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType p0);

    /**
     * @note[short] MacOS: 0x3f39d0
     * @note[short] Windows: 0x2d3690
     * @note[short] Android
     */
    TodoReturn togglePlayerScale(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::updateCollideLeft not implemented")]]
    /**
     * @note[short] Windows: 0x2c8f30
     * @note[short] Android
     */
    TodoReturn updateCollideLeft(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updatePlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x3f85c0
     * @note[short] Windows: 0x2d1220
     * @note[short] Android
     */
    void updatePlayerFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerScale not implemented")]]
    /**
     * @note[short] Windows: 0x2d3110
     * @note[short] Android
     */
    void updatePlayerScale();
public:
    
private:
    [[deprecated("PlayerObject::updateStaticForce not implemented")]]
    /**
     * @note[short] Windows: 0x2d2a00
     * @note[short] Android
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x3de350
     * @note[short] Android
     */
    void updateStreakBlend(bool p0);

    /**
     * @note[short] MacOS: 0x3ee020
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1);

    /**
     * @note[short] MacOS: 0x3e7850
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);

    /**
     * @note[short] MacOS: 0x3e2a30
     * @note[short] Android
     */
    void deactivateParticle();
    
private:
    [[deprecated("PlayerObject::destroyFromHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn destroyFromHitHead();
public:
    
private:
    [[deprecated("PlayerObject::gameEventTriggered not implemented")]]
    /**
     * @note[short] Windows: 0x1b1ac0
     * @note[short] Android
     */
    TodoReturn gameEventTriggered(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x3fc940
     * @note[short] Windows: 0x2d4370
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] MacOS: 0x1f2ef0
     * @note[short] Android
     */
    TodoReturn playCompleteEffect(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::removeAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();
public:

    /**
     * @note[short] MacOS: 0x3f6a80
     * @note[short] Android
     */
    void rotateGameplayOnly(bool p0);

    /**
     * @note[short] MacOS: 0x3e4080
     * @note[short] Windows: 0x2d4730
     * @note[short] Android
     */
    void tryPlaceCheckpoint();
    
private:
    [[deprecated("PlayerObject::updateCollideRight not implemented")]]
    /**
     * @note[short] Windows: 0x2c8fb0
     * @note[short] Android
     */
    TodoReturn updateCollideRight(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateShipRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateShipRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::handlePlayerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handlePlayerCommand(int p0);
public:
    
private:
    [[deprecated("PlayerObject::redirectPlayerForce not implemented")]]
    /**
     * @note[short] Windows: 0x2d2b40
     * @note[short] Android
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayerObject::resetStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateCollideBottom not implemented")]]
    /**
     * @note[short] Windows: 0x2c8e30
     * @note[short] Android
     */
    TodoReturn updateCollideBottom(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateDashAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDashAnimation();
public:
    
private:
    [[deprecated("PlayerObject::updateJumpVariables not implemented")]]
    /**
     * @note[short] Android
     */
    void updateJumpVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::enablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enablePlayerControls();
public:

    /**
     * @note[short] MacOS: 0x3e3400
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS: 0x3ef720
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);
    
private:
    [[deprecated("PlayerObject::resetCollisionValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionValues();
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplayObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateGameplayObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x3de0b0
     * @note[short] Android
     */
    void togglePlatformerMode(bool p0);
    
private:
    [[deprecated("PlayerObject::updateCheckpointMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointMode(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointTest not implemented")]]
    /**
     * @note[short] Windows: 0x2c0df0
     * @note[short] Android
     */
    TodoReturn updateCheckpointTest();
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::usingWallLimitedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usingWallLimitedMode();
public:

    /**
     * @note[short] MacOS: 0x3e4e70
     * @note[short] Android
     */
    void animatePlatformerJump(float p0);
    
private:
    [[deprecated("PlayerObject::checkSnapJumpToObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::disablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disablePlayerControls();
public:

    /**
     * @note[short] MacOS: 0x3fa900
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& p0);
    
private:
    [[deprecated("PlayerObject::playerIsFallingBugged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsFallingBugged();
public:
    
private:
    [[deprecated("PlayerObject::rotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::updateInternalActions not implemented")]]
    /**
     * @note[short] Android
     */
    void updateInternalActions(float p0);
public:

    /**
     * @note[short] MacOS: 0x3f7c20
     * @note[short] Windows: 0x2d1770
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int p0);

    /**
     * @note[short] MacOS: 0x3f8d10
     * @note[short] Windows: 0x2d1d10
     * @note[short] Android
     */
    void updatePlayerDartFrame(int p0);

    /**
     * @note[short] MacOS: 0x3f90f0
     * @note[short] Windows: 0x2d1990
     * @note[short] Android
     */
    void updatePlayerRollFrame(int p0);

    /**
     * @note[short] MacOS: 0x3f7180
     * @note[short] Windows: 0x2d13f0
     * @note[short] Android
     */
    void updatePlayerShipFrame(int p0);

    /**
     * @note[short] MacOS: 0x3dd4b0
     * @note[short] Windows: 0x2d1fd0
     * @note[short] Android
     */
    void updateShipSpriteExtra(gd::string p0);

    /**
     * @note[short] Out of line
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS: 0x3f4650
     * @note[short] Android
     */
    void removePlacedCheckpoint();
    
private:
    [[deprecated("PlayerObject::spiderTestJumpInternal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpInternal(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::unrotateGameplayObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::updateLastGroundObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLastGroundObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x3fb000
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int p0);

    /**
     * @note[short] MacOS: 0x3f8300
     * @note[short] Windows: 0x2d1b50
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int p0);
    
private:
    [[deprecated("PlayerObject::createFadeOutDartStreak not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createFadeOutDartStreak();
public:

    /**
     * @note[short] MacOS: 0x3f3830
     * @note[short] Windows: 0x2d46d0
     * @note[short] Android
     */
    void removePendingCheckpoint();
    
private:
    [[deprecated("PlayerObject::unrotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotatePreSlopeObjects();
public:

    /**
     * @note[short] MacOS: 0x3fb020
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerSpriteExtra not implemented")]]
    /**
     * @note[short] Windows: 0x2d1ed0
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(gd::string p0);
public:
    
private:
    [[deprecated("PlayerObject::convertToClosestRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);
public:

    /**
     * @note[short] MacOS: 0x3f73b0
     * @note[short] Windows: 0x2d15b0
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int p0);
    
private:
    [[deprecated("PlayerObject::collidedWithSlopeInternal not implemented")]]
    /**
     * @note[short] Windows: 0x2c4c50
     * @note[short] Android
     */
    TodoReturn collidedWithSlopeInternal(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::exitPlatformerAnimateJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitPlatformerAnimateJump();
public:

    /**
     * @note[short] MacOS: 0x3fc360
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();
    
private:
    [[deprecated("PlayerObject::collidedWithObjectInternal not implemented")]]
    /**
     * @note[short] Windows: 0x2c6c10
     * @note[short] Android
     */
    TodoReturn collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedSlopeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x3e5350
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();
    
private:
    [[deprecated("PlayerObject::handleRotatedObjectCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedCollisionInternal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("PlayerObject::flipMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipMod();
public:
    
private:
    [[deprecated("PlayerObject::speedUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedUp();
public:

    /**
     * @note[short] MacOS: 0x3e29d0
     * @note[short] Windows: 0x2ce0f0
     * @note[short] Android
     */
    bool isFlying();
    
private:
    [[deprecated("PlayerObject::pushDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushDown();
public:
    
private:
    [[deprecated("PlayerObject::ringJump not implemented")]]
    /**
     * @note[short] Windows: 0x2ccea0
     * @note[short] Android
     */
    TodoReturn ringJump(RingObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::yStartUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();
public:
    
private:
    [[deprecated("PlayerObject::gravityUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();
public:

    /**
     * @note[short] MacOS: 0x3eceb0
     * @note[short] Windows: 0x2cf760
     * @note[short] Android
     */
    void hitGround(GameObject* p0, bool p1);
    
private:
    [[deprecated("PlayerObject::logValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logValues();
public:
    
private:
    [[deprecated("PlayerObject::speedDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedDown();
public:

    /**
     * @note[short] MacOS: 0x3de460
     * @note[short] Windows: 0x2bed60
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x3fd070
     * @note[short] Windows: 0x2d4c10
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS: 0x3fd080
     * @note[short] Windows: 0x2d4c30
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS: 0x3fd090
     * @note[short] Windows: 0x2d4c50
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x3f9c00
     * @note[short] Windows: 0x2cfef0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x3fd0a0
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS: 0x3fcfe0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x3fae00
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x3fa7e0
     * @note[short] Windows: 0x2d0bb0
     * @note[short] Android
     */
    virtual void setColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x3fcff0
     * @note[short] Windows: 0x2d4b80
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS: 0x3fd060
     * @note[short] Windows: 0x138e00
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] MacOS: 0x3f2e50
     * @note[short] Windows: 0x2cb840
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x3fafd0
     * @note[short] Android
     */
    virtual TodoReturn getRealPosition();

    /**
     * @note[short] MacOS: 0x3fc2e0
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] MacOS: 0x3fc300
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();

    /**
     * @note[short] MacOS: 0x3fd190
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
    cocos2d::CCNode* m_mainLayer;
    GEODE_PAD(72);
    cocos2d::CCNode* m_unk4e4;
    cocos2d::CCDictionary* m_unk4e8;
    cocos2d::CCDictionary* m_unk4ec;
    cocos2d::CCDictionary* m_unk4f0;
    cocos2d::CCDictionary* m_unk4f4;
    GEODE_PAD(32);
    float m_unk518;
    GEODE_PAD(8);
    GameObject* m_collidedObject;
    GEODE_PAD(80);
    float m_unk568;
    cocos2d::CCSprite* m_unk56c;
    GEODE_PAD(4);
    GameObject* m_unk574;
    GameObject* m_unk578;
    // no padding
    float unk_584;
    int unk_588;
    GEODE_PAD(4);
    cocos2d::CCArray* m_particleSystems;
    GEODE_PAD(8);
    gd::unordered_map<int, GJPointDouble> m_unk594;
    gd::unordered_map<int, GameObject*> m_unk5b4;
    float m_rotationSpeed;
    float m_unk5dc;
    bool m_isRotating;
    bool m_unk5e1;
    bool m_hasGlow;
    bool m_isHidden;
    int m_hasGhostTrail;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_unk604;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_unk61c;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    float m_unk62c;
    GEODE_PAD(20);
    float m_unk644;
    float m_unk648;
    GEODE_PAD(12);
    bool m_unk658;
    bool m_unk659;
    bool m_unk65a;
    bool m_unk65b;
    bool m_unk65c;
    bool m_unk65d;
    bool m_unk65e;
    bool m_unk65f;
    GEODE_PAD(40);
    float m_unk688;
    float m_unk68c;
    GEODE_PAD(18);
    bool m_unk6a2;
    bool m_unk6a3;
    GEODE_PAD(16);
    float m_unk6ac;
    GEODE_PAD(12);
    float m_unk6bc;
    GEODE_PAD(4);
    GameObject* m_objectSnappedTo;
    GEODE_PAD(8);
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk6dc;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_unk6e8;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_unk6f4;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk704;
    cocos2d::CCParticleSystemQuad* m_unk708;
    GEODE_PAD(104);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(28);
    double m_yVelocity;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    GEODE_PAD(7);
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    GEODE_PAD(16);
    float m_unk7c8;
    float m_unk7cc;
    float m_unk7d0;
    bool m_isDashing;
    GEODE_PAD(8);
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_unk7e8;
    cocos2d::CCPoint m_unk7f0;
    GEODE_PAD(7);
    bool m_isLocked;
    GEODE_PAD(4);
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    GameObject* m_lastActivatedPortal;
    bool m_unk814;
    bool m_unk815;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    GEODE_PAD(20);
    float m_unk838;
    gd::unordered_map<int, int> m_unk83c;
    GEODE_PAD(32);
    double m_platformerXVelocity;
    GEODE_PAD(112);
    bool m_isPlatformer;
    int m_unk8ec;
    int m_unk8f0;
    int m_unk8f4;
    int m_unk8f8;
    float m_gravityMod;
    GEODE_PAD(4);
    cocos2d::CCPoint m_unk904;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk910;
    float m_unk918;
    float m_unk91c;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk924;
    GEODE_PAD(4);
    gd::string m_unk930;
    bool m_unk948;
    GEODE_PAD(7);
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk954;
    GEODE_PAD(4);
    PlayerFireBoostSprite* m_robotFire;
    GEODE_PAD(4);
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    GEODE_PAD(4);
    float m_unk974;
    bool m_unk978;
    bool m_unk979;
    bool m_unk97a;
    bool m_unk97b;
    GEODE_PAD(4);
};
