#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SliderDelegate.hpp"

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)
    
private:
    [[deprecated("MusicBrowser::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MusicBrowser* create(int p0);
public:
    
private:
    [[deprecated("MusicBrowser::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS: 0x5d4090
     * @note[short] Android
     */
    void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
    
private:
    [[deprecated("MusicBrowser::onTagFilters not implemented")]]
    /**
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClearSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onArtistFilters not implemented")]]
    /**
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onUpdateLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPlaybackControl not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MusicBrowser::updatePageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
public:
    
private:
    [[deprecated("MusicBrowser::setupSongControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSongControls();
public:
    
private:
    [[deprecated("MusicBrowser::trySetupMusicBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn trySetupMusicBrowser();
public:
    
private:
    [[deprecated("MusicBrowser::setupList not implemented")]]
    /**
     * @note[short] Android
     */
    void setupList(MusicSearchResult* p0);
public:

    /**
     * @note[short] MacOS: 0x5d3510
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x5d4460
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x5d4330
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5d3ce0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS: 0x5d3df0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS: 0x5d3690
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS: 0x5d4010
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS: 0x5d4070
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();

    /**
     * @note[short] MacOS: 0x5d4290
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
