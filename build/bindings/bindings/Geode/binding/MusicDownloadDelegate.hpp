#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadDelegate";
    
private:
    [[deprecated("MusicDownloadDelegate::loadSongInfoFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::loadSongInfoFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::downloadSongFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::downloadSongFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::songStateChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void songStateChanged();
public:
    
private:
    [[deprecated("MusicDownloadDelegate::downloadSFXFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::downloadSFXFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::musicActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicDownloadDelegate::musicActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);
public:
};
