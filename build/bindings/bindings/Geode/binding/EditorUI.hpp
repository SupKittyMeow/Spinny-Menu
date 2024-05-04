#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)
    
private:
    [[deprecated("EditorUI::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* p0);
public:

    /**
     * @note[short] MacOS: 0xcc50
     * @note[short] Windows: 0xa36f0
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);
    
private:
    [[deprecated("EditorUI::getModeBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModeBtn(char const* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::getNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getCreateBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreateBtn(int p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::getGroupInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);
public:

    /**
     * @note[short] MacOS: 0x4db40
     * @note[short] Android
     */
    TodoReturn getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("EditorUI::getTouchPoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] MacOS: 0x3f570
     * @note[short] Android
     */
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::getCycledObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::getSimpleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSimpleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getSmartNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getGridSnappedPos not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::getRandomStartKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomStartKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x4ca710
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);
    
private:
    [[deprecated("EditorUI::getSmartObjectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartObjectKey(int p0, GJSmartDirection p1);
public:
    
private:
    [[deprecated("EditorUI::getTransformState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTransformState();
public:
    
private:
    [[deprecated("EditorUI::getLimitedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLimitedPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x406e0
     * @note[short] Android
     */
    TodoReturn getSelectedObjects();

    /**
     * @note[short] MacOS: 0x4cf40
     * @note[short] Android
     */
    TodoReturn getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);

    /**
     * @note[short] MacOS: 0x326f0
     * @note[short] Android
     */
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);

    /**
     * @note[short] MacOS: 0x329d0
     * @note[short] Windows: 0xd7470
     * @note[short] Android
     */
    TodoReturn getXMin(int p0);
    
private:
    [[deprecated("EditorUI::getButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);
public:

    /**
     * @note[short] MacOS: 0xff20
     * @note[short] Windows: 0xc9130
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x10160
     * @note[short] Windows: 0xc9480
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onSettings not implemented")]]
    /**
     * @note[short] Windows: 0xa5570
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onCopyState not implemented")]]
    /**
     * @note[short] Windows: 0xcb0c0
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteAll not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2e8d0
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onEditColor not implemented")]]
    /**
     * @note[short] Windows: 0xd3370
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGoToLayer not implemented")]]
    /**
     * @note[short] Windows: 0xcb200
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupDown not implemented")]]
    /**
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onLockLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onFindObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPasteColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPasteState not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onColorFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeselectAll not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x10540
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onToggleGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onCreateButton not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x384d0
     * @note[short] Android
     */
    TodoReturn onCreateObject(int p0);
    
private:
    [[deprecated("EditorUI::onPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x103a0
     * @note[short] Windows: 0xc95f0
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onGoToBaseLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupIDFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onNewCustomItem not implemented")]]
    /**
     * @note[short] Windows: 0xa7650
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x10590
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0xfd90
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x35660
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onSelectBuildTab not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onTargetIDChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onTargetIDChange(int p0);
public:
    
private:
    [[deprecated("EditorUI::onAssignNewGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onAssignNewGroupID();
public:
    
private:
    [[deprecated("EditorUI::onDeleteCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x35690
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onResetSpecialFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onUpdateDeleteFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onToggleSelectedOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onCopy not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2eaa0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2e360
     * @note[short] Windows: 0xa55c0
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x31b60
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] MacOS: 0x316b0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onGroupUp not implemented")]]
    /**
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow();
public:

    /**
     * @note[short] MacOS: 0x48bf0
     * @note[short] Android
     */
    TodoReturn createLoop();
    
private:
    [[deprecated("EditorUI::editObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObject(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x42170
     * @note[short] Android
     */
    void moveObject(GameObject* p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("EditorUI::shouldSnap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldSnap(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x2e510
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0xfb20
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x41400
     * @note[short] Windows: 0xc97c0
     * @note[short] Android
     */
    TodoReturn updateZoom(float p0);
    
private:
    [[deprecated("EditorUI::applyOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::copyObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyObjects(cocos2d::CCArray* p0, bool p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x36640
     * @note[short] Windows: 0xc8a10
     * @note[short] Android
     */
    void deselectAll();
    
private:
    [[deprecated("EditorUI::editObject2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObject2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::editObject3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObject3(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0xf9c0
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x50c70
     * @note[short] Android
     */
    TodoReturn alignObjects(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::createExtras not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtras(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createObject not implemented")]]
    /**
     * @note[short] Android
     */
    GameObject* createObject(int p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("EditorUI::createPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPrefab(GJSmartTemplate* p0, gd::string p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x36370
     * @note[short] Android
     */
    void deleteObject(GameObject* p0, bool p1);
    
private:
    [[deprecated("EditorUI::enableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableButton(CreateMenuItem* p0);
public:
    
private:
    [[deprecated("EditorUI::flipObjectsX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipObjectsX(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::flipObjectsY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipObjectsY(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::offsetForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn offsetForKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::pasteObjects not implemented")]]
    /**
     * @note[short] Windows: 0xca640
     * @note[short] Android
     */
    void pasteObjects(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::removeOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeOffset(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x42ec0
     * @note[short] Windows: 0xd5910
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4);

    /**
     * @note[short] MacOS: 0x32190
     * @note[short] Android
     */
    void selectObject(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS: 0x38120
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] MacOS: 0x30d20
     * @note[short] Android
     */
    TodoReturn toggleLockUI(bool p0);
    
private:
    [[deprecated("EditorUI::updateSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlider();
public:
    
private:
    [[deprecated("EditorUI::disableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableButton(CreateMenuItem* p0);
public:

    /**
     * @note[short] MacOS: 0x419e0
     * @note[short] Android
     */
    TodoReturn doCopyObjects(bool p0);
    
private:
    [[deprecated("EditorUI::edgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn edgeForObject(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x32d60
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS: 0x3f780
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] MacOS: 0x3fbe0
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] MacOS: 0x496b0
     * @note[short] Android
     */
    void setupEditMenu();

    /**
     * @note[short] MacOS: 0xf360
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x303f0
     * @note[short] Android
     */
    void updateButtons();
    
private:
    [[deprecated("EditorUI::valueFromXPos not implemented")]]
    /**
     * @note[short] Windows: 0xa62b0
     * @note[short] Android
     */
    float valueFromXPos(float p0);
public:
    
private:
    [[deprecated("EditorUI::xPosFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    float xPosFromValue(float p0);
public:
    
private:
    [[deprecated("EditorUI::zoomGameLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn zoomGameLayer(bool p0);
public:
    
private:
    [[deprecated("EditorUI::createMoveMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMoveMenu();
public:
    
private:
    [[deprecated("EditorUI::createOutlines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOutlines(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0x365a0
     * @note[short] Android
     */
    void deselectObject(GameObject* p0);

    /**
     * @note[short] MacOS: 0x36850
     * @note[short] Android
     */
    void deselectObject();
    
private:
    [[deprecated("EditorUI::doPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doPasteInPlace(bool p0);
public:

    /**
     * @note[short] MacOS: 0x41b00
     * @note[short] Android
     */
    TodoReturn doPasteObjects(bool p0);
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::moveForCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveForCommand(EditCommand p0);
public:

    /**
     * @note[short] MacOS: 0x4d7c0
     * @note[short] Android
     */
    void moveObjectCall(EditCommand p0);
    
private:
    [[deprecated("EditorUI::moveObjectCall not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::playCircleAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);
public:

    /**
     * @note[short] MacOS: 0xfd30
     * @note[short] Android
     */
    TodoReturn redoLastAction(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::replaceGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn replaceGroupID(GameObject* p0, int p1, int p2);
public:
    
private:
    [[deprecated("EditorUI::selectBuildTab not implemented")]]
    /**
     * @note[short] Android
     */
    void selectBuildTab(int p0);
public:

    /**
     * @note[short] MacOS: 0xfab0
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0xfcd0
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::updateEditMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditMenu();
public:
    
private:
    [[deprecated("EditorUI::addSnapPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x487f0
     * @note[short] Android
     */
    TodoReturn assignNewGroups(bool p0);
    
private:
    [[deprecated("EditorUI::canSelectObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canSelectObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::clickOnPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clickOnPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x5d8d90
     * @note[short] Android
     */
    TodoReturn createRockBases(cocos2d::CCArray* p0);
    
private:
    [[deprecated("EditorUI::createRockEdges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRockEdges(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::findTriggerTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findTriggerTest();
public:

    /**
     * @note[short] MacOS: 0x41330
     * @note[short] Windows: 0xc9630
     * @note[short] Android
     */
    TodoReturn playtestStopped();

    /**
     * @note[short] MacOS: 0x11500
     * @note[short] Android
     */
    void setupCreateMenu();

    /**
     * @note[short] MacOS: 0x105e0
     * @note[short] Android
     */
    void setupDeleteMenu();
    
private:
    [[deprecated("EditorUI::smartTypeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn smartTypeForKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x4ec40
     * @note[short] Android
     */
    void transformObject(GameObject* p0, EditCommand p1, bool p2);
    
private:
    [[deprecated("EditorUI::convertToBaseKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToBaseKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x40790
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand p0, bool p1);

    /**
     * @note[short] MacOS: 0x4b3b0
     * @note[short] Android
     */
    TodoReturn editButtonUsable();
    
private:
    [[deprecated("EditorUI::playerTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::playerTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] MacOS: 0x383a0
     * @note[short] Android
     */
    void showMaxCoinError();
    
private:
    [[deprecated("EditorUI::transformObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* p0, cocos2d::CCPoint p1, float p2, float p3, float p4, float p5, float p6, float p7);
public:
    
private:
    [[deprecated("EditorUI::triggerSwipeMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSwipeMode();
public:

    /**
     * @note[short] MacOS: 0x31c70
     * @note[short] Android
     */
    TodoReturn updateCreateMenu(bool p0);
    
private:
    [[deprecated("EditorUI::updateDeleteMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteMenu();
public:
    
private:
    [[deprecated("EditorUI::colorSelectClosed not implemented")]]
    /**
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] MacOS: 0x35000
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();
    
private:
    [[deprecated("EditorUI::createExtraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);
public:

    /**
     * @note[short] MacOS: 0x4c120
     * @note[short] Android
     */
    TodoReturn editButton2Usable();
    
private:
    [[deprecated("EditorUI::editObjectSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObjectSpecial(int p0);
public:
    
private:
    [[deprecated("EditorUI::orderUpCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderUpCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::reloadCustomItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadCustomItems();
public:

    /**
     * @note[short] MacOS: 0x38260
     * @note[short] Android
     */
    void showMaxBasicError();
    
private:
    [[deprecated("EditorUI::updateGroupIDBtn2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDBtn2();
public:

    /**
     * @note[short] MacOS: 0x30c10
     * @note[short] Windows: 0xc9370
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
    
private:
    [[deprecated("EditorUI::applySpecialOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("EditorUI::arrayContainsClass not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::closeLiveHSVSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeLiveHSVSelect();
public:

    /**
     * @note[short] MacOS: 0x47c90
     * @note[short] Android
     */
    TodoReturn dynamicGroupUpdate(bool p0);

    /**
     * @note[short] MacOS: 0x355b0
     * @note[short] Android
     */
    TodoReturn recreateButtonTabs();
    
private:
    [[deprecated("EditorUI::rotationforCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotationforCommand(EditCommand p0);
public:

    /**
     * @note[short] MacOS: 0x36140
     * @note[short] Android
     */
    TodoReturn shouldDeleteObject(GameObject* p0);

    /**
     * @note[short] MacOS: 0xfba0
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::updateGridNodeSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize(int p0);
public:

    /**
     * @note[short] MacOS: 0x32b80
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize();

    /**
     * @note[short] MacOS: 0x302f0
     * @note[short] Android
     */
    TodoReturn updateGroupIDLabel();
    
private:
    [[deprecated("EditorUI::copyObjectsDetailed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createEdgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createEdgeForObject(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::editorLayerForArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::findAndSelectObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findAndSelectObject(int p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x4f110
     * @note[short] Android
     */
    bool isSpecialSnapObject(int p0);
    
private:
    [[deprecated("EditorUI::liveEditColorUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn liveEditColorUsable();
public:
    
private:
    [[deprecated("EditorUI::orderDownCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderDownCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::positionIsInSnapped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::selectObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect p0);
public:

    /**
     * @note[short] MacOS: 0x4dbf0
     * @note[short] Android
     */
    void transformObjectCall(EditCommand p0);
    
private:
    [[deprecated("EditorUI::transformObjectCall not implemented")]]
    /**
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x35a20
     * @note[short] Android
     */
    TodoReturn updateDeleteButtons();
    
private:
    [[deprecated("EditorUI::activateScaleControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateScaleControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::centerCameraOnObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn centerCameraOnObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::checkLiveColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkLiveColorSelect();
public:
    
private:
    [[deprecated("EditorUI::closeLiveColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeLiveColorSelect();
public:
    
private:
    [[deprecated("EditorUI::deselectObjectsColor not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObjectsColor();
public:
    
private:
    [[deprecated("EditorUI::processSelectObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSelectObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::toggleStickyControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleStickyControls(bool p0);
public:
    
private:
    [[deprecated("EditorUI::tryUpdateTimeMarkers not implemented")]]
    /**
     * @note[short] Android
     */
    void tryUpdateTimeMarkers();
public:
    
private:
    [[deprecated("EditorUI::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x40570
     * @note[short] Android
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::createExtrasForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("EditorUI::createNewKeyframeAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();
public:
    
private:
    [[deprecated("EditorUI::deleteTypeFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteTypeFromObjects(int p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x36210
     * @note[short] Android
     */
    TodoReturn deselectTargetPortals();
    
private:
    [[deprecated("EditorUI::editColorButtonUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editColorButtonUsable();
public:
    
private:
    [[deprecated("EditorUI::positionWithoutOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionWithoutOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::setupTransformControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupTransformControl();
public:
    
private:
    [[deprecated("EditorUI::toggleDuplicateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDuplicateButton();
public:

    /**
     * @note[short] MacOS: 0x30b50
     * @note[short] Android
     */
    TodoReturn toggleObjectInfoLabel();
    
private:
    [[deprecated("EditorUI::transformObjectsReset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformObjectsReset();
public:

    /**
     * @note[short] MacOS: 0x42300
     * @note[short] Android
     */
    TodoReturn updateEditButtonColor(int p0, cocos2d::_ccColor3B p1);

    /**
     * @note[short] MacOS: 0x4c630
     * @note[short] Android
     */
    TodoReturn updateEditColorButton();

    /**
     * @note[short] MacOS: 0x32dd0
     * @note[short] Android
     */
    void updateObjectInfoLabel();
    
private:
    [[deprecated("EditorUI::createUndoSelectObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createUndoSelectObject(bool p0);
public:
    
private:
    [[deprecated("EditorUI::deactivateScaleControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateScaleControl();
public:

    /**
     * @note[short] MacOS: 0x40d10
     * @note[short] Android
     */
    TodoReturn selectAllWithDirection(bool p0);
    
private:
    [[deprecated("EditorUI::showDeleteConfirmation not implemented")]]
    /**
     * @note[short] Android
     */
    void showDeleteConfirmation();
public:

    /**
     * @note[short] MacOS: 0x37820
     * @note[short] Android
     */
    cocos2d::CCPoint* spriteFromObjectString(gd::string p0, bool p1, bool p2, int p3, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);
    
private:
    [[deprecated("EditorUI::toggleEditObjectButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditObjectButton();
public:
    
private:
    [[deprecated("EditorUI::transformObjectsActive not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformObjectsActive();
public:

    /**
     * @note[short] MacOS: 0x41020
     * @note[short] Android
     */
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::resetObjectEditorValues not implemented")]]
    /**
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::updateSpecialUIElements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialUIElements();
public:

    /**
     * @note[short] MacOS: 0x437d0
     * @note[short] Android
     */
    TodoReturn activateTransformControl(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::isLiveColorSelectTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* p0);
public:

    /**
     * @note[short] MacOS: 0x35380
     * @note[short] Android
     */
    TodoReturn menuItemFromObjectString(gd::string p0, int p1);

    /**
     * @note[short] MacOS: 0x30f70
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons();
    
private:
    [[deprecated("EditorUI::addObjectsToSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::deactivateRotationControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateRotationControl();
public:
    
private:
    [[deprecated("EditorUI::repositionObjectsToCenter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);
public:
    
private:
    [[deprecated("EditorUI::resetSelectedObjectsColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSelectedObjectsColor();
public:

    /**
     * @note[short] MacOS: 0x2e5c0
     * @note[short] Windows: 0xd7250
     * @note[short] Android
     */
    void constrainGameLayerPosition(float x, float y);

    /**
     * @note[short] Out of line
     */
    void constrainGameLayerPosition();
    
private:
    [[deprecated("EditorUI::convertKeyBasedOnNeighbors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);
public:
    
private:
    [[deprecated("EditorUI::deactivateTransformControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateTransformControl();
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForMode not implemented")]]
    /**
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int p0);
public:
    
private:
    [[deprecated("EditorUI::processSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);
public:
    
private:
    [[deprecated("EditorUI::deleteSmartBlocksFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::checkDiffAfterTransformAnchor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForModeSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int p0);
public:

    /**
     * @note[short] MacOS: 0x411b0
     * @note[short] Android
     */
    void showUI(bool p0);

    /**
     * @note[short] MacOS: 0x104a0
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::editHSV not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editHSV();
public:

    /**
     * @note[short] MacOS: 0x2e250
     * @note[short] Android
     */
    TodoReturn resetUI();

    /**
     * @note[short] MacOS: 0x104f0
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::editColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editColor();
public:
    
private:
    [[deprecated("EditorUI::editGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editGroup(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x40a00
     * @note[short] Android
     */
    TodoReturn selectAll();

    /**
     * @note[short] MacOS: 0x515f0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x520b0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x526d0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x52c90
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x535c0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x53600
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x422d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x53640
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x57430
     * @note[short] Android
     */
    virtual TodoReturn getUI();

    /**
     * @note[short] MacOS: 0x36bd0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS: 0x36a40
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x43bf0
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS: 0x445a0
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS: 0x44680
     * @note[short] Android
     */
    virtual TodoReturn transformChangeEnded();

    /**
     * @note[short] MacOS: 0x57440
     * @note[short] Android
     */
    virtual TodoReturn getTransformNode();

    /**
     * @note[short] MacOS: 0x4fe20
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float p0);

    /**
     * @note[short] MacOS: 0x50030
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float p0);

    /**
     * @note[short] MacOS: 0x50190
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float p0, float p1);

    /**
     * @note[short] MacOS: 0x50300
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float p0);

    /**
     * @note[short] MacOS: 0x50460
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float p0);

    /**
     * @note[short] MacOS: 0x505c0
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float p0);

    /**
     * @note[short] MacOS: 0x50720
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float p0);

    /**
     * @note[short] MacOS: 0x50880
     * @note[short] Android
     */
    virtual void transformRotationChanged(float p0);

    /**
     * @note[short] MacOS: 0x509f0
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS: 0x50ae0
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS: 0x41300
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS: 0x4d3d0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS: 0x54720
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x547c0
     * @note[short] Windows: 0xda6b0
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS: 0x516d0
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] MacOS: 0x51710
     * @note[short] Android
     */
    virtual TodoReturn angleChangeEnded();

    /**
     * @note[short] MacOS: 0x51730
     * @note[short] Android
     */
    virtual void angleChanged(float p0);

    /**
     * @note[short] MacOS: 0x42700
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS: 0x446a0
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS: 0x42dd0
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS: 0x42e10
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeEnded();

    /**
     * @note[short] MacOS: 0x42e30
     * @note[short] Android
     */
    virtual void scaleXChanged(float p0);

    /**
     * @note[short] MacOS: 0x43550
     * @note[short] Android
     */
    virtual void scaleYChanged(float p0);

    /**
     * @note[short] MacOS: 0x43680
     * @note[short] Windows: 0xcb9b0
     * @note[short] Android
     */
    virtual void scaleXYChanged(float p0, float p1);
    GEODE_PAD(40);
    GJTransformState m_transformState;
    GEODE_PAD(8);
    EditButtonBar* m_buttonBar;
    GEODE_PAD(72);
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    GEODE_PAD(8);
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_unk220;
    cocos2d::CCNode* m_unk224;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    GEODE_PAD(12);
    bool m_swipeEnabled;
    GEODE_PAD(7);
    bool m_updatedSpeedObjects;
    GEODE_PAD(27);
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_unknownArray4;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    CCMenuItemToggler* m_guideToggle;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_idkSprite0;
    cocos2d::CCSprite* m_idkSprite1;
    CCMenuItemSpriteExtra* m_button27;
    CCMenuItemSpriteExtra* m_button28;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    GEODE_PAD(16);
    ButtonSprite* m_unk31c;
    ButtonSprite* m_unk320;
    int m_selectedCreateObjectID;
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_unknownArray9;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    GEODE_PAD(8);
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
};
