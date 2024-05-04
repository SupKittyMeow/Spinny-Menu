#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
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


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadDelegate> : ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>::ModifyBase;
		using Base = MusicDownloadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
