#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS: 0x569ef0
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] MacOS: 0x1d3710
     * @note[short] Android
     */
     GameObject();

    /**
     * @note[short] MacOS: 0x585ef0
     * @note[short] Android
     */
    TodoReturn getGroupID(int p0);

    /**
     * @note[short] MacOS: 0x586990
     * @note[short] Windows: 0x13be40
     * @note[short] Android
     */
    int getColorKey(bool p0, bool p1);
    
private:
    [[deprecated("GameObject::getBallFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBallFrame(int p0);
public:
    
private:
    [[deprecated("GameObject::getBoxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoxOffset();
public:
    
private:
    [[deprecated("GameObject::getGlowFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGlowFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColor();
public:
    
private:
    [[deprecated("GameObject::getColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorIndex();
public:
    
private:
    [[deprecated("GameObject::getParentMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParentMode();
public:
    
private:
    [[deprecated("GameObject::getSlopeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSlopeAngle();
public:
    
private:
    [[deprecated("GameObject::getGroupString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupString();
public:
    
private:
    [[deprecated("GameObject::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoundingRect();
public:
    
private:
    [[deprecated("GameObject::getCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomZLayer();
public:

    /**
     * @note[short] MacOS: 0x590f00
     * @note[short] Android
     */
    TodoReturn getLastPosition();

    /**
     * @note[short] MacOS: 0x5915e0
     * @note[short] Android
     */
    float getObjectRadius();
    
private:
    [[deprecated("GameObject::getObjectZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectZLayer();
public:

    /**
     * @note[short] MacOS: 0x585820
     * @note[short] Android
     */
    TodoReturn getObjectZOrder();

    /**
     * @note[short] MacOS: 0x586250
     * @note[short] Android
     */
    bool getGroupDisabled();
    
private:
    [[deprecated("GameObject::getMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColorMode();
public:
    
private:
    [[deprecated("GameObject::getScalePosDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScalePosDelta();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::getObjectDirection not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectDirection();
public:
    
private:
    [[deprecated("GameObject::getOuterObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOuterObjectRect();
public:
    
private:
    [[deprecated("GameObject::getObjectRectPointer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRectPointer();
public:

    /**
     * @note[short] MacOS: 0x590d20
     * @note[short] Windows: 0x140ba0
     * @note[short] Android
     */
    TodoReturn getActiveColorForMode(int p0, bool p1);
    
private:
    [[deprecated("GameObject::getSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::getUnmodifiedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUnmodifiedPosition();
public:
    
private:
    [[deprecated("GameObject::getRelativeSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeSpriteColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x1d2af0
     * @note[short] Android
     */
    TodoReturn getStartPos();
    
private:
    [[deprecated("GameObject::setAreaOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setAreaOpacity(float p0, float p1, int p2);
public:
    
private:
    [[deprecated("GameObject::setGlowOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::setCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomZLayer(int p0);
public:
    
private:
    [[deprecated("GameObject::setLastPosition not implemented")]]
    /**
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("GameObject::setMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);
public:

    /**
     * @note[short] MacOS: 0x585f10
     * @note[short] Android
     */
    TodoReturn copyGroups(GameObject* p0);
    
private:
    [[deprecated("GameObject::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::groupColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupColor(cocos2d::_ccColor3B const& p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::ignoreFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreFade();
public:

    /**
     * @note[short] MacOS: 0x56c6f0
     * @note[short] Android
     */
    TodoReturn removeGlow();
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x569f20
     * @note[short] Windows: 0x12f1a0
     * @note[short] Android
     */
    void commonSetup();
    
private:
    [[deprecated("GameObject::ignoreEnter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreEnter();
public:
    
private:
    [[deprecated("GameObject::resetGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroups();
public:
    
private:
    [[deprecated("GameObject::shouldLockX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldLockX();
public:
    
private:
    [[deprecated("GameObject::addEmptyGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addEmptyGlow();
public:
    
private:
    [[deprecated("GameObject::colorForMode not implemented")]]
    /**
     * @note[short] Windows: 0x1408c0
     * @note[short] Android
     */
    TodoReturn colorForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::isFacingDown not implemented")]]
    /**
     * @note[short] Windows: 0x13fff0
     * @note[short] Android
     */
    bool isFacingDown();
public:
    
private:
    [[deprecated("GameObject::isFacingLeft not implemented")]]
    /**
     * @note[short] Android
     */
    bool isFacingLeft();
public:
    
private:
    [[deprecated("GameObject::addNewSlope01 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02(bool p0);
public:
    
private:
    [[deprecated("GameObject::canRotateFree not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canRotateFree();
public:

    /**
     * @note[short] MacOS: 0x565320
     * @note[short] Windows: 0x12e410
     * @note[short] Android
     */
    TodoReturn createWithKey(int p0);
    
private:
    [[deprecated("GameObject::destroyObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn destroyObject();
public:

    /**
     * @note[short] MacOS: 0x5849e0
     * @note[short] Android
     */
    TodoReturn disableObject();
    
private:
    [[deprecated("GameObject::isColorObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorObject();
public:

    /**
     * @note[short] MacOS: 0x591560
     * @note[short] Windows: 0x1417e0
     * @note[short] Android
     */
    bool isSpeedObject();
    
private:
    [[deprecated("GameObject::makeInvisible not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn makeInvisible();
public:
    
private:
    [[deprecated("GameObject::slopeFloorTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeFloorTop();
public:
    
private:
    [[deprecated("GameObject::slopeWallLeft not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeWallLeft();
public:
    
private:
    [[deprecated("GameObject::addColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSprite(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addCustomChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x56a1a0
     * @note[short] Android
     */
    TodoReturn assignUniqueID();
    
private:
    [[deprecated("GameObject::belongsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn belongsToGroup(int p0);
public:

    /**
     * @note[short] MacOS: 0x58f330
     * @note[short] Android
     */
    void deselectObject();
    
private:
    [[deprecated("GameObject::isBasicTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicTrigger();
public:

    /**
     * @note[short] MacOS: 0x591490
     * @note[short] Android
     */
    bool isColorTrigger();
    
private:
    [[deprecated("GameObject::updateHSVState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVState();
public:

    /**
     * @note[short] MacOS: 0x571590
     * @note[short] Android
     */
    TodoReturn updateStartPos();
    
private:
    [[deprecated("GameObject::addToColorGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToColorGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToTempOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToTempOffset(double p0, double p1);
public:

    /**
     * @note[short] MacOS: 0x569e80
     * @note[short] Windows: 0x12f0a0
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* p0);
    
private:
    [[deprecated("GameObject::didScaleXChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleXChange();
public:
    
private:
    [[deprecated("GameObject::didScaleYChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleYChange();
public:
    
private:
    [[deprecated("GameObject::duplicateValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateValues(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::groupOpacityMod not implemented")]]
    /**
     * @note[short] Windows: 0x13bc10
     * @note[short] Android
     */
    TodoReturn groupOpacityMod();
public:
    
private:
    [[deprecated("GameObject::groupWasEnabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupWasEnabled();
public:
    
private:
    [[deprecated("GameObject::isSpecialObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialObject();
public:
    
private:
    [[deprecated("GameObject::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x584a20
     * @note[short] Android
     */
    void playShineEffect();
    
private:
    [[deprecated("GameObject::resetMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOffset();
public:
    
private:
    [[deprecated("GameObject::setupPixelScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPixelScale();
public:
    
private:
    [[deprecated("GameObject::setupSpriteSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSpriteSize();
public:
    
private:
    [[deprecated("GameObject::updateBlendMode not implemented")]]
    /**
     * @note[short] Windows: 0x13add0
     * @note[short] Android
     */
    TodoReturn updateBlendMode();
public:
    
private:
    [[deprecated("GameObject::updateMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainColor();
public:
    
private:
    [[deprecated("GameObject::addInternalChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectPos();
public:
    
private:
    [[deprecated("GameObject::fastRotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fastRotateObject(float p0);
public:

    /**
     * @note[short] MacOS: 0x586280
     * @note[short] Android
     */
    TodoReturn groupWasDisabled();

    /**
     * @note[short] MacOS: 0x591b00
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS: 0x5875c0
     * @note[short] Windows: 0x13c2d0
     * @note[short] Android
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    
private:
    [[deprecated("GameObject::perspectiveFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::resetColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetColorGroups();
public:
    
private:
    [[deprecated("GameObject::setupColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupColorSprite(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::shouldBlendColor not implemented")]]
    /**
     * @note[short] Windows: 0x131950
     * @note[short] Android
     */
    TodoReturn shouldBlendColor(GJSpriteColor* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x58fb60
     * @note[short] Windows: 0x13fe50
     * @note[short] Android
     */
    void updateIsOriented();
    
private:
    [[deprecated("GameObject::addNewSlope01Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToCustomScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToCustomScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::addToOpacityGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToOpacityGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::createSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSpriteColor(int p0);
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectRect();
public:

    /**
     * @note[short] MacOS: 0x5900c0
     * @note[short] Android
     */
    TodoReturn hasSecondaryColor();
    
private:
    [[deprecated("GameObject::opacityModForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityModForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::removeColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetRScaleForced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetRScaleForced();
public:
    
private:
    [[deprecated("GameObject::updateMainOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainOpacity();
public:
    
private:
    [[deprecated("GameObject::canChangeMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeMainColor();
public:
    
private:
    [[deprecated("GameObject::duplicateColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateColorMode(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::editorColorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorColorForMode(int p0);
public:
    
private:
    [[deprecated("GameObject::isBasicEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicEnterEffect(int p0);
public:
    
private:
    [[deprecated("GameObject::isSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpawnableTrigger();
public:
    
private:
    [[deprecated("GameObject::isStoppableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isStoppableTrigger();
public:
    
private:
    [[deprecated("GameObject::reorderColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::resetMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMainColorMode();
public:

    /**
     * @note[short] MacOS: 0x571970
     * @note[short] Android
     */
    void updateCustomScaleX(float p0);

    /**
     * @note[short] MacOS: 0x5719f0
     * @note[short] Android
     */
    void updateCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::addCustomBlackChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomBlackChild(gd::string p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GameObject::addCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomColorChild(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::duplicateAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateAttributes(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition();
public:
    
private:
    [[deprecated("GameObject::updateMainColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainColorOnly();
public:
    
private:
    [[deprecated("GameObject::usesFreezeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesFreezeAnimation();
public:

    /**
     * @note[short] MacOS: 0x585840
     * @note[short] Android
     */
    GameObject* addColorSpriteToSelf();
    
private:
    [[deprecated("GameObject::addInternalGlowChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameObject::calculateOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::canChangeCustomColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeCustomColor();
public:

    /**
     * @note[short] MacOS: 0x57ce00
     * @note[short] Windows: 0x139650
     * @note[short] Android
     */
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] MacOS: 0x585d40
     * @note[short] Android
     */
    void createGroupContainer(int p0);
    
private:
    [[deprecated("GameObject::ignoreEditorDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreEditorDuration();
public:
    
private:
    [[deprecated("GameObject::isConfigurablePortal not implemented")]]
    /**
     * @note[short] Android
     */
    bool isConfigurablePortal();
public:
    
private:
    [[deprecated("GameObject::loadGroupsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadGroupsFromString(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition2();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::usesSpecialAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesSpecialAnimation();
public:
    
private:
    [[deprecated("GameObject::dontCountTowardsLimit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dontCountTowardsLimit();
public:
    
private:
    [[deprecated("GameObject::perspectiveColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveColorFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::playDestroyObjectAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playDestroyObjectAnim(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::updateCustomColorType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColorType(short p0);
public:

    /**
     * @note[short] MacOS: 0x571da0
     * @note[short] Android
     */
    GameObject* addColorSpriteToParent(bool p0);
    
private:
    [[deprecated("GameObject::commonInteractiveSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commonInteractiveSetup();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryOpacity();
public:
    
private:
    [[deprecated("GameObject::canChangeSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeSecondaryColor();
public:

    /**
     * @note[short] MacOS: 0x585940
     * @note[short] Windows: 0x13b260
     * @note[short] Android
     */
    void determineSlopeDirection();
    
private:
    [[deprecated("GameObject::resetSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::shouldNotHideAnimFreeze not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldNotHideAnimFreeze();
public:
    
private:
    [[deprecated("GameObject::shouldShowPickupEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldShowPickupEffects();
public:

    /**
     * @note[short] MacOS: 0x58f350
     * @note[short] Android
     */
    void updateObjectEditorColor();
    
private:
    [[deprecated("GameObject::editorColorForCustomMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorColorForCustomMode(int p0);
public:
    
private:
    [[deprecated("GameObject::isEditorSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryColorOnly();
public:
    
private:
    [[deprecated("GameObject::createColorGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createColorGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::updateUnmodifiedPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUnmodifiedPositions();
public:
    
private:
    [[deprecated("GameObject::spawnDefaultPickupParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDefaultPickupParticle(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::addInternalCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::createOpacityGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOpacityGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::addGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::resetMID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMID();
public:
    
private:
    [[deprecated("GameObject::isTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isTrigger();
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(float p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x572160
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x583940
     * @note[short] Windows: 0x138e40
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS: 0x5839e0
     * @note[short] Windows: 0x138ed0
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS: 0x583a80
     * @note[short] Windows: 0x138f60
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x5833c0
     * @note[short] Windows: 0x138900
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x584180
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS: 0x583630
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x583700
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS: 0x5837c0
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS: 0x583de0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x56a0b0
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS: 0x58eec0
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x5838a0
     * @note[short] Windows: 0x138dc0
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS: 0x5838f0
     * @note[short] Windows: 0x138e00
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] MacOS: 0x1a3ba0
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS: 0x572170
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x4220f0
     * @note[short] Windows: 0x14bc10
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS: 0x585650
     * @note[short] Windows: 0x13ae30
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS: 0x571620
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x1a3820
     * @note[short] Windows: 0x1d230
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x571c40
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS: 0x571fb0
     * @note[short] Windows: 0x131860
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS: 0x582cb0
     * @note[short] Windows: 0x1383e0
     * @note[short] Android
     */
    virtual TodoReturn transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] MacOS: 0x582d20
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS: 0x582d50
     * @note[short] Windows: 0x138430
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    /**
     * @note[short] MacOS: 0x582f90
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect2(float p0, float p1);

    /**
     * @note[short] MacOS: 0x583060
     * @note[short] Android
     */
    virtual TodoReturn getObjectTextureRect();

    /**
     * @note[short] MacOS: 0x583300
     * @note[short] Android
     */
    virtual TodoReturn getRealPosition();

    /**
     * @note[short] MacOS: 0x571510
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS: 0x571a70
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS: 0x37a860
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x588f50
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x5842e0
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();

    /**
     * @note[short] MacOS: 0x5848d0
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();

    /**
     * @note[short] MacOS: 0x584940
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();

    /**
     * @note[short] MacOS: 0x583880
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS: 0x583890
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS: 0x583b20
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS: 0x583b60
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS: 0x583ba0
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS: 0x583c20
     * @note[short] Android
     */
    virtual TodoReturn getRScaleX();

    /**
     * @note[short] MacOS: 0x583c50
     * @note[short] Android
     */
    virtual TodoReturn getRScaleY();

    /**
     * @note[short] MacOS: 0x5835b0
     * @note[short] Android
     */
    virtual void setRRotation(float p0);

    /**
     * @note[short] MacOS: 0x1d2940
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS: 0x58ebe0
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x58ee70
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x584980
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS: 0x1d2950
     * @note[short] Android
     */
    virtual TodoReturn animationTriggered();

    /**
     * @note[short] MacOS: 0x58ef30
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x1d2960
     * @note[short] Android
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS: 0x1d2970
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS: 0x1d2980
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivated();

    /**
     * @note[short] MacOS: 0x58f940
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] MacOS: 0x58f9c0
     * @note[short] Android
     */
    virtual TodoReturn updateOrientedBox();

    /**
     * @note[short] MacOS: 0x5979f0
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();

    /**
     * @note[short] MacOS: 0x5905c0
     * @note[short] Android
     */
    virtual TodoReturn updateMainColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x590ad0
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x585db0
     * @note[short] Android
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] MacOS: 0x585e60
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS: 0x58ea40
     * @note[short] Android
     */
    virtual TodoReturn saveActiveColors();

    /**
     * @note[short] MacOS: 0x1d2990
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();

    /**
     * @note[short] MacOS: 0x1d29b0
     * @note[short] Android
     */
    virtual TodoReturn canAllowMultiActivate();

    /**
     * @note[short] MacOS: 0x1d29c0
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();

    /**
     * @note[short] MacOS: 0x58edb0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x584100
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1d29d0
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1d29e0
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1d29f0
     * @note[short] Android
     */
    virtual TodoReturn canReverse();

    /**
     * @note[short] MacOS: 0x1d2a00
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS: 0x1d2a10
     * @note[short] Android
     */
    virtual TodoReturn canBeOrdered();

    /**
     * @note[short] MacOS: 0x1d2a20
     * @note[short] Android
     */
    virtual TodoReturn getObjectLabel();

    /**
     * @note[short] MacOS: 0x1d2a30
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS: 0x591c30
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS: 0x1d2a40
     * @note[short] Android
     */
    virtual TodoReturn getHasSyncedAnimation();

    /**
     * @note[short] MacOS: 0x1d2a50
     * @note[short] Android
     */
    virtual TodoReturn getHasRotateAction();

    /**
     * @note[short] MacOS: 0x1d2a60
     * @note[short] Android
     */
    virtual TodoReturn canMultiActivate(bool p0);

    /**
     * @note[short] MacOS: 0x1d2a70
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);

    /**
     * @note[short] MacOS: 0x1d2a80
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();

    /**
     * @note[short] MacOS: 0x1d2a90
     * @note[short] Android
     */
    virtual TodoReturn getObjectRectDirty() const ;

    /**
     * @note[short] MacOS: 0x1d2aa0
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] MacOS: 0x1d2ab0
     * @note[short] Android
     */
    virtual TodoReturn getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS: 0x1d2ac0
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);

    /**
     * @note[short] MacOS: 0x1d2ad0
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS: 0x1d2ae0
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);
    GEODE_PAD(5);
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    GEODE_PAD(19);
    int m_activeMainColorID;
    int m_activeDetailColorID;
    GEODE_PAD(84);
    cocos2d::CCSprite* m_glowSprite;
    GEODE_PAD(4);
    float m_unk288;
    float m_unk28c;
    GEODE_PAD(8);
    gd::string m_particleString;
    GEODE_PAD(1);
    bool m_particleUseObjectColor;
    GEODE_PAD(62);
    int m_linkedGroup;
    GEODE_PAD(12);
    cocos2d::CCSprite* m_colorSprite;
    GEODE_PAD(19);
    int m_uniqueID;
    GameObjectType m_objectType;
    GEODE_PAD(16);
    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    GEODE_PAD(1);
    bool m_hasNoAudioScale;
    GEODE_PAD(18);
    float m_currentScaleX;
    float m_currentScaleY;
    GEODE_PAD(16);
    short m_enterChannel;
    short m_objectMaterial;
    GEODE_PAD(4);
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    GEODE_PAD(8);
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    GEODE_PAD(22);
    int m_property53;
    GEODE_PAD(24);
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    GEODE_PAD(12);
    ZLayer m_zLayer;
    int m_zOrder;
    GEODE_PAD(1);
    bool m_isSelected;
    GEODE_PAD(14);
    bool m_shouldUpdateColorSprite;
    GEODE_PAD(1);
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    GEODE_PAD(8);
    bool m_isNoTouch;
    GEODE_PAD(9);
    cocos2d::CCPoint m_lastPosition;
    GEODE_PAD(27);
    bool m_isHighDetail;
    GEODE_PAD(33);
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    GEODE_PAD(17);
    int m_property155;
    int m_property156;
    GEODE_PAD(18);
};
