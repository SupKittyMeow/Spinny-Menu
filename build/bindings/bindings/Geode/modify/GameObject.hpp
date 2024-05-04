#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getGroupID
		#define GEODE_STATICS_getGroupID
		GEODE_AS_STATIC_FUNCTION(getGroupID) 
	#endif

	#ifndef GEODE_STATICS_getColorKey
		#define GEODE_STATICS_getColorKey
		GEODE_AS_STATIC_FUNCTION(getColorKey) 
	#endif

	#ifndef GEODE_STATICS_getBallFrame
		#define GEODE_STATICS_getBallFrame
		GEODE_AS_STATIC_FUNCTION(getBallFrame) 
	#endif

	#ifndef GEODE_STATICS_getBoxOffset
		#define GEODE_STATICS_getBoxOffset
		GEODE_AS_STATIC_FUNCTION(getBoxOffset) 
	#endif

	#ifndef GEODE_STATICS_getGlowFrame
		#define GEODE_STATICS_getGlowFrame
		GEODE_AS_STATIC_FUNCTION(getGlowFrame) 
	#endif

	#ifndef GEODE_STATICS_getMainColor
		#define GEODE_STATICS_getMainColor
		GEODE_AS_STATIC_FUNCTION(getMainColor) 
	#endif

	#ifndef GEODE_STATICS_getColorFrame
		#define GEODE_STATICS_getColorFrame
		GEODE_AS_STATIC_FUNCTION(getColorFrame) 
	#endif

	#ifndef GEODE_STATICS_getColorIndex
		#define GEODE_STATICS_getColorIndex
		GEODE_AS_STATIC_FUNCTION(getColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getParentMode
		#define GEODE_STATICS_getParentMode
		GEODE_AS_STATIC_FUNCTION(getParentMode) 
	#endif

	#ifndef GEODE_STATICS_getSlopeAngle
		#define GEODE_STATICS_getSlopeAngle
		GEODE_AS_STATIC_FUNCTION(getSlopeAngle) 
	#endif

	#ifndef GEODE_STATICS_getGroupString
		#define GEODE_STATICS_getGroupString
		GEODE_AS_STATIC_FUNCTION(getGroupString) 
	#endif

	#ifndef GEODE_STATICS_getBoundingRect
		#define GEODE_STATICS_getBoundingRect
		GEODE_AS_STATIC_FUNCTION(getBoundingRect) 
	#endif

	#ifndef GEODE_STATICS_getCustomZLayer
		#define GEODE_STATICS_getCustomZLayer
		GEODE_AS_STATIC_FUNCTION(getCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_getLastPosition
		#define GEODE_STATICS_getLastPosition
		GEODE_AS_STATIC_FUNCTION(getLastPosition) 
	#endif

	#ifndef GEODE_STATICS_getObjectRadius
		#define GEODE_STATICS_getObjectRadius
		GEODE_AS_STATIC_FUNCTION(getObjectRadius) 
	#endif

	#ifndef GEODE_STATICS_getObjectZLayer
		#define GEODE_STATICS_getObjectZLayer
		GEODE_AS_STATIC_FUNCTION(getObjectZLayer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZOrder
		#define GEODE_STATICS_getObjectZOrder
		GEODE_AS_STATIC_FUNCTION(getObjectZOrder) 
	#endif

	#ifndef GEODE_STATICS_getGroupDisabled
		#define GEODE_STATICS_getGroupDisabled
		GEODE_AS_STATIC_FUNCTION(getGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_getMainColorMode
		#define GEODE_STATICS_getMainColorMode
		GEODE_AS_STATIC_FUNCTION(getMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_getScalePosDelta
		#define GEODE_STATICS_getScalePosDelta
		GEODE_AS_STATIC_FUNCTION(getScalePosDelta) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColor
		#define GEODE_STATICS_getSecondaryColor
		GEODE_AS_STATIC_FUNCTION(getSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_getObjectDirection
		#define GEODE_STATICS_getObjectDirection
		GEODE_AS_STATIC_FUNCTION(getObjectDirection) 
	#endif

	#ifndef GEODE_STATICS_getOuterObjectRect
		#define GEODE_STATICS_getOuterObjectRect
		GEODE_AS_STATIC_FUNCTION(getOuterObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectPointer
		#define GEODE_STATICS_getObjectRectPointer
		GEODE_AS_STATIC_FUNCTION(getObjectRectPointer) 
	#endif

	#ifndef GEODE_STATICS_getActiveColorForMode
		#define GEODE_STATICS_getActiveColorForMode
		GEODE_AS_STATIC_FUNCTION(getActiveColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColorMode
		#define GEODE_STATICS_getSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_getUnmodifiedPosition
		#define GEODE_STATICS_getUnmodifiedPosition
		GEODE_AS_STATIC_FUNCTION(getUnmodifiedPosition) 
	#endif

	#ifndef GEODE_STATICS_getRelativeSpriteColor
		#define GEODE_STATICS_getRelativeSpriteColor
		GEODE_AS_STATIC_FUNCTION(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_setAreaOpacity
		#define GEODE_STATICS_setAreaOpacity
		GEODE_AS_STATIC_FUNCTION(setAreaOpacity) 
	#endif

	#ifndef GEODE_STATICS_setGlowOpacity
		#define GEODE_STATICS_setGlowOpacity
		GEODE_AS_STATIC_FUNCTION(setGlowOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCustomZLayer
		#define GEODE_STATICS_setCustomZLayer
		GEODE_AS_STATIC_FUNCTION(setCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_setLastPosition
		#define GEODE_STATICS_setLastPosition
		GEODE_AS_STATIC_FUNCTION(setLastPosition) 
	#endif

	#ifndef GEODE_STATICS_setMainColorMode
		#define GEODE_STATICS_setMainColorMode
		GEODE_AS_STATIC_FUNCTION(setMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setSecondaryColorMode
		#define GEODE_STATICS_setSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDefaultMainColorMode
		#define GEODE_STATICS_setDefaultMainColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDefaultSecondaryColorMode
		#define GEODE_STATICS_setDefaultSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_copyGroups
		#define GEODE_STATICS_copyGroups
		GEODE_AS_STATIC_FUNCTION(copyGroups) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_groupColor
		#define GEODE_STATICS_groupColor
		GEODE_AS_STATIC_FUNCTION(groupColor) 
	#endif

	#ifndef GEODE_STATICS_ignoreFade
		#define GEODE_STATICS_ignoreFade
		GEODE_AS_STATIC_FUNCTION(ignoreFade) 
	#endif

	#ifndef GEODE_STATICS_removeGlow
		#define GEODE_STATICS_removeGlow
		GEODE_AS_STATIC_FUNCTION(removeGlow) 
	#endif

	#ifndef GEODE_STATICS_addRotation
		#define GEODE_STATICS_addRotation
		GEODE_AS_STATIC_FUNCTION(addRotation) 
	#endif

	#ifndef GEODE_STATICS_commonSetup
		#define GEODE_STATICS_commonSetup
		GEODE_AS_STATIC_FUNCTION(commonSetup) 
	#endif

	#ifndef GEODE_STATICS_ignoreEnter
		#define GEODE_STATICS_ignoreEnter
		GEODE_AS_STATIC_FUNCTION(ignoreEnter) 
	#endif

	#ifndef GEODE_STATICS_resetGroups
		#define GEODE_STATICS_resetGroups
		GEODE_AS_STATIC_FUNCTION(resetGroups) 
	#endif

	#ifndef GEODE_STATICS_shouldLockX
		#define GEODE_STATICS_shouldLockX
		GEODE_AS_STATIC_FUNCTION(shouldLockX) 
	#endif

	#ifndef GEODE_STATICS_addEmptyGlow
		#define GEODE_STATICS_addEmptyGlow
		GEODE_AS_STATIC_FUNCTION(addEmptyGlow) 
	#endif

	#ifndef GEODE_STATICS_colorForMode
		#define GEODE_STATICS_colorForMode
		GEODE_AS_STATIC_FUNCTION(colorForMode) 
	#endif

	#ifndef GEODE_STATICS_isFacingDown
		#define GEODE_STATICS_isFacingDown
		GEODE_AS_STATIC_FUNCTION(isFacingDown) 
	#endif

	#ifndef GEODE_STATICS_isFacingLeft
		#define GEODE_STATICS_isFacingLeft
		GEODE_AS_STATIC_FUNCTION(isFacingLeft) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01
		#define GEODE_STATICS_addNewSlope01
		GEODE_AS_STATIC_FUNCTION(addNewSlope01) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02
		#define GEODE_STATICS_addNewSlope02
		GEODE_AS_STATIC_FUNCTION(addNewSlope02) 
	#endif

	#ifndef GEODE_STATICS_canRotateFree
		#define GEODE_STATICS_canRotateFree
		GEODE_AS_STATIC_FUNCTION(canRotateFree) 
	#endif

	#ifndef GEODE_STATICS_createWithKey
		#define GEODE_STATICS_createWithKey
		GEODE_AS_STATIC_FUNCTION(createWithKey) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_disableObject
		#define GEODE_STATICS_disableObject
		GEODE_AS_STATIC_FUNCTION(disableObject) 
	#endif

	#ifndef GEODE_STATICS_isColorObject
		#define GEODE_STATICS_isColorObject
		GEODE_AS_STATIC_FUNCTION(isColorObject) 
	#endif

	#ifndef GEODE_STATICS_isSpeedObject
		#define GEODE_STATICS_isSpeedObject
		GEODE_AS_STATIC_FUNCTION(isSpeedObject) 
	#endif

	#ifndef GEODE_STATICS_makeInvisible
		#define GEODE_STATICS_makeInvisible
		GEODE_AS_STATIC_FUNCTION(makeInvisible) 
	#endif

	#ifndef GEODE_STATICS_slopeFloorTop
		#define GEODE_STATICS_slopeFloorTop
		GEODE_AS_STATIC_FUNCTION(slopeFloorTop) 
	#endif

	#ifndef GEODE_STATICS_slopeWallLeft
		#define GEODE_STATICS_slopeWallLeft
		GEODE_AS_STATIC_FUNCTION(slopeWallLeft) 
	#endif

	#ifndef GEODE_STATICS_addColorSprite
		#define GEODE_STATICS_addColorSprite
		GEODE_AS_STATIC_FUNCTION(addColorSprite) 
	#endif

	#ifndef GEODE_STATICS_addCustomChild
		#define GEODE_STATICS_addCustomChild
		GEODE_AS_STATIC_FUNCTION(addCustomChild) 
	#endif

	#ifndef GEODE_STATICS_assignUniqueID
		#define GEODE_STATICS_assignUniqueID
		GEODE_AS_STATIC_FUNCTION(assignUniqueID) 
	#endif

	#ifndef GEODE_STATICS_belongsToGroup
		#define GEODE_STATICS_belongsToGroup
		GEODE_AS_STATIC_FUNCTION(belongsToGroup) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_isBasicTrigger
		#define GEODE_STATICS_isBasicTrigger
		GEODE_AS_STATIC_FUNCTION(isBasicTrigger) 
	#endif

	#ifndef GEODE_STATICS_isColorTrigger
		#define GEODE_STATICS_isColorTrigger
		GEODE_AS_STATIC_FUNCTION(isColorTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateHSVState
		#define GEODE_STATICS_updateHSVState
		GEODE_AS_STATIC_FUNCTION(updateHSVState) 
	#endif

	#ifndef GEODE_STATICS_updateStartPos
		#define GEODE_STATICS_updateStartPos
		GEODE_AS_STATIC_FUNCTION(updateStartPos) 
	#endif

	#ifndef GEODE_STATICS_addToColorGroup
		#define GEODE_STATICS_addToColorGroup
		GEODE_AS_STATIC_FUNCTION(addToColorGroup) 
	#endif

	#ifndef GEODE_STATICS_addToTempOffset
		#define GEODE_STATICS_addToTempOffset
		GEODE_AS_STATIC_FUNCTION(addToTempOffset) 
	#endif

	#ifndef GEODE_STATICS_createWithFrame
		#define GEODE_STATICS_createWithFrame
		GEODE_AS_STATIC_FUNCTION(createWithFrame) 
	#endif

	#ifndef GEODE_STATICS_didScaleXChange
		#define GEODE_STATICS_didScaleXChange
		GEODE_AS_STATIC_FUNCTION(didScaleXChange) 
	#endif

	#ifndef GEODE_STATICS_didScaleYChange
		#define GEODE_STATICS_didScaleYChange
		GEODE_AS_STATIC_FUNCTION(didScaleYChange) 
	#endif

	#ifndef GEODE_STATICS_duplicateValues
		#define GEODE_STATICS_duplicateValues
		GEODE_AS_STATIC_FUNCTION(duplicateValues) 
	#endif

	#ifndef GEODE_STATICS_groupOpacityMod
		#define GEODE_STATICS_groupOpacityMod
		GEODE_AS_STATIC_FUNCTION(groupOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_groupWasEnabled
		#define GEODE_STATICS_groupWasEnabled
		GEODE_AS_STATIC_FUNCTION(groupWasEnabled) 
	#endif

	#ifndef GEODE_STATICS_isSpecialObject
		#define GEODE_STATICS_isSpecialObject
		GEODE_AS_STATIC_FUNCTION(isSpecialObject) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_playShineEffect
		#define GEODE_STATICS_playShineEffect
		GEODE_AS_STATIC_FUNCTION(playShineEffect) 
	#endif

	#ifndef GEODE_STATICS_resetMoveOffset
		#define GEODE_STATICS_resetMoveOffset
		GEODE_AS_STATIC_FUNCTION(resetMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_setupPixelScale
		#define GEODE_STATICS_setupPixelScale
		GEODE_AS_STATIC_FUNCTION(setupPixelScale) 
	#endif

	#ifndef GEODE_STATICS_setupSpriteSize
		#define GEODE_STATICS_setupSpriteSize
		GEODE_AS_STATIC_FUNCTION(setupSpriteSize) 
	#endif

	#ifndef GEODE_STATICS_updateBlendMode
		#define GEODE_STATICS_updateBlendMode
		GEODE_AS_STATIC_FUNCTION(updateBlendMode) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_addInternalChild
		#define GEODE_STATICS_addInternalChild
		GEODE_AS_STATIC_FUNCTION(addInternalChild) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectPos
		#define GEODE_STATICS_dirtifyObjectPos
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectPos) 
	#endif

	#ifndef GEODE_STATICS_fastRotateObject
		#define GEODE_STATICS_fastRotateObject
		GEODE_AS_STATIC_FUNCTION(fastRotateObject) 
	#endif

	#ifndef GEODE_STATICS_groupWasDisabled
		#define GEODE_STATICS_groupWasDisabled
		GEODE_AS_STATIC_FUNCTION(groupWasDisabled) 
	#endif

	#ifndef GEODE_STATICS_isSettingsObject
		#define GEODE_STATICS_isSettingsObject
		GEODE_AS_STATIC_FUNCTION(isSettingsObject) 
	#endif

	#ifndef GEODE_STATICS_objectFromVector
		#define GEODE_STATICS_objectFromVector
		GEODE_AS_STATIC_FUNCTION(objectFromVector) 
	#endif

	#ifndef GEODE_STATICS_perspectiveFrame
		#define GEODE_STATICS_perspectiveFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveFrame) 
	#endif

	#ifndef GEODE_STATICS_resetColorGroups
		#define GEODE_STATICS_resetColorGroups
		GEODE_AS_STATIC_FUNCTION(resetColorGroups) 
	#endif

	#ifndef GEODE_STATICS_setupColorSprite
		#define GEODE_STATICS_setupColorSprite
		GEODE_AS_STATIC_FUNCTION(setupColorSprite) 
	#endif

	#ifndef GEODE_STATICS_shouldBlendColor
		#define GEODE_STATICS_shouldBlendColor
		GEODE_AS_STATIC_FUNCTION(shouldBlendColor) 
	#endif

	#ifndef GEODE_STATICS_updateIsOriented
		#define GEODE_STATICS_updateIsOriented
		GEODE_AS_STATIC_FUNCTION(updateIsOriented) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01Glow
		#define GEODE_STATICS_addNewSlope01Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope01Glow) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02Glow
		#define GEODE_STATICS_addNewSlope02Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope02Glow) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleX
		#define GEODE_STATICS_addToCustomScaleX
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleY
		#define GEODE_STATICS_addToCustomScaleY
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_addToOpacityGroup
		#define GEODE_STATICS_addToOpacityGroup
		GEODE_AS_STATIC_FUNCTION(addToOpacityGroup) 
	#endif

	#ifndef GEODE_STATICS_createSpriteColor
		#define GEODE_STATICS_createSpriteColor
		GEODE_AS_STATIC_FUNCTION(createSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectRect
		#define GEODE_STATICS_dirtifyObjectRect
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectRect) 
	#endif

	#ifndef GEODE_STATICS_hasSecondaryColor
		#define GEODE_STATICS_hasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(hasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_opacityModForMode
		#define GEODE_STATICS_opacityModForMode
		GEODE_AS_STATIC_FUNCTION(opacityModForMode) 
	#endif

	#ifndef GEODE_STATICS_removeColorSprite
		#define GEODE_STATICS_removeColorSprite
		GEODE_AS_STATIC_FUNCTION(removeColorSprite) 
	#endif

	#ifndef GEODE_STATICS_resetRScaleForced
		#define GEODE_STATICS_resetRScaleForced
		GEODE_AS_STATIC_FUNCTION(resetRScaleForced) 
	#endif

	#ifndef GEODE_STATICS_updateMainOpacity
		#define GEODE_STATICS_updateMainOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainOpacity) 
	#endif

	#ifndef GEODE_STATICS_canChangeMainColor
		#define GEODE_STATICS_canChangeMainColor
		GEODE_AS_STATIC_FUNCTION(canChangeMainColor) 
	#endif

	#ifndef GEODE_STATICS_duplicateColorMode
		#define GEODE_STATICS_duplicateColorMode
		GEODE_AS_STATIC_FUNCTION(duplicateColorMode) 
	#endif

	#ifndef GEODE_STATICS_editorColorForMode
		#define GEODE_STATICS_editorColorForMode
		GEODE_AS_STATIC_FUNCTION(editorColorForMode) 
	#endif

	#ifndef GEODE_STATICS_isBasicEnterEffect
		#define GEODE_STATICS_isBasicEnterEffect
		GEODE_AS_STATIC_FUNCTION(isBasicEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_isSpawnableTrigger
		#define GEODE_STATICS_isSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isStoppableTrigger
		#define GEODE_STATICS_isStoppableTrigger
		GEODE_AS_STATIC_FUNCTION(isStoppableTrigger) 
	#endif

	#ifndef GEODE_STATICS_reorderColorSprite
		#define GEODE_STATICS_reorderColorSprite
		GEODE_AS_STATIC_FUNCTION(reorderColorSprite) 
	#endif

	#ifndef GEODE_STATICS_resetGroupDisabled
		#define GEODE_STATICS_resetGroupDisabled
		GEODE_AS_STATIC_FUNCTION(resetGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_resetMainColorMode
		#define GEODE_STATICS_resetMainColorMode
		GEODE_AS_STATIC_FUNCTION(resetMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleX
		#define GEODE_STATICS_updateCustomScaleX
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleY
		#define GEODE_STATICS_updateCustomScaleY
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_addCustomBlackChild
		#define GEODE_STATICS_addCustomBlackChild
		GEODE_AS_STATIC_FUNCTION(addCustomBlackChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomColorChild
		#define GEODE_STATICS_addCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_duplicateAttributes
		#define GEODE_STATICS_duplicateAttributes
		GEODE_AS_STATIC_FUNCTION(duplicateAttributes) 
	#endif

	#ifndef GEODE_STATICS_playPickupAnimation
		#define GEODE_STATICS_playPickupAnimation
		GEODE_AS_STATIC_FUNCTION(playPickupAnimation) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition
		#define GEODE_STATICS_quickUpdatePosition
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition) 
	#endif

	#ifndef GEODE_STATICS_updateMainColorOnly
		#define GEODE_STATICS_updateMainColorOnly
		GEODE_AS_STATIC_FUNCTION(updateMainColorOnly) 
	#endif

	#ifndef GEODE_STATICS_usesFreezeAnimation
		#define GEODE_STATICS_usesFreezeAnimation
		GEODE_AS_STATIC_FUNCTION(usesFreezeAnimation) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToSelf
		#define GEODE_STATICS_addColorSpriteToSelf
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToSelf) 
	#endif

	#ifndef GEODE_STATICS_addInternalGlowChild
		#define GEODE_STATICS_addInternalGlowChild
		GEODE_AS_STATIC_FUNCTION(addInternalGlowChild) 
	#endif

	#ifndef GEODE_STATICS_calculateOrientedBox
		#define GEODE_STATICS_calculateOrientedBox
		GEODE_AS_STATIC_FUNCTION(calculateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_canChangeCustomColor
		#define GEODE_STATICS_canChangeCustomColor
		GEODE_AS_STATIC_FUNCTION(canChangeCustomColor) 
	#endif

	#ifndef GEODE_STATICS_createAndAddParticle
		#define GEODE_STATICS_createAndAddParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddParticle) 
	#endif

	#ifndef GEODE_STATICS_createGroupContainer
		#define GEODE_STATICS_createGroupContainer
		GEODE_AS_STATIC_FUNCTION(createGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_ignoreEditorDuration
		#define GEODE_STATICS_ignoreEditorDuration
		GEODE_AS_STATIC_FUNCTION(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_STATICS_isConfigurablePortal
		#define GEODE_STATICS_isConfigurablePortal
		GEODE_AS_STATIC_FUNCTION(isConfigurablePortal) 
	#endif

	#ifndef GEODE_STATICS_loadGroupsFromString
		#define GEODE_STATICS_loadGroupsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupsFromString) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition2
		#define GEODE_STATICS_quickUpdatePosition2
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition2) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_usesSpecialAnimation
		#define GEODE_STATICS_usesSpecialAnimation
		GEODE_AS_STATIC_FUNCTION(usesSpecialAnimation) 
	#endif

	#ifndef GEODE_STATICS_dontCountTowardsLimit
		#define GEODE_STATICS_dontCountTowardsLimit
		GEODE_AS_STATIC_FUNCTION(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_STATICS_perspectiveColorFrame
		#define GEODE_STATICS_perspectiveColorFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_STATICS_playDestroyObjectAnim
		#define GEODE_STATICS_playDestroyObjectAnim
		GEODE_AS_STATIC_FUNCTION(playDestroyObjectAnim) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorType
		#define GEODE_STATICS_updateCustomColorType
		GEODE_AS_STATIC_FUNCTION(updateCustomColorType) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToParent
		#define GEODE_STATICS_addColorSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_commonInteractiveSetup
		#define GEODE_STATICS_commonInteractiveSetup
		GEODE_AS_STATIC_FUNCTION(commonInteractiveSetup) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryOpacity
		#define GEODE_STATICS_updateSecondaryOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryOpacity) 
	#endif

	#ifndef GEODE_STATICS_canChangeSecondaryColor
		#define GEODE_STATICS_canChangeSecondaryColor
		GEODE_AS_STATIC_FUNCTION(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_determineSlopeDirection
		#define GEODE_STATICS_determineSlopeDirection
		GEODE_AS_STATIC_FUNCTION(determineSlopeDirection) 
	#endif

	#ifndef GEODE_STATICS_resetSecondaryColorMode
		#define GEODE_STATICS_resetSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_shouldNotHideAnimFreeze
		#define GEODE_STATICS_shouldNotHideAnimFreeze
		GEODE_AS_STATIC_FUNCTION(shouldNotHideAnimFreeze) 
	#endif

	#ifndef GEODE_STATICS_shouldShowPickupEffects
		#define GEODE_STATICS_shouldShowPickupEffects
		GEODE_AS_STATIC_FUNCTION(shouldShowPickupEffects) 
	#endif

	#ifndef GEODE_STATICS_updateObjectEditorColor
		#define GEODE_STATICS_updateObjectEditorColor
		GEODE_AS_STATIC_FUNCTION(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_STATICS_editorColorForCustomMode
		#define GEODE_STATICS_editorColorForCustomMode
		GEODE_AS_STATIC_FUNCTION(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_STATICS_isEditorSpawnableTrigger
		#define GEODE_STATICS_isEditorSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isEditorSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColorOnly
		#define GEODE_STATICS_updateSecondaryColorOnly
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColorOnly) 
	#endif

	#ifndef GEODE_STATICS_createColorGroupContainer
		#define GEODE_STATICS_createColorGroupContainer
		GEODE_AS_STATIC_FUNCTION(createColorGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_updateUnmodifiedPositions
		#define GEODE_STATICS_updateUnmodifiedPositions
		GEODE_AS_STATIC_FUNCTION(updateUnmodifiedPositions) 
	#endif

	#ifndef GEODE_STATICS_spawnDefaultPickupParticle
		#define GEODE_STATICS_spawnDefaultPickupParticle
		GEODE_AS_STATIC_FUNCTION(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_STATICS_addInternalCustomColorChild
		#define GEODE_STATICS_addInternalCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_createOpacityGroupContainer
		#define GEODE_STATICS_createOpacityGroupContainer
		GEODE_AS_STATIC_FUNCTION(createOpacityGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_addGlow
		#define GEODE_STATICS_addGlow
		GEODE_AS_STATIC_FUNCTION(addGlow) 
	#endif

	#ifndef GEODE_STATICS_resetMID
		#define GEODE_STATICS_resetMID
		GEODE_AS_STATIC_FUNCTION(resetMID) 
	#endif

	#ifndef GEODE_STATICS_isTrigger
		#define GEODE_STATICS_isTrigger
		GEODE_AS_STATIC_FUNCTION(isTrigger) 
	#endif

	#ifndef GEODE_STATICS_slopeYPos
		#define GEODE_STATICS_slopeYPos
		GEODE_AS_STATIC_FUNCTION(slopeYPos) 
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

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_transferObjectRect
		#define GEODE_STATICS_transferObjectRect
		GEODE_AS_STATIC_FUNCTION(transferObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect2
		#define GEODE_STATICS_getObjectRect2
		GEODE_AS_STATIC_FUNCTION(getObjectRect2) 
	#endif

	#ifndef GEODE_STATICS_getObjectTextureRect
		#define GEODE_STATICS_getObjectTextureRect
		GEODE_AS_STATIC_FUNCTION(getObjectTextureRect) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_particleWasActivated
		#define GEODE_STATICS_particleWasActivated
		GEODE_AS_STATIC_FUNCTION(particleWasActivated) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_getRScaleX
		#define GEODE_STATICS_getRScaleX
		GEODE_AS_STATIC_FUNCTION(getRScaleX) 
	#endif

	#ifndef GEODE_STATICS_getRScaleY
		#define GEODE_STATICS_getRScaleY
		GEODE_AS_STATIC_FUNCTION(getRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRRotation
		#define GEODE_STATICS_setRRotation
		GEODE_AS_STATIC_FUNCTION(setRRotation) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_setGlowColor
		#define GEODE_STATICS_setGlowColor
		GEODE_AS_STATIC_FUNCTION(setGlowColor) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_animationTriggered
		#define GEODE_STATICS_animationTriggered
		GEODE_AS_STATIC_FUNCTION(animationTriggered) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_activatedByPlayer
		#define GEODE_STATICS_activatedByPlayer
		GEODE_AS_STATIC_FUNCTION(activatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivatedByPlayer
		#define GEODE_STATICS_hasBeenActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivated
		#define GEODE_STATICS_hasBeenActivated
		GEODE_AS_STATIC_FUNCTION(hasBeenActivated) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_updateOrientedBox
		#define GEODE_STATICS_updateOrientedBox
		GEODE_AS_STATIC_FUNCTION(updateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRotation
		#define GEODE_STATICS_getObjectRotation
		GEODE_AS_STATIC_FUNCTION(getObjectRotation) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_blendModeChanged
		#define GEODE_STATICS_blendModeChanged
		GEODE_AS_STATIC_FUNCTION(blendModeChanged) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_updateParticleOpacity
		#define GEODE_STATICS_updateParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateMainParticleOpacity
		#define GEODE_STATICS_updateMainParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryParticleOpacity
		#define GEODE_STATICS_updateSecondaryParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_canReverse
		#define GEODE_STATICS_canReverse
		GEODE_AS_STATIC_FUNCTION(canReverse) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSpawnObject
		#define GEODE_STATICS_isSpecialSpawnObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_STATICS_canBeOrdered
		#define GEODE_STATICS_canBeOrdered
		GEODE_AS_STATIC_FUNCTION(canBeOrdered) 
	#endif

	#ifndef GEODE_STATICS_getObjectLabel
		#define GEODE_STATICS_getObjectLabel
		GEODE_AS_STATIC_FUNCTION(getObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_setObjectLabel
		#define GEODE_STATICS_setObjectLabel
		GEODE_AS_STATIC_FUNCTION(setObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawEditorHitbox
		#define GEODE_STATICS_shouldDrawEditorHitbox
		GEODE_AS_STATIC_FUNCTION(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_getHasSyncedAnimation
		#define GEODE_STATICS_getHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_getHasRotateAction
		#define GEODE_STATICS_getHasRotateAction
		GEODE_AS_STATIC_FUNCTION(getHasRotateAction) 
	#endif

	#ifndef GEODE_STATICS_canMultiActivate
		#define GEODE_STATICS_canMultiActivate
		GEODE_AS_STATIC_FUNCTION(canMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_updateTextKerning
		#define GEODE_STATICS_updateTextKerning
		GEODE_AS_STATIC_FUNCTION(updateTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getTextKerning
		#define GEODE_STATICS_getTextKerning
		GEODE_AS_STATIC_FUNCTION(getTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectDirty
		#define GEODE_STATICS_getObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(getObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setObjectRectDirty
		#define GEODE_STATICS_setObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(setObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getOrientedRectDirty
		#define GEODE_STATICS_getOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setOrientedRectDirty
		#define GEODE_STATICS_setOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObject> : ModifyBase<ModifyDerive<Der, GameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObject>>;
		using ModifyBase<ModifyDerive<Der, GameObject>>::ModifyBase;
		using Base = GameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x569ef0, Default, GameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1d3710, Default, GameObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585ef0, Default, GameObject, getGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586990, Default, GameObject, getColorKey, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x590f00, Default, GameObject, getLastPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5915e0, Default, GameObject, getObjectRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585820, Default, GameObject, getObjectZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586250, Default, GameObject, getGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x590d20, Default, GameObject, getActiveColorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2af0, Default, GameObject, getStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585f10, Default, GameObject, copyGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56c6f0, Default, GameObject, removeGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x569f20, Default, GameObject, commonSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x565320, Default, GameObject, createWithKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5849e0, Default, GameObject, disableObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591560, Default, GameObject, isSpeedObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56a1a0, Default, GameObject, assignUniqueID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58f330, Default, GameObject, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591490, Default, GameObject, isColorTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571590, Default, GameObject, updateStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x569e80, Default, GameObject, createWithFrame, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584a20, Default, GameObject, playShineEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586280, Default, GameObject, groupWasDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591b00, Default, GameObject, isSettingsObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5875c0, Default, GameObject, objectFromVector, gd::vector<gd::string>&, gd::vector<void*>&, GJBaseGameLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58fb60, Default, GameObject, updateIsOriented, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5900c0, Default, GameObject, hasSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571970, Default, GameObject, updateCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5719f0, Default, GameObject, updateCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585840, Default, GameObject, addColorSpriteToSelf, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57ce00, Default, GameObject, createAndAddParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585d40, Default, GameObject, createGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571da0, Default, GameObject, addColorSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585940, Default, GameObject, determineSlopeDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58f350, Default, GameObject, updateObjectEditorColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x572160, Default, GameObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583940, Default, GameObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5839e0, Default, GameObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583a80, Default, GameObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5833c0, Default, GameObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584180, Default, GameObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583630, Default, GameObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583700, Default, GameObject, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5837c0, Default, GameObject, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583de0, Default, GameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56a0b0, Default, GameObject, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58eec0, Default, GameObject, setChildColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5838a0, Default, GameObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5838f0, Default, GameObject, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3ba0, Default, GameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x572170, Default, GameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4220f0, Default, GameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585650, Default, GameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571620, Default, GameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3820, Default, GameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571c40, Default, GameObject, activateObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571fb0, Default, GameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x582cb0, Default, GameObject, transferObjectRect, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x582d20, Default, GameObject, getObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x582d50, Default, GameObject, getObjectRect, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x582f90, Default, GameObject, getObjectRect2, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583060, Default, GameObject, getObjectTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583300, Default, GameObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571510, Default, GameObject, setStartPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571a70, Default, GameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a860, Default, GameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x588f50, Default, GameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5842e0, Default, GameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5848d0, Default, GameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584940, Default, GameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583880, Default, GameObject, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583890, Default, GameObject, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583b20, Default, GameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583b60, Default, GameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583ba0, Default, GameObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583c20, Default, GameObject, getRScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583c50, Default, GameObject, getRScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5835b0, Default, GameObject, setRRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2940, Default, GameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ebe0, Default, GameObject, setObjectColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ee70, Default, GameObject, setGlowColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584980, Default, GameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2950, Default, GameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ef30, Default, GameObject, selectObject, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2960, Default, GameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2970, Default, GameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2980, Default, GameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58f940, Default, GameObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58f9c0, Default, GameObject, updateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5979f0, Default, GameObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5905c0, Default, GameObject, updateMainColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x590ad0, Default, GameObject, updateSecondaryColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585db0, Default, GameObject, addToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585e60, Default, GameObject, removeFromGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ea40, Default, GameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2990, Default, GameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d29b0, Default, GameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d29c0, Default, GameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58edb0, Default, GameObject, updateParticleColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584100, Default, GameObject, updateParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d29d0, Default, GameObject, updateMainParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d29e0, Default, GameObject, updateSecondaryParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d29f0, Default, GameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a00, Default, GameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a10, Default, GameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a20, Default, GameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a30, Default, GameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591c30, Default, GameObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a40, Default, GameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a50, Default, GameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a60, Default, GameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a70, Default, GameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a80, Default, GameObject, getTextKerning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2a90, Default, GameObject, getObjectRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2aa0, Default, GameObject, setObjectRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2ab0, Default, GameObject, getOrientedRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2ac0, Default, GameObject, setOrientedRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2ad0, Default, GameObject, getType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2ae0, Default, GameObject, setType, GameObjectType)
		}
	};
}
