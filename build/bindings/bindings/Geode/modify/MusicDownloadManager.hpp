#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getAllSongs
		#define GEODE_STATICS_getAllSongs
		GEODE_AS_STATIC_FUNCTION(getAllSongs) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getSongInfo
		#define GEODE_STATICS_getSongInfo
		GEODE_AS_STATIC_FUNCTION(getSongInfo) 
	#endif

	#ifndef GEODE_STATICS_getSFXObject
		#define GEODE_STATICS_getSFXObject
		GEODE_AS_STATIC_FUNCTION(getSFXObject) 
	#endif

	#ifndef GEODE_STATICS_getMusicObject
		#define GEODE_STATICS_getMusicObject
		GEODE_AS_STATIC_FUNCTION(getMusicObject) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoKey
		#define GEODE_STATICS_getSongInfoKey
		GEODE_AS_STATIC_FUNCTION(getSongInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicTags
		#define GEODE_STATICS_getAllMusicTags
		GEODE_AS_STATIC_FUNCTION(getAllMusicTags) 
	#endif

	#ifndef GEODE_STATICS_getSongPriority
		#define GEODE_STATICS_getSongPriority
		GEODE_AS_STATIC_FUNCTION(getSongPriority) 
	#endif

	#ifndef GEODE_STATICS_getAllSFXObjects
		#define GEODE_STATICS_getAllSFXObjects
		GEODE_AS_STATIC_FUNCTION(getAllSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadKey
		#define GEODE_STATICS_getSFXDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoObject
		#define GEODE_STATICS_getSongInfoObject
		GEODE_AS_STATIC_FUNCTION(getSongInfoObject) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicArtists
		#define GEODE_STATICS_getAllMusicArtists
		GEODE_AS_STATIC_FUNCTION(getAllMusicArtists) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicObjects
		#define GEODE_STATICS_getAllMusicObjects
		GEODE_AS_STATIC_FUNCTION(getAllMusicObjects) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongs
		#define GEODE_STATICS_getDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_getSongDownloadKey
		#define GEODE_STATICS_getSongDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSongDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getCustomContentURL
		#define GEODE_STATICS_getCustomContentURL
		GEODE_AS_STATIC_FUNCTION(getCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_getDownloadProgress
		#define GEODE_STATICS_getDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getMusicArtistForID
		#define GEODE_STATICS_getMusicArtistForID
		GEODE_AS_STATIC_FUNCTION(getMusicArtistForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderPathForID
		#define GEODE_STATICS_getSFXFolderPathForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadProgress
		#define GEODE_STATICS_getSFXDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderObjectForID
		#define GEODE_STATICS_getSFXFolderObjectForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXCompleted
		#define GEODE_STATICS_onDownloadSFXCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfoCompleted
		#define GEODE_STATICS_onGetSongInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSongCompleted
		#define GEODE_STATICS_onDownloadSongCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXLibraryCompleted
		#define GEODE_STATICS_onDownloadSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetCustomContentURLCompleted
		#define GEODE_STATICS_onGetCustomContentURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		#define GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadMusicLibraryCompleted
		#define GEODE_STATICS_onDownloadMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		#define GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_pathForSFX
		#define GEODE_STATICS_pathForSFX
		GEODE_AS_STATIC_FUNCTION(pathForSFX) 
	#endif

	#ifndef GEODE_STATICS_downloadSFX
		#define GEODE_STATICS_downloadSFX
		GEODE_AS_STATIC_FUNCTION(downloadSFX) 
	#endif

	#ifndef GEODE_STATICS_pathForSong
		#define GEODE_STATICS_pathForSong
		GEODE_AS_STATIC_FUNCTION(pathForSong) 
	#endif

	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_downloadSong
		#define GEODE_STATICS_downloadSong
		GEODE_AS_STATIC_FUNCTION(downloadSong) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_nameForTagID
		#define GEODE_STATICS_nameForTagID
		GEODE_AS_STATIC_FUNCTION(nameForTagID) 
	#endif

	#ifndef GEODE_STATICS_stopDownload
		#define GEODE_STATICS_stopDownload
		GEODE_AS_STATIC_FUNCTION(stopDownload) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_isResourceSFX
		#define GEODE_STATICS_isResourceSFX
		GEODE_AS_STATIC_FUNCTION(isResourceSFX) 
	#endif

	#ifndef GEODE_STATICS_isResourceSong
		#define GEODE_STATICS_isResourceSong
		GEODE_AS_STATIC_FUNCTION(isResourceSong) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_createSongsInfo
		#define GEODE_STATICS_createSongsInfo
		GEODE_AS_STATIC_FUNCTION(createSongsInfo) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_isSFXDownloaded
		#define GEODE_STATICS_isSFXDownloaded
		GEODE_AS_STATIC_FUNCTION(isSFXDownloaded) 
	#endif

	#ifndef GEODE_STATICS_parseSFXLibrary
		#define GEODE_STATICS_parseSFXLibrary
		GEODE_AS_STATIC_FUNCTION(parseSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_clearUnusedSongs
		#define GEODE_STATICS_clearUnusedSongs
		GEODE_AS_STATIC_FUNCTION(clearUnusedSongs) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByTag
		#define GEODE_STATICS_filterMusicByTag
		GEODE_AS_STATIC_FUNCTION(filterMusicByTag) 
	#endif

	#ifndef GEODE_STATICS_isSongDownloaded
		#define GEODE_STATICS_isSongDownloaded
		GEODE_AS_STATIC_FUNCTION(isSongDownloaded) 
	#endif

	#ifndef GEODE_STATICS_pathForSFXFolder
		#define GEODE_STATICS_pathForSFXFolder
		GEODE_AS_STATIC_FUNCTION(pathForSFXFolder) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_storeMusicObject
		#define GEODE_STATICS_storeMusicObject
		GEODE_AS_STATIC_FUNCTION(storeMusicObject) 
	#endif

	#ifndef GEODE_STATICS_tryLoadLibraries
		#define GEODE_STATICS_tryLoadLibraries
		GEODE_AS_STATIC_FUNCTION(tryLoadLibraries) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_parseMusicLibrary
		#define GEODE_STATICS_parseMusicLibrary
		GEODE_AS_STATIC_FUNCTION(parseMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_pathForSongFolder
		#define GEODE_STATICS_pathForSongFolder
		GEODE_AS_STATIC_FUNCTION(pathForSongFolder) 
	#endif

	#ifndef GEODE_STATICS_downloadCustomSong
		#define GEODE_STATICS_downloadCustomSong
		GEODE_AS_STATIC_FUNCTION(downloadCustomSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXLibrary
		#define GEODE_STATICS_downloadSFXLibrary
		GEODE_AS_STATIC_FUNCTION(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_isSFXLibraryLoaded
		#define GEODE_STATICS_isSFXLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_storeSFXInfoObject
		#define GEODE_STATICS_storeSFXInfoObject
		GEODE_AS_STATIC_FUNCTION(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSFXLibrary
		#define GEODE_STATICS_tryUpdateSFXLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadMusicLibrary
		#define GEODE_STATICS_downloadMusicLibrary
		GEODE_AS_STATIC_FUNCTION(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_isMusicLibraryLoaded
		#define GEODE_STATICS_isMusicLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_limitDownloadedSongs
		#define GEODE_STATICS_limitDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByArtistID
		#define GEODE_STATICS_filterMusicByArtistID
		GEODE_AS_STATIC_FUNCTION(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpGetRequest
		#define GEODE_STATICS_ProcessHttpGetRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateMusicLibrary
		#define GEODE_STATICS_tryUpdateMusicLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_addSongObjectFromString
		#define GEODE_STATICS_addSongObjectFromString
		GEODE_AS_STATIC_FUNCTION(addSongObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_addMusicDownloadDelegate
		#define GEODE_STATICS_addMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_generateCustomContentURL
		#define GEODE_STATICS_generateCustomContentURL
		GEODE_AS_STATIC_FUNCTION(generateCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_incrementPriorityForSong
		#define GEODE_STATICS_incrementPriorityForSong
		GEODE_AS_STATIC_FUNCTION(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_STATICS_isRunningActionForSongID
		#define GEODE_STATICS_isRunningActionForSongID
		GEODE_AS_STATIC_FUNCTION(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_STATICS_generateResourceAssetList
		#define GEODE_STATICS_generateResourceAssetList
		GEODE_AS_STATIC_FUNCTION(generateResourceAssetList) 
	#endif

	#ifndef GEODE_STATICS_removeMusicDownloadDelegate
		#define GEODE_STATICS_removeMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_clearSong
		#define GEODE_STATICS_clearSong
		GEODE_AS_STATIC_FUNCTION(clearSong) 
	#endif

	#ifndef GEODE_STATICS_deleteSFX
		#define GEODE_STATICS_deleteSFX
		GEODE_AS_STATIC_FUNCTION(deleteSFX) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadManager> : ModifyBase<ModifyDerive<Der, MusicDownloadManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadManager>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadManager>>::ModifyBase;
		using Base = MusicDownloadManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556950, Default, MusicDownloadManager, getSongInfo, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556810, Default, MusicDownloadManager, getSongInfoObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x558f70, Default, MusicDownloadManager, onDownloadSongCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55a150, Default, MusicDownloadManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5585a0, Default, MusicDownloadManager, deleteSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5565e0, Default, MusicDownloadManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559cb0, Default, MusicDownloadManager, pathForSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5586d0, Default, MusicDownloadManager, pathForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5552f0, Default, MusicDownloadManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x558880, Default, MusicDownloadManager, downloadSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559210, Default, MusicDownloadManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556fb0, Default, MusicDownloadManager, responseToDict, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x557a60, Default, MusicDownloadManager, createSongsInfo, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559880, Default, MusicDownloadManager, isSFXDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x558160, Default, MusicDownloadManager, isSongDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559d70, Default, MusicDownloadManager, pathForSFXFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559640, Default, MusicDownloadManager, pathForSongFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x558d00, Default, MusicDownloadManager, downloadCustomSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5566b0, Default, MusicDownloadManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x558460, Default, MusicDownloadManager, limitDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556e20, Default, MusicDownloadManager, addSongObjectFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556340, Default, MusicDownloadManager, addMusicDownloadDelegate, MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5567e0, Default, MusicDownloadManager, incrementPriorityForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5564c0, Default, MusicDownloadManager, isRunningActionForSongID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x559fb0, Default, MusicDownloadManager, showTOS, FLAlertLayerProtocol*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556190, Default, MusicDownloadManager, init, )
		}
	};
}
