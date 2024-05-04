#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS: 0x26ee60
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS: 0x26ef60
     * @note[short] Windows: 0x9f520
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS: 0x271e50
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271e70
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271df0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271d00
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271d40
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onExitEditor not implemented")]]
    /**
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x271880
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271d20
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onKeybindings not implemented")]]
    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x271ce0
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271730
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2716c0
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271cb0
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271e10
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onCreateTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x271e30
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271c90
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271b90
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271a20
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2717a0
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271980
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271d80
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271db0
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271650
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x272090
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x271d60
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::doResetUnused not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doResetUnused();
public:

    /**
     * @note[short] MacOS: 0x272050
     * @note[short] Android
     */
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::toggleGridOnTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271ed0
     * @note[short] Android
     */
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::updateSongButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSongButton();
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectLines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271fd0
     * @note[short] Android
     */
    TodoReturn togglePreviewAnim(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::toggleRecordOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271ac0
     * @note[short] Android
     */
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x271f30
     * @note[short] Android
     */
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::toggleFollowPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271e90
     * @note[short] Android
     */
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x271eb0
     * @note[short] Android
     */
    TodoReturn toggleSelectFilter(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x272030
     * @note[short] Android
     */
    TodoReturn toggleHideInvisible(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::togglePlaytestMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271f80
     * @note[short] Android
     */
    TodoReturn togglePreviewShaders(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x271ef0
     * @note[short] Android
     */
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x272000
     * @note[short] Android
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorBackground(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x271fa0
     * @note[short] Android
     */
    TodoReturn togglePreviewParticles(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x272a70
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] MacOS: 0x272b40
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] MacOS: 0x2725a0
     * @note[short] Android
     */
    void saveLevel();

    /**
     * @note[short] MacOS: 0x272ca0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x272d90
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x26f8c0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x272bc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
};
