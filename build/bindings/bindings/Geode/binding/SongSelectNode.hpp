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
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)
    
private:
    [[deprecated("SongSelectNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
public:
    
private:
    [[deprecated("SongSelectNode::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
public:
    
private:
    [[deprecated("SongSelectNode::onSongMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onSongMode(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::onSongMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongSelectNode::onOpenCustomSong not implemented")]]
    /**
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongSelectNode::selectSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::audioPrevious not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioPrevious(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SongSelectNode::updateAudioLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAudioLabel();
public:
    
private:
    [[deprecated("SongSelectNode::showCustomSongSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void showCustomSongSelect();
public:
    
private:
    [[deprecated("SongSelectNode::updateWidgetVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateWidgetVisibility();
public:
    
private:
    [[deprecated("SongSelectNode::audioNext not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioNext(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x1f7c30
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x1f7d10
     * @note[short] Android
     */
    virtual TodoReturn customSongLayerClosed();

    /**
     * @note[short] MacOS: 0x1f7d70
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);

    /**
     * @note[short] MacOS: 0x1f7da0
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();

    /**
     * @note[short] MacOS: 0x1f7dc0
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();

    /**
     * @note[short] MacOS: 0x1f7f00
     * @note[short] Android
     */
    virtual TodoReturn getLevelSettings();
};
