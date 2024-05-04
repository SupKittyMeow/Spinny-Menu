#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)
    
private:
    [[deprecated("MusicDownloadManager::getAllSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::getDLObject not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x556950
     * @note[short] Android
     */
    void getSongInfo(int p0, bool p1);
    
private:
    [[deprecated("MusicDownloadManager::getSFXObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoKey(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicTags not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicTags(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongPriority not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongPriority();
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSFXObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSFXObjects(bool p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x556810
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicArtists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicArtists(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicObjects();
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadedSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDownloadedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongDownloadKey(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getCustomContentURL not implemented")]]
    /**
     * @note[short] Android
     */
    void getCustomContentURL();
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicArtistForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicArtistForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderPathForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXFolderPathForID(int p0, bool p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderObjectForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXFolderObjectForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onGetSongInfoCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetSongInfoCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x558f70
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onGetCustomContentURLCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetCustomContentURLCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] MacOS: 0x55a150
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x5585a0
     * @note[short] Android
     */
    void deleteSong(int p0);
    
private:
    [[deprecated("MusicDownloadManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("MusicDownloadManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:

    /**
     * @note[short] MacOS: 0x5565e0
     * @note[short] Android
     */
    bool isDLActive(char const* p0);

    /**
     * @note[short] MacOS: 0x559cb0
     * @note[short] Windows: 0x27f630
     * @note[short] Android
     */
    gd::string pathForSFX(int sfxID);
    
private:
    [[deprecated("MusicDownloadManager::downloadSFX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadSFX(int p0);
public:

    /**
     * @note[short] MacOS: 0x5586d0
     * @note[short] Windows: 0x27f2c0
     * @note[short] Android
     */
    gd::string pathForSong(int songID);

    /**
     * @note[short] MacOS: 0x5552f0
     * @note[short] Windows: 0x27d490
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS: 0x558880
     * @note[short] Android
     */
    void downloadSong(int songID);
    
private:
    [[deprecated("MusicDownloadManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::nameForTagID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nameForTagID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::stopDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopDownload(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x559210
     * @note[short] Android
     */
    void addDLToActive(char const* p0, cocos2d::CCObject* p1);
    
private:
    [[deprecated("MusicDownloadManager::isResourceSFX not implemented")]]
    /**
     * @note[short] Android
     */
    bool isResourceSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSong not implemented")]]
    /**
     * @note[short] Android
     */
    bool isResourceSong(int p0);
public:

    /**
     * @note[short] MacOS: 0x556fb0
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS: 0x557a60
     * @note[short] Android
     */
    void createSongsInfo(gd::string p0);
    
private:
    [[deprecated("MusicDownloadManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] MacOS: 0x559880
     * @note[short] Android
     */
    bool isSFXDownloaded(int sfxID);
    
private:
    [[deprecated("MusicDownloadManager::parseSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parseSFXLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::clearUnusedSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearUnusedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByTag(int p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x558160
     * @note[short] Windows: 0x27f020
     * @note[short] Android
     */
    bool isSongDownloaded(int p0);

    /**
     * @note[short] MacOS: 0x559d70
     * @note[short] Windows: 0x27f490
     * @note[short] Android
     */
    gd::string pathForSFXFolder(int p0);
    
private:
    [[deprecated("MusicDownloadManager::songStateChanged not implemented")]]
    /**
     * @note[short] Windows: 0x27dd40
     * @note[short] Android
     */
    void songStateChanged();
public:
    
private:
    [[deprecated("MusicDownloadManager::storeMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeMusicObject(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::tryLoadLibraries not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryLoadLibraries();
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::musicActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::parseMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parseMusicLibrary();
public:

    /**
     * @note[short] MacOS: 0x559640
     * @note[short] Windows: 0x27f120
     * @note[short] Android
     */
    gd::string pathForSongFolder(int p0);

    /**
     * @note[short] MacOS: 0x558d00
     * @note[short] Android
     */
    void downloadCustomSong(int p0);
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadSFXLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSongFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSongFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::isSFXLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();
public:
    
private:
    [[deprecated("MusicDownloadManager::loadSongInfoFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void loadSongInfoFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::ProcessHttpRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] MacOS: 0x5566b0
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
    
private:
    [[deprecated("MusicDownloadManager::storeSFXInfoObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSFXInfoObject(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::musicActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateSFXLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn downloadMusicLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSongFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSongFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isMusicLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();
public:

    /**
     * @note[short] MacOS: 0x558460
     * @note[short] Android
     */
    void limitDownloadedSongs();
    
private:
    [[deprecated("MusicDownloadManager::loadSongInfoFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByArtistID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByArtistID(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::ProcessHttpGetRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void ProcessHttpGetRequest(gd::string p0, gd::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);
public:
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateMusicLibrary();
public:

    /**
     * @note[short] MacOS: 0x556e20
     * @note[short] Android
     */
    TodoReturn addSongObjectFromString(gd::string p0);

    /**
     * @note[short] MacOS: 0x556340
     * @note[short] Android
     */
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);
    
private:
    [[deprecated("MusicDownloadManager::generateCustomContentURL not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateCustomContentURL(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x5567e0
     * @note[short] Android
     */
    void incrementPriorityForSong(int p0);

    /**
     * @note[short] MacOS: 0x5564c0
     * @note[short] Android
     */
    bool isRunningActionForSongID(int p0);
    
private:
    [[deprecated("MusicDownloadManager::generateResourceAssetList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateResourceAssetList();
public:
    
private:
    [[deprecated("MusicDownloadManager::removeMusicDownloadDelegate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);
public:

    /**
     * @note[short] MacOS: 0x559fb0
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* p0);
    
private:
    [[deprecated("MusicDownloadManager::handleIt not implemented")]]
    /**
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("MusicDownloadManager::clearSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::deleteSFX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSFX(int p0);
public:

    /**
     * @note[short] MacOS: 0x556190
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    gd::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    gd::map<int, gd::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    bool m_requestedMusicLibraryDownloaded;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    gd::unordered_set<int> m_resourceSfxUnorderedSet;
    gd::unordered_set<int> m_resourceSongUnorderedSet;
};
