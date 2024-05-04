#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getYVelocity
		#define GEODE_STATICS_getYVelocity
		GEODE_AS_STATIC_FUNCTION(getYVelocity) 
	#endif

	#ifndef GEODE_STATICS_getActiveMode
		#define GEODE_STATICS_getActiveMode
		GEODE_AS_STATIC_FUNCTION(getActiveMode) 
	#endif

	#ifndef GEODE_STATICS_getOldPosition
		#define GEODE_STATICS_getOldPosition
		GEODE_AS_STATIC_FUNCTION(getOldPosition) 
	#endif

	#ifndef GEODE_STATICS_getSecondColor
		#define GEODE_STATICS_getSecondColor
		GEODE_AS_STATIC_FUNCTION(getSecondColor) 
	#endif

	#ifndef GEODE_STATICS_getCurrentXVelocity
		#define GEODE_STATICS_getCurrentXVelocity
		GEODE_AS_STATIC_FUNCTION(getCurrentXVelocity) 
	#endif

	#ifndef GEODE_STATICS_getModifiedSlopeYVel
		#define GEODE_STATICS_getModifiedSlopeYVel
		GEODE_AS_STATIC_FUNCTION(getModifiedSlopeYVel) 
	#endif

	#ifndef GEODE_STATICS_setYVelocity
		#define GEODE_STATICS_setYVelocity
		GEODE_AS_STATIC_FUNCTION(setYVelocity) 
	#endif

	#ifndef GEODE_STATICS_setSecondColor
		#define GEODE_STATICS_setSecondColor
		GEODE_AS_STATIC_FUNCTION(setSecondColor) 
	#endif

	#ifndef GEODE_STATICS_bumpPlayer
		#define GEODE_STATICS_bumpPlayer
		GEODE_AS_STATIC_FUNCTION(bumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonDown
		#define GEODE_STATICS_buttonDown
		GEODE_AS_STATIC_FUNCTION(buttonDown) 
	#endif

	#ifndef GEODE_STATICS_didHitHead
		#define GEODE_STATICS_didHitHead
		GEODE_AS_STATIC_FUNCTION(didHitHead) 
	#endif

	#ifndef GEODE_STATICS_isSafeFlip
		#define GEODE_STATICS_isSafeFlip
		GEODE_AS_STATIC_FUNCTION(isSafeFlip) 
	#endif

	#ifndef GEODE_STATICS_isSafeMode
		#define GEODE_STATICS_isSafeMode
		GEODE_AS_STATIC_FUNCTION(isSafeMode) 
	#endif

	#ifndef GEODE_STATICS_lockPlayer
		#define GEODE_STATICS_lockPlayer
		GEODE_AS_STATIC_FUNCTION(lockPlayer) 
	#endif

	#ifndef GEODE_STATICS_pushButton
		#define GEODE_STATICS_pushButton
		GEODE_AS_STATIC_FUNCTION(pushButton) 
	#endif

	#ifndef GEODE_STATICS_pushPlayer
		#define GEODE_STATICS_pushPlayer
		GEODE_AS_STATIC_FUNCTION(pushPlayer) 
	#endif

	#ifndef GEODE_STATICS_reverseMod
		#define GEODE_STATICS_reverseMod
		GEODE_AS_STATIC_FUNCTION(reverseMod) 
	#endif

	#ifndef GEODE_STATICS_updateJump
		#define GEODE_STATICS_updateJump
		GEODE_AS_STATIC_FUNCTION(updateJump) 
	#endif

	#ifndef GEODE_STATICS_updateMove
		#define GEODE_STATICS_updateMove
		GEODE_AS_STATIC_FUNCTION(updateMove) 
	#endif

	#ifndef GEODE_STATICS_yStartDown
		#define GEODE_STATICS_yStartDown
		GEODE_AS_STATIC_FUNCTION(yStartDown) 
	#endif

	#ifndef GEODE_STATICS_boostPlayer
		#define GEODE_STATICS_boostPlayer
		GEODE_AS_STATIC_FUNCTION(boostPlayer) 
	#endif

	#ifndef GEODE_STATICS_createRobot
		#define GEODE_STATICS_createRobot
		GEODE_AS_STATIC_FUNCTION(createRobot) 
	#endif

	#ifndef GEODE_STATICS_flashPlayer
		#define GEODE_STATICS_flashPlayer
		GEODE_AS_STATIC_FUNCTION(flashPlayer) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_gravityDown
		#define GEODE_STATICS_gravityDown
		GEODE_AS_STATIC_FUNCTION(gravityDown) 
	#endif

	#ifndef GEODE_STATICS_resetStreak
		#define GEODE_STATICS_resetStreak
		GEODE_AS_STATIC_FUNCTION(resetStreak) 
	#endif

	#ifndef GEODE_STATICS_setupStreak
		#define GEODE_STATICS_setupStreak
		GEODE_AS_STATIC_FUNCTION(setupStreak) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_stopDashing
		#define GEODE_STATICS_stopDashing
		GEODE_AS_STATIC_FUNCTION(stopDashing) 
	#endif

	#ifndef GEODE_STATICS_stopStreak2
		#define GEODE_STATICS_stopStreak2
		GEODE_AS_STATIC_FUNCTION(stopStreak2) 
	#endif

	#ifndef GEODE_STATICS_createSpider
		#define GEODE_STATICS_createSpider
		GEODE_AS_STATIC_FUNCTION(createSpider) 
	#endif

	#ifndef GEODE_STATICS_isBoostValid
		#define GEODE_STATICS_isBoostValid
		GEODE_AS_STATIC_FUNCTION(isBoostValid) 
	#endif

	#ifndef GEODE_STATICS_preCollision
		#define GEODE_STATICS_preCollision
		GEODE_AS_STATIC_FUNCTION(preCollision) 
	#endif

	#ifndef GEODE_STATICS_redirectDash
		#define GEODE_STATICS_redirectDash
		GEODE_AS_STATIC_FUNCTION(redirectDash) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle2
		#define GEODE_STATICS_spawnCircle2
		GEODE_AS_STATIC_FUNCTION(spawnCircle2) 
	#endif

	#ifndef GEODE_STATICS_startDashing
		#define GEODE_STATICS_startDashing
		GEODE_AS_STATIC_FUNCTION(startDashing) 
	#endif

	#ifndef GEODE_STATICS_stopRotation
		#define GEODE_STATICS_stopRotation
		GEODE_AS_STATIC_FUNCTION(stopRotation) 
	#endif

	#ifndef GEODE_STATICS_isInBasicMode
		#define GEODE_STATICS_isInBasicMode
		GEODE_AS_STATIC_FUNCTION(isInBasicMode) 
	#endif

	#ifndef GEODE_STATICS_levelFlipping
		#define GEODE_STATICS_levelFlipping
		GEODE_AS_STATIC_FUNCTION(levelFlipping) 
	#endif

	#ifndef GEODE_STATICS_levelWillFlip
		#define GEODE_STATICS_levelWillFlip
		GEODE_AS_STATIC_FUNCTION(levelWillFlip) 
	#endif

	#ifndef GEODE_STATICS_modeDidChange
		#define GEODE_STATICS_modeDidChange
		GEODE_AS_STATIC_FUNCTION(modeDidChange) 
	#endif

	#ifndef GEODE_STATICS_postCollision
		#define GEODE_STATICS_postCollision
		GEODE_AS_STATIC_FUNCTION(postCollision) 
	#endif

	#ifndef GEODE_STATICS_propellPlayer
		#define GEODE_STATICS_propellPlayer
		GEODE_AS_STATIC_FUNCTION(propellPlayer) 
	#endif

	#ifndef GEODE_STATICS_releaseButton
		#define GEODE_STATICS_releaseButton
		GEODE_AS_STATIC_FUNCTION(releaseButton) 
	#endif

	#ifndef GEODE_STATICS_reversePlayer
		#define GEODE_STATICS_reversePlayer
		GEODE_AS_STATIC_FUNCTION(reversePlayer) 
	#endif

	#ifndef GEODE_STATICS_stopParticles
		#define GEODE_STATICS_stopParticles
		GEODE_AS_STATIC_FUNCTION(stopParticles) 
	#endif

	#ifndef GEODE_STATICS_switchedDirTo
		#define GEODE_STATICS_switchedDirTo
		GEODE_AS_STATIC_FUNCTION(switchedDirTo) 
	#endif

	#ifndef GEODE_STATICS_testForMoving
		#define GEODE_STATICS_testForMoving
		GEODE_AS_STATIC_FUNCTION(testForMoving) 
	#endif

	#ifndef GEODE_STATICS_toggleFlyMode
		#define GEODE_STATICS_toggleFlyMode
		GEODE_AS_STATIC_FUNCTION(toggleFlyMode) 
	#endif

	#ifndef GEODE_STATICS_touchedObject
		#define GEODE_STATICS_touchedObject
		GEODE_AS_STATIC_FUNCTION(touchedObject) 
	#endif

	#ifndef GEODE_STATICS_updateCollide
		#define GEODE_STATICS_updateCollide
		GEODE_AS_STATIC_FUNCTION(updateCollide) 
	#endif

	#ifndef GEODE_STATICS_updateDashArt
		#define GEODE_STATICS_updateDashArt
		GEODE_AS_STATIC_FUNCTION(updateDashArt) 
	#endif

	#ifndef GEODE_STATICS_updateEffects
		#define GEODE_STATICS_updateEffects
		GEODE_AS_STATIC_FUNCTION(updateEffects) 
	#endif

	#ifndef GEODE_STATICS_updateSpecial
		#define GEODE_STATICS_updateSpecial
		GEODE_AS_STATIC_FUNCTION(updateSpecial) 
	#endif

	#ifndef GEODE_STATICS_updateStreaks
		#define GEODE_STATICS_updateStreaks
		GEODE_AS_STATIC_FUNCTION(updateStreaks) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_activateStreak
		#define GEODE_STATICS_activateStreak
		GEODE_AS_STATIC_FUNCTION(activateStreak) 
	#endif

	#ifndef GEODE_STATICS_addToYVelocity
		#define GEODE_STATICS_addToYVelocity
		GEODE_AS_STATIC_FUNCTION(addToYVelocity) 
	#endif

	#ifndef GEODE_STATICS_copyAttributes
		#define GEODE_STATICS_copyAttributes
		GEODE_AS_STATIC_FUNCTION(copyAttributes) 
	#endif

	#ifndef GEODE_STATICS_fadeOutStreak2
		#define GEODE_STATICS_fadeOutStreak2
		GEODE_AS_STATIC_FUNCTION(fadeOutStreak2) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_isInNormalMode
		#define GEODE_STATICS_isInNormalMode
		GEODE_AS_STATIC_FUNCTION(isInNormalMode) 
	#endif

	#ifndef GEODE_STATICS_isSafeHeadTest
		#define GEODE_STATICS_isSafeHeadTest
		GEODE_AS_STATIC_FUNCTION(isSafeHeadTest) 
	#endif

	#ifndef GEODE_STATICS_playBumpEffect
		#define GEODE_STATICS_playBumpEffect
		GEODE_AS_STATIC_FUNCTION(playBumpEffect) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplay
		#define GEODE_STATICS_rotateGameplay
		GEODE_AS_STATIC_FUNCTION(rotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJump
		#define GEODE_STATICS_spiderTestJump
		GEODE_AS_STATIC_FUNCTION(spiderTestJump) 
	#endif

	#ifndef GEODE_STATICS_storeCollision
		#define GEODE_STATICS_storeCollision
		GEODE_AS_STATIC_FUNCTION(storeCollision) 
	#endif

	#ifndef GEODE_STATICS_switchedToMode
		#define GEODE_STATICS_switchedToMode
		GEODE_AS_STATIC_FUNCTION(switchedToMode) 
	#endif

	#ifndef GEODE_STATICS_toggleBirdMode
		#define GEODE_STATICS_toggleBirdMode
		GEODE_AS_STATIC_FUNCTION(toggleBirdMode) 
	#endif

	#ifndef GEODE_STATICS_toggleDartMode
		#define GEODE_STATICS_toggleDartMode
		GEODE_AS_STATIC_FUNCTION(toggleDartMode) 
	#endif

	#ifndef GEODE_STATICS_toggleRollMode
		#define GEODE_STATICS_toggleRollMode
		GEODE_AS_STATIC_FUNCTION(toggleRollMode) 
	#endif

	#ifndef GEODE_STATICS_updateRotation
		#define GEODE_STATICS_updateRotation
		GEODE_AS_STATIC_FUNCTION(updateRotation) 
	#endif

	#ifndef GEODE_STATICS_addAllParticles
		#define GEODE_STATICS_addAllParticles
		GEODE_AS_STATIC_FUNCTION(addAllParticles) 
	#endif

	#ifndef GEODE_STATICS_doReversePlayer
		#define GEODE_STATICS_doReversePlayer
		GEODE_AS_STATIC_FUNCTION(doReversePlayer) 
	#endif

	#ifndef GEODE_STATICS_hardFlipGravity
		#define GEODE_STATICS_hardFlipGravity
		GEODE_AS_STATIC_FUNCTION(hardFlipGravity) 
	#endif

	#ifndef GEODE_STATICS_hitGroundNoJump
		#define GEODE_STATICS_hitGroundNoJump
		GEODE_AS_STATIC_FUNCTION(hitGroundNoJump) 
	#endif

	#ifndef GEODE_STATICS_playBurstEffect
		#define GEODE_STATICS_playBurstEffect
		GEODE_AS_STATIC_FUNCTION(playBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_playDeathEffect
		#define GEODE_STATICS_playDeathEffect
		GEODE_AS_STATIC_FUNCTION(playDeathEffect) 
	#endif

	#ifndef GEODE_STATICS_playerDestroyed
		#define GEODE_STATICS_playerDestroyed
		GEODE_AS_STATIC_FUNCTION(playerDestroyed) 
	#endif

	#ifndef GEODE_STATICS_playerIsFalling
		#define GEODE_STATICS_playerIsFalling
		GEODE_AS_STATIC_FUNCTION(playerIsFalling) 
	#endif

	#ifndef GEODE_STATICS_playSpawnEffect
		#define GEODE_STATICS_playSpawnEffect
		GEODE_AS_STATIC_FUNCTION(playSpawnEffect) 
	#endif

	#ifndef GEODE_STATICS_resetPlayerIcon
		#define GEODE_STATICS_resetPlayerIcon
		GEODE_AS_STATIC_FUNCTION(resetPlayerIcon) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation
		#define GEODE_STATICS_runBallRotation
		GEODE_AS_STATIC_FUNCTION(runBallRotation) 
	#endif

	#ifndef GEODE_STATICS_runRotateAction
		#define GEODE_STATICS_runRotateAction
		GEODE_AS_STATIC_FUNCTION(runRotateAction) 
	#endif

	#ifndef GEODE_STATICS_spawnDualCircle
		#define GEODE_STATICS_spawnDualCircle
		GEODE_AS_STATIC_FUNCTION(spawnDualCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFromPlayer
		#define GEODE_STATICS_spawnFromPlayer
		GEODE_AS_STATIC_FUNCTION(spawnFromPlayer) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpX
		#define GEODE_STATICS_spiderTestJumpX
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpX) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpY
		#define GEODE_STATICS_spiderTestJumpY
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpY) 
	#endif

	#ifndef GEODE_STATICS_stopBurstEffect
		#define GEODE_STATICS_stopBurstEffect
		GEODE_AS_STATIC_FUNCTION(stopBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_toggleRobotMode
		#define GEODE_STATICS_toggleRobotMode
		GEODE_AS_STATIC_FUNCTION(toggleRobotMode) 
	#endif

	#ifndef GEODE_STATICS_toggleSwingMode
		#define GEODE_STATICS_toggleSwingMode
		GEODE_AS_STATIC_FUNCTION(toggleSwingMode) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerArt
		#define GEODE_STATICS_updatePlayerArt
		GEODE_AS_STATIC_FUNCTION(updatePlayerArt) 
	#endif

	#ifndef GEODE_STATICS_updateSwingFire
		#define GEODE_STATICS_updateSwingFire
		GEODE_AS_STATIC_FUNCTION(updateSwingFire) 
	#endif

	#ifndef GEODE_STATICS_canStickToGround
		#define GEODE_STATICS_canStickToGround
		GEODE_AS_STATIC_FUNCTION(canStickToGround) 
	#endif

	#ifndef GEODE_STATICS_deactivateStreak
		#define GEODE_STATICS_deactivateStreak
		GEODE_AS_STATIC_FUNCTION(deactivateStreak) 
	#endif

	#ifndef GEODE_STATICS_disableSwingFire
		#define GEODE_STATICS_disableSwingFire
		GEODE_AS_STATIC_FUNCTION(disableSwingFire) 
	#endif

	#ifndef GEODE_STATICS_isSafeSpiderFlip
		#define GEODE_STATICS_isSafeSpiderFlip
		GEODE_AS_STATIC_FUNCTION(isSafeSpiderFlip) 
	#endif

	#ifndef GEODE_STATICS_placeStreakPoint
		#define GEODE_STATICS_placeStreakPoint
		GEODE_AS_STATIC_FUNCTION(placeStreakPoint) 
	#endif

	#ifndef GEODE_STATICS_playerIsMovingUp
		#define GEODE_STATICS_playerIsMovingUp
		GEODE_AS_STATIC_FUNCTION(playerIsMovingUp) 
	#endif

	#ifndef GEODE_STATICS_playerTeleported
		#define GEODE_STATICS_playerTeleported
		GEODE_AS_STATIC_FUNCTION(playerTeleported) 
	#endif

	#ifndef GEODE_STATICS_playingEndEffect
		#define GEODE_STATICS_playingEndEffect
		GEODE_AS_STATIC_FUNCTION(playingEndEffect) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation2
		#define GEODE_STATICS_runBallRotation2
		GEODE_AS_STATIC_FUNCTION(runBallRotation2) 
	#endif

	#ifndef GEODE_STATICS_saveToCheckpoint
		#define GEODE_STATICS_saveToCheckpoint
		GEODE_AS_STATIC_FUNCTION(saveToCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_spawnScaleCircle
		#define GEODE_STATICS_spawnScaleCircle
		GEODE_AS_STATIC_FUNCTION(spawnScaleCircle) 
	#endif

	#ifndef GEODE_STATICS_specialGroundHit
		#define GEODE_STATICS_specialGroundHit
		GEODE_AS_STATIC_FUNCTION(specialGroundHit) 
	#endif

	#ifndef GEODE_STATICS_toggleSpiderMode
		#define GEODE_STATICS_toggleSpiderMode
		GEODE_AS_STATIC_FUNCTION(toggleSpiderMode) 
	#endif

	#ifndef GEODE_STATICS_toggleVisibility
		#define GEODE_STATICS_toggleVisibility
		GEODE_AS_STATIC_FUNCTION(toggleVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateCollideTop
		#define GEODE_STATICS_updateCollideTop
		GEODE_AS_STATIC_FUNCTION(updateCollideTop) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerGlow
		#define GEODE_STATICS_updatePlayerGlow
		GEODE_AS_STATIC_FUNCTION(updatePlayerGlow) 
	#endif

	#ifndef GEODE_STATICS_addToTouchedRings
		#define GEODE_STATICS_addToTouchedRings
		GEODE_AS_STATIC_FUNCTION(addToTouchedRings) 
	#endif

	#ifndef GEODE_STATICS_collidedWithSlope
		#define GEODE_STATICS_collidedWithSlope
		GEODE_AS_STATIC_FUNCTION(collidedWithSlope) 
	#endif

	#ifndef GEODE_STATICS_levelFlipFinished
		#define GEODE_STATICS_levelFlipFinished
		GEODE_AS_STATIC_FUNCTION(levelFlipFinished) 
	#endif

	#ifndef GEODE_STATICS_performSlideCheck
		#define GEODE_STATICS_performSlideCheck
		GEODE_AS_STATIC_FUNCTION(performSlideCheck) 
	#endif

	#ifndef GEODE_STATICS_preSlopeCollision
		#define GEODE_STATICS_preSlopeCollision
		GEODE_AS_STATIC_FUNCTION(preSlopeCollision) 
	#endif

	#ifndef GEODE_STATICS_releaseAllButtons
		#define GEODE_STATICS_releaseAllButtons
		GEODE_AS_STATIC_FUNCTION(releaseAllButtons) 
	#endif

	#ifndef GEODE_STATICS_resetAllParticles
		#define GEODE_STATICS_resetAllParticles
		GEODE_AS_STATIC_FUNCTION(resetAllParticles) 
	#endif

	#ifndef GEODE_STATICS_resetCollisionLog
		#define GEODE_STATICS_resetCollisionLog
		GEODE_AS_STATIC_FUNCTION(resetCollisionLog) 
	#endif

	#ifndef GEODE_STATICS_resetTouchedRings
		#define GEODE_STATICS_resetTouchedRings
		GEODE_AS_STATIC_FUNCTION(resetTouchedRings) 
	#endif

	#ifndef GEODE_STATICS_runNormalRotation
		#define GEODE_STATICS_runNormalRotation
		GEODE_AS_STATIC_FUNCTION(runNormalRotation) 
	#endif

	#ifndef GEODE_STATICS_spawnPortalCircle
		#define GEODE_STATICS_spawnPortalCircle
		GEODE_AS_STATIC_FUNCTION(spawnPortalCircle) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerScale
		#define GEODE_STATICS_togglePlayerScale
		GEODE_AS_STATIC_FUNCTION(togglePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_updateCollideLeft
		#define GEODE_STATICS_updateCollideLeft
		GEODE_AS_STATIC_FUNCTION(updateCollideLeft) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerForce
		#define GEODE_STATICS_updatePlayerForce
		GEODE_AS_STATIC_FUNCTION(updatePlayerForce) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerScale
		#define GEODE_STATICS_updatePlayerScale
		GEODE_AS_STATIC_FUNCTION(updatePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_updateStaticForce
		#define GEODE_STATICS_updateStaticForce
		GEODE_AS_STATIC_FUNCTION(updateStaticForce) 
	#endif

	#ifndef GEODE_STATICS_updateStreakBlend
		#define GEODE_STATICS_updateStreakBlend
		GEODE_AS_STATIC_FUNCTION(updateStreakBlend) 
	#endif

	#ifndef GEODE_STATICS_collidedWithObject
		#define GEODE_STATICS_collidedWithObject
		GEODE_AS_STATIC_FUNCTION(collidedWithObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateParticle
		#define GEODE_STATICS_deactivateParticle
		GEODE_AS_STATIC_FUNCTION(deactivateParticle) 
	#endif

	#ifndef GEODE_STATICS_destroyFromHitHead
		#define GEODE_STATICS_destroyFromHitHead
		GEODE_AS_STATIC_FUNCTION(destroyFromHitHead) 
	#endif

	#ifndef GEODE_STATICS_gameEventTriggered
		#define GEODE_STATICS_gameEventTriggered
		GEODE_AS_STATIC_FUNCTION(gameEventTriggered) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_playCompleteEffect
		#define GEODE_STATICS_playCompleteEffect
		GEODE_AS_STATIC_FUNCTION(playCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_removeAllParticles
		#define GEODE_STATICS_removeAllParticles
		GEODE_AS_STATIC_FUNCTION(removeAllParticles) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplayOnly
		#define GEODE_STATICS_rotateGameplayOnly
		GEODE_AS_STATIC_FUNCTION(rotateGameplayOnly) 
	#endif

	#ifndef GEODE_STATICS_tryPlaceCheckpoint
		#define GEODE_STATICS_tryPlaceCheckpoint
		GEODE_AS_STATIC_FUNCTION(tryPlaceCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_updateCollideRight
		#define GEODE_STATICS_updateCollideRight
		GEODE_AS_STATIC_FUNCTION(updateCollideRight) 
	#endif

	#ifndef GEODE_STATICS_updateShipRotation
		#define GEODE_STATICS_updateShipRotation
		GEODE_AS_STATIC_FUNCTION(updateShipRotation) 
	#endif

	#ifndef GEODE_STATICS_handlePlayerCommand
		#define GEODE_STATICS_handlePlayerCommand
		GEODE_AS_STATIC_FUNCTION(handlePlayerCommand) 
	#endif

	#ifndef GEODE_STATICS_redirectPlayerForce
		#define GEODE_STATICS_redirectPlayerForce
		GEODE_AS_STATIC_FUNCTION(redirectPlayerForce) 
	#endif

	#ifndef GEODE_STATICS_resetStateVariables
		#define GEODE_STATICS_resetStateVariables
		GEODE_AS_STATIC_FUNCTION(resetStateVariables) 
	#endif

	#ifndef GEODE_STATICS_updateCollideBottom
		#define GEODE_STATICS_updateCollideBottom
		GEODE_AS_STATIC_FUNCTION(updateCollideBottom) 
	#endif

	#ifndef GEODE_STATICS_updateDashAnimation
		#define GEODE_STATICS_updateDashAnimation
		GEODE_AS_STATIC_FUNCTION(updateDashAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateJumpVariables
		#define GEODE_STATICS_updateJumpVariables
		GEODE_AS_STATIC_FUNCTION(updateJumpVariables) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeRotation
		#define GEODE_STATICS_updateSlopeRotation
		GEODE_AS_STATIC_FUNCTION(updateSlopeRotation) 
	#endif

	#ifndef GEODE_STATICS_enablePlayerControls
		#define GEODE_STATICS_enablePlayerControls
		GEODE_AS_STATIC_FUNCTION(enablePlayerControls) 
	#endif

	#ifndef GEODE_STATICS_playDynamicSpiderRun
		#define GEODE_STATICS_playDynamicSpiderRun
		GEODE_AS_STATIC_FUNCTION(playDynamicSpiderRun) 
	#endif

	#ifndef GEODE_STATICS_playSpiderDashEffect
		#define GEODE_STATICS_playSpiderDashEffect
		GEODE_AS_STATIC_FUNCTION(playSpiderDashEffect) 
	#endif

	#ifndef GEODE_STATICS_resetCollisionValues
		#define GEODE_STATICS_resetCollisionValues
		GEODE_AS_STATIC_FUNCTION(resetCollisionValues) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplayObject
		#define GEODE_STATICS_rotateGameplayObject
		GEODE_AS_STATIC_FUNCTION(rotateGameplayObject) 
	#endif

	#ifndef GEODE_STATICS_togglePlatformerMode
		#define GEODE_STATICS_togglePlatformerMode
		GEODE_AS_STATIC_FUNCTION(togglePlatformerMode) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointMode
		#define GEODE_STATICS_updateCheckpointMode
		GEODE_AS_STATIC_FUNCTION(updateCheckpointMode) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointTest
		#define GEODE_STATICS_updateCheckpointTest
		GEODE_AS_STATIC_FUNCTION(updateCheckpointTest) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeYVelocity
		#define GEODE_STATICS_updateSlopeYVelocity
		GEODE_AS_STATIC_FUNCTION(updateSlopeYVelocity) 
	#endif

	#ifndef GEODE_STATICS_updateStateVariables
		#define GEODE_STATICS_updateStateVariables
		GEODE_AS_STATIC_FUNCTION(updateStateVariables) 
	#endif

	#ifndef GEODE_STATICS_usingWallLimitedMode
		#define GEODE_STATICS_usingWallLimitedMode
		GEODE_AS_STATIC_FUNCTION(usingWallLimitedMode) 
	#endif

	#ifndef GEODE_STATICS_animatePlatformerJump
		#define GEODE_STATICS_animatePlatformerJump
		GEODE_AS_STATIC_FUNCTION(animatePlatformerJump) 
	#endif

	#ifndef GEODE_STATICS_checkSnapJumpToObject
		#define GEODE_STATICS_checkSnapJumpToObject
		GEODE_AS_STATIC_FUNCTION(checkSnapJumpToObject) 
	#endif

	#ifndef GEODE_STATICS_disablePlayerControls
		#define GEODE_STATICS_disablePlayerControls
		GEODE_AS_STATIC_FUNCTION(disablePlayerControls) 
	#endif

	#ifndef GEODE_STATICS_enableCustomGlowColor
		#define GEODE_STATICS_enableCustomGlowColor
		GEODE_AS_STATIC_FUNCTION(enableCustomGlowColor) 
	#endif

	#ifndef GEODE_STATICS_playerIsFallingBugged
		#define GEODE_STATICS_playerIsFallingBugged
		GEODE_AS_STATIC_FUNCTION(playerIsFallingBugged) 
	#endif

	#ifndef GEODE_STATICS_rotatePreSlopeObjects
		#define GEODE_STATICS_rotatePreSlopeObjects
		GEODE_AS_STATIC_FUNCTION(rotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_STATICS_updateInternalActions
		#define GEODE_STATICS_updateInternalActions
		GEODE_AS_STATIC_FUNCTION(updateInternalActions) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerBirdFrame
		#define GEODE_STATICS_updatePlayerBirdFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerBirdFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerDartFrame
		#define GEODE_STATICS_updatePlayerDartFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerDartFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerRollFrame
		#define GEODE_STATICS_updatePlayerRollFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerRollFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerShipFrame
		#define GEODE_STATICS_updatePlayerShipFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerShipFrame) 
	#endif

	#ifndef GEODE_STATICS_updateShipSpriteExtra
		#define GEODE_STATICS_updateShipSpriteExtra
		GEODE_AS_STATIC_FUNCTION(updateShipSpriteExtra) 
	#endif

	#ifndef GEODE_STATICS_removePlacedCheckpoint
		#define GEODE_STATICS_removePlacedCheckpoint
		GEODE_AS_STATIC_FUNCTION(removePlacedCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpInternal
		#define GEODE_STATICS_spiderTestJumpInternal
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpInternal) 
	#endif

	#ifndef GEODE_STATICS_unrotateGameplayObject
		#define GEODE_STATICS_unrotateGameplayObject
		GEODE_AS_STATIC_FUNCTION(unrotateGameplayObject) 
	#endif

	#ifndef GEODE_STATICS_updateLastGroundObject
		#define GEODE_STATICS_updateLastGroundObject
		GEODE_AS_STATIC_FUNCTION(updateLastGroundObject) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerRobotFrame
		#define GEODE_STATICS_updatePlayerRobotFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerRobotFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerSwingFrame
		#define GEODE_STATICS_updatePlayerSwingFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerSwingFrame) 
	#endif

	#ifndef GEODE_STATICS_createFadeOutDartStreak
		#define GEODE_STATICS_createFadeOutDartStreak
		GEODE_AS_STATIC_FUNCTION(createFadeOutDartStreak) 
	#endif

	#ifndef GEODE_STATICS_removePendingCheckpoint
		#define GEODE_STATICS_removePendingCheckpoint
		GEODE_AS_STATIC_FUNCTION(removePendingCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_unrotatePreSlopeObjects
		#define GEODE_STATICS_unrotatePreSlopeObjects
		GEODE_AS_STATIC_FUNCTION(unrotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerSpiderFrame
		#define GEODE_STATICS_updatePlayerSpiderFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerSpiderFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerSpriteExtra
		#define GEODE_STATICS_updatePlayerSpriteExtra
		GEODE_AS_STATIC_FUNCTION(updatePlayerSpriteExtra) 
	#endif

	#ifndef GEODE_STATICS_convertToClosestRotation
		#define GEODE_STATICS_convertToClosestRotation
		GEODE_AS_STATIC_FUNCTION(convertToClosestRotation) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerJetpackFrame
		#define GEODE_STATICS_updatePlayerJetpackFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerJetpackFrame) 
	#endif

	#ifndef GEODE_STATICS_collidedWithSlopeInternal
		#define GEODE_STATICS_collidedWithSlopeInternal
		GEODE_AS_STATIC_FUNCTION(collidedWithSlopeInternal) 
	#endif

	#ifndef GEODE_STATICS_exitPlatformerAnimateJump
		#define GEODE_STATICS_exitPlatformerAnimateJump
		GEODE_AS_STATIC_FUNCTION(exitPlatformerAnimateJump) 
	#endif

	#ifndef GEODE_STATICS_updateRobotAnimationSpeed
		#define GEODE_STATICS_updateRobotAnimationSpeed
		GEODE_AS_STATIC_FUNCTION(updateRobotAnimationSpeed) 
	#endif

	#ifndef GEODE_STATICS_collidedWithObjectInternal
		#define GEODE_STATICS_collidedWithObjectInternal
		GEODE_AS_STATIC_FUNCTION(collidedWithObjectInternal) 
	#endif

	#ifndef GEODE_STATICS_handleRotatedSlopeCollision
		#define GEODE_STATICS_handleRotatedSlopeCollision
		GEODE_AS_STATIC_FUNCTION(handleRotatedSlopeCollision) 
	#endif

	#ifndef GEODE_STATICS_stopPlatformerJumpAnimation
		#define GEODE_STATICS_stopPlatformerJumpAnimation
		GEODE_AS_STATIC_FUNCTION(stopPlatformerJumpAnimation) 
	#endif

	#ifndef GEODE_STATICS_handleRotatedObjectCollision
		#define GEODE_STATICS_handleRotatedObjectCollision
		GEODE_AS_STATIC_FUNCTION(handleRotatedObjectCollision) 
	#endif

	#ifndef GEODE_STATICS_handleRotatedCollisionInternal
		#define GEODE_STATICS_handleRotatedCollisionInternal
		GEODE_AS_STATIC_FUNCTION(handleRotatedCollisionInternal) 
	#endif

	#ifndef GEODE_STATICS_flipMod
		#define GEODE_STATICS_flipMod
		GEODE_AS_STATIC_FUNCTION(flipMod) 
	#endif

	#ifndef GEODE_STATICS_speedUp
		#define GEODE_STATICS_speedUp
		GEODE_AS_STATIC_FUNCTION(speedUp) 
	#endif

	#ifndef GEODE_STATICS_isFlying
		#define GEODE_STATICS_isFlying
		GEODE_AS_STATIC_FUNCTION(isFlying) 
	#endif

	#ifndef GEODE_STATICS_pushDown
		#define GEODE_STATICS_pushDown
		GEODE_AS_STATIC_FUNCTION(pushDown) 
	#endif

	#ifndef GEODE_STATICS_ringJump
		#define GEODE_STATICS_ringJump
		GEODE_AS_STATIC_FUNCTION(ringJump) 
	#endif

	#ifndef GEODE_STATICS_yStartUp
		#define GEODE_STATICS_yStartUp
		GEODE_AS_STATIC_FUNCTION(yStartUp) 
	#endif

	#ifndef GEODE_STATICS_gravityUp
		#define GEODE_STATICS_gravityUp
		GEODE_AS_STATIC_FUNCTION(gravityUp) 
	#endif

	#ifndef GEODE_STATICS_hitGround
		#define GEODE_STATICS_hitGround
		GEODE_AS_STATIC_FUNCTION(hitGround) 
	#endif

	#ifndef GEODE_STATICS_logValues
		#define GEODE_STATICS_logValues
		GEODE_AS_STATIC_FUNCTION(logValues) 
	#endif

	#ifndef GEODE_STATICS_speedDown
		#define GEODE_STATICS_speedDown
		GEODE_AS_STATIC_FUNCTION(speedDown) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRotation
		#define GEODE_STATICS_getObjectRotation
		GEODE_AS_STATIC_FUNCTION(getObjectRotation) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerObject> : ModifyBase<ModifyDerive<Der, PlayerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerObject>>;
		using ModifyBase<ModifyDerive<Der, PlayerObject>>::ModifyBase;
		using Base = PlayerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dbca0, Default, PlayerObject, create, int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dbd30, Default, PlayerObject, init, int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3de3e0, Default, PlayerObject, getYVelocity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6cc0, Default, PlayerObject, getActiveMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3df590, Default, PlayerObject, setSecondColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fb4e0, Default, PlayerObject, bumpPlayer, float, int, bool, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ece70, Default, PlayerObject, isSafeFlip, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f4bf0, Default, PlayerObject, pushButton, PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3df600, Default, PlayerObject, updateJump, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e75b0, Default, PlayerObject, boostPlayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dd580, Default, PlayerObject, createRobot, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3efee0, Default, PlayerObject, flashPlayer, float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4a80, Default, PlayerObject, flipGravity, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4520, Default, PlayerObject, resetStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ddd10, Default, PlayerObject, setupStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2cd0, Default, PlayerObject, stopDashing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dd8b0, Default, PlayerObject, createSpider, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e5890, Default, PlayerObject, preCollision, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2380, Default, PlayerObject, startDashing, DashRingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4780, Default, PlayerObject, levelWillFlip, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f77e0, Default, PlayerObject, modeDidChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e5a90, Default, PlayerObject, postCollision, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fb7f0, Default, PlayerObject, propellPlayer, float, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5e10, Default, PlayerObject, releaseButton, PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6390, Default, PlayerObject, reversePlayer, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6d20, Default, PlayerObject, toggleFlyMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fcd70, Default, PlayerObject, touchedObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ed5e0, Default, PlayerObject, updateCollide, PlayerCollisionDirection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f1e10, Default, PlayerObject, updateDashArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e3f00, Default, PlayerObject, updateEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ddb80, Default, PlayerObject, updateTimeMod, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4610, Default, PlayerObject, activateStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4a40, Default, PlayerObject, incrementJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f3880, Default, PlayerObject, switchedToMode, GameObjectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7800, Default, PlayerObject, toggleBirdMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f88a0, Default, PlayerObject, toggleDartMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f8f60, Default, PlayerObject, toggleRollMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e3760, Default, PlayerObject, doReversePlayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ead80, Default, PlayerObject, playDeathEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f4690, Default, PlayerObject, playerDestroyed, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f75e0, Default, PlayerObject, resetPlayerIcon, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f9320, Default, PlayerObject, toggleRobotMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7ec0, Default, PlayerObject, toggleSwingMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fa940, Default, PlayerObject, updateGlowColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f66e0, Default, PlayerObject, updatePlayerArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3de280, Default, PlayerObject, deactivateStreak, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e46f0, Default, PlayerObject, placeStreakPoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f4400, Default, PlayerObject, spawnScaleCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f9760, Default, PlayerObject, toggleSpiderMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6550, Default, PlayerObject, updatePlayerGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e78f0, Default, PlayerObject, collidedWithSlope, float, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fb040, Default, PlayerObject, releaseAllButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e44b0, Default, PlayerObject, resetAllParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f42d0, Default, PlayerObject, spawnPortalCircle, cocos2d::_ccColor3B, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f3e50, Default, PlayerObject, toggleGhostEffect, GhostType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f39d0, Default, PlayerObject, togglePlayerScale, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f85c0, Default, PlayerObject, updatePlayerFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3de350, Default, PlayerObject, updateStreakBlend, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ee020, Default, PlayerObject, collidedWithObject, float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7850, Default, PlayerObject, collidedWithObject, float, GameObject*, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2a30, Default, PlayerObject, deactivateParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fc940, Default, PlayerObject, loadFromCheckpoint, PlayerCheckpoint*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f2ef0, Default, PlayerObject, playCompleteEffect, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6a80, Default, PlayerObject, rotateGameplayOnly, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4080, Default, PlayerObject, tryPlaceCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e3400, Default, PlayerObject, playDynamicSpiderRun, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ef720, Default, PlayerObject, playSpiderDashEffect, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3de0b0, Default, PlayerObject, togglePlatformerMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4e70, Default, PlayerObject, animatePlatformerJump, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fa900, Default, PlayerObject, enableCustomGlowColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7c20, Default, PlayerObject, updatePlayerBirdFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f8d10, Default, PlayerObject, updatePlayerDartFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f90f0, Default, PlayerObject, updatePlayerRollFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7180, Default, PlayerObject, updatePlayerShipFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dd4b0, Default, PlayerObject, updateShipSpriteExtra, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f4650, Default, PlayerObject, removePlacedCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fb000, Default, PlayerObject, updatePlayerRobotFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f8300, Default, PlayerObject, updatePlayerSwingFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f3830, Default, PlayerObject, removePendingCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fb020, Default, PlayerObject, updatePlayerSpiderFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f73b0, Default, PlayerObject, updatePlayerJetpackFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fc360, Default, PlayerObject, updateRobotAnimationSpeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e5350, Default, PlayerObject, stopPlatformerJumpAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e29d0, Default, PlayerObject, isFlying, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eceb0, Default, PlayerObject, hitGround, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3de460, Default, PlayerObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd070, Default, PlayerObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd080, Default, PlayerObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd090, Default, PlayerObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f9c00, Default, PlayerObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd0a0, Default, PlayerObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fcfe0, Default, PlayerObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fae00, Default, PlayerObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fa7e0, Default, PlayerObject, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fcff0, Default, PlayerObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd060, Default, PlayerObject, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2e50, Default, PlayerObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fafd0, Default, PlayerObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fc2e0, Default, PlayerObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fc300, Default, PlayerObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fd190, Default, PlayerObject, animationFinished, char const*)
		}
	};
}
