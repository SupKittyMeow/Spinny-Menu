#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x5de780
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);

    /**
     * @note[short] MacOS: 0x5de910
     * @note[short] Windows: 0x921a0
     * @note[short] Android
     */
    bool init(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);

    /**
     * @note[short] MacOS: 0x5de750
     * @note[short] Android
     */
     ~CustomSongWidget();
    
private:
    [[deprecated("CustomSongWidget::getSongInfoIfUnloaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoIfUnloaded();
public:

    /**
     * @note[short] MacOS: 0x5dfbe0
     * @note[short] Windows: 0x93a90
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5e0080
     * @note[short] Windows: 0x93d10
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5dfff0
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5dfe70
     * @note[short] Windows: 0x93960
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5e02e0
     * @note[short] Windows: 0x93390
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5dfeb0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5dff90
     * @note[short] Windows: 0x93cc0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5e1850
     * @note[short] Android
     */
    void deleteSong();
    
private:
    [[deprecated("CustomSongWidget::updateError not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSongWidget::verifySongID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);
public:
    
private:
    [[deprecated("CustomSongWidget::startDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startDownload();
public:
    
private:
    [[deprecated("CustomSongWidget::downloadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadFailed();
public:

    /**
     * @note[short] MacOS: 0x5e0a70
     * @note[short] Android
     */
    void updateSongInfo();
    
private:
    [[deprecated("CustomSongWidget::updateLengthMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLengthMod(float p0);
public:

    /**
     * @note[short] MacOS: 0x5e09e0
     * @note[short] Android
     */
    TodoReturn updateSongObject(SongInfoObject* p0);

    /**
     * @note[short] MacOS: 0x5e1780
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
    
private:
    [[deprecated("CustomSongWidget::updateProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateProgressBar(int p0);
public:
    
private:
    [[deprecated("CustomSongWidget::toggleUpdateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFailed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);
public:
    
private:
    [[deprecated("CustomSongWidget::startMonitorDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();
public:
    
private:
    [[deprecated("CustomSongWidget::updateMultiAssetInfo not implemented")]]
    /**
     * @note[short] Windows: 0x94fe0
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool p0);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadAssetFinished(int p0, GJAssetType p1);
public:
    
private:
    [[deprecated("CustomSongWidget::processNextMultiAsset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processNextMultiAsset();
public:

    /**
     * @note[short] MacOS: 0x5e2370
     * @note[short] Android
     */
    TodoReturn updateWithMultiAssets(gd::string p0, gd::string p1, int p2);
    
private:
    [[deprecated("CustomSongWidget::updateDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSongWidget::startMultiAssetDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMultiAssetDownload();
public:

    /**
     * @note[short] MacOS: 0x5e1990
     * @note[short] Android
     */
    void showError(bool p0);

    /**
     * @note[short] MacOS: 0x5e3290
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] MacOS: 0x5e3440
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS: 0x5e3640
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] MacOS: 0x5e3920
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS: 0x5e3ab0
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] MacOS: 0x5e3ae0
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS: 0x5e3da0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS: 0x5e3e00
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS: 0x5e2300
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS: 0x5e3ee0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_hasMultipleAssets;
    int m_customSongID;
    float m_unkFloat;
    bool m_unkBool1;
    void* m_unkPtr;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<GJAssetDownloadAction> m_undownloadedAssets;
    int m_unkInt;
    InfoAlertButton* m_assetInfoBtn;
};
