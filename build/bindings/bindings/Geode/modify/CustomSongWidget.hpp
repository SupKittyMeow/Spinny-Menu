#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoIfUnloaded
		#define GEODE_STATICS_getSongInfoIfUnloaded
		GEODE_AS_STATIC_FUNCTION(getSongInfoIfUnloaded) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfo
		#define GEODE_STATICS_onGetSongInfo
		GEODE_AS_STATIC_FUNCTION(onGetSongInfo) 
	#endif

	#ifndef GEODE_STATICS_onCancelDownload
		#define GEODE_STATICS_onCancelDownload
		GEODE_AS_STATIC_FUNCTION(onCancelDownload) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_updateError
		#define GEODE_STATICS_updateError
		GEODE_AS_STATIC_FUNCTION(updateError) 
	#endif

	#ifndef GEODE_STATICS_verifySongID
		#define GEODE_STATICS_verifySongID
		GEODE_AS_STATIC_FUNCTION(verifySongID) 
	#endif

	#ifndef GEODE_STATICS_startDownload
		#define GEODE_STATICS_startDownload
		GEODE_AS_STATIC_FUNCTION(startDownload) 
	#endif

	#ifndef GEODE_STATICS_downloadFailed
		#define GEODE_STATICS_downloadFailed
		GEODE_AS_STATIC_FUNCTION(downloadFailed) 
	#endif

	#ifndef GEODE_STATICS_updateSongInfo
		#define GEODE_STATICS_updateSongInfo
		GEODE_AS_STATIC_FUNCTION(updateSongInfo) 
	#endif

	#ifndef GEODE_STATICS_updateLengthMod
		#define GEODE_STATICS_updateLengthMod
		GEODE_AS_STATIC_FUNCTION(updateLengthMod) 
	#endif

	#ifndef GEODE_STATICS_updateSongObject
		#define GEODE_STATICS_updateSongObject
		GEODE_AS_STATIC_FUNCTION(updateSongObject) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateProgressBar
		#define GEODE_STATICS_updateProgressBar
		GEODE_AS_STATIC_FUNCTION(updateProgressBar) 
	#endif

	#ifndef GEODE_STATICS_toggleUpdateButton
		#define GEODE_STATICS_toggleUpdateButton
		GEODE_AS_STATIC_FUNCTION(toggleUpdateButton) 
	#endif

	#ifndef GEODE_STATICS_downloadAssetFailed
		#define GEODE_STATICS_downloadAssetFailed
		GEODE_AS_STATIC_FUNCTION(downloadAssetFailed) 
	#endif

	#ifndef GEODE_STATICS_startMonitorDownload
		#define GEODE_STATICS_startMonitorDownload
		GEODE_AS_STATIC_FUNCTION(startMonitorDownload) 
	#endif

	#ifndef GEODE_STATICS_updateMultiAssetInfo
		#define GEODE_STATICS_updateMultiAssetInfo
		GEODE_AS_STATIC_FUNCTION(updateMultiAssetInfo) 
	#endif

	#ifndef GEODE_STATICS_downloadAssetFinished
		#define GEODE_STATICS_downloadAssetFinished
		GEODE_AS_STATIC_FUNCTION(downloadAssetFinished) 
	#endif

	#ifndef GEODE_STATICS_processNextMultiAsset
		#define GEODE_STATICS_processNextMultiAsset
		GEODE_AS_STATIC_FUNCTION(processNextMultiAsset) 
	#endif

	#ifndef GEODE_STATICS_updateWithMultiAssets
		#define GEODE_STATICS_updateWithMultiAssets
		GEODE_AS_STATIC_FUNCTION(updateWithMultiAssets) 
	#endif

	#ifndef GEODE_STATICS_updateDownloadProgress
		#define GEODE_STATICS_updateDownloadProgress
		GEODE_AS_STATIC_FUNCTION(updateDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_startMultiAssetDownload
		#define GEODE_STATICS_startMultiAssetDownload
		GEODE_AS_STATIC_FUNCTION(startMultiAssetDownload) 
	#endif

	#ifndef GEODE_STATICS_showError
		#define GEODE_STATICS_showError
		GEODE_AS_STATIC_FUNCTION(showError) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongWidget> : ModifyBase<ModifyDerive<Der, CustomSongWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongWidget>>;
		using ModifyBase<ModifyDerive<Der, CustomSongWidget>>::ModifyBase;
		using Base = CustomSongWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5de780, Default, CustomSongWidget, create, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5de910, Default, CustomSongWidget, init, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5de750, Default, CustomSongWidget)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5dfbe0, Default, CustomSongWidget, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0080, Default, CustomSongWidget, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5dfff0, Default, CustomSongWidget, onGetSongInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5dfe70, Default, CustomSongWidget, onCancelDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e02e0, Default, CustomSongWidget, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5dfeb0, Default, CustomSongWidget, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5dff90, Default, CustomSongWidget, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e1850, Default, CustomSongWidget, deleteSong, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0a70, Default, CustomSongWidget, updateSongInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e09e0, Default, CustomSongWidget, updateSongObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e1780, Default, CustomSongWidget, updatePlaybackBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2370, Default, CustomSongWidget, updateWithMultiAssets, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e1990, Default, CustomSongWidget, showError, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3290, Default, CustomSongWidget, loadSongInfoFinished, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3440, Default, CustomSongWidget, loadSongInfoFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3640, Default, CustomSongWidget, downloadSongFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3920, Default, CustomSongWidget, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3ab0, Default, CustomSongWidget, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3ae0, Default, CustomSongWidget, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3da0, Default, CustomSongWidget, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3e00, Default, CustomSongWidget, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2300, Default, CustomSongWidget, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e3ee0, Default, CustomSongWidget, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
