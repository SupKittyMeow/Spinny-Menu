#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onMenuMusic
		#define GEODE_STATICS_onMenuMusic
		GEODE_AS_STATIC_FUNCTION(onMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_onProgressBar
		#define GEODE_STATICS_onProgressBar
		GEODE_AS_STATIC_FUNCTION(onProgressBar) 
	#endif

	#ifndef GEODE_STATICS_onSecretVault
		#define GEODE_STATICS_onSecretVault
		GEODE_AS_STATIC_FUNCTION(onSecretVault) 
	#endif

	#ifndef GEODE_STATICS_onSoundtracks
		#define GEODE_STATICS_onSoundtracks
		GEODE_AS_STATIC_FUNCTION(onSoundtracks) 
	#endif

	#ifndef GEODE_STATICS_onRecordReplays
		#define GEODE_STATICS_onRecordReplays
		GEODE_AS_STATIC_FUNCTION(onRecordReplays) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onVideo
		#define GEODE_STATICS_onVideo
		GEODE_AS_STATIC_FUNCTION(onVideo) 
	#endif

	#ifndef GEODE_STATICS_onAccount
		#define GEODE_STATICS_onAccount
		GEODE_AS_STATIC_FUNCTION(onAccount) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onSupport
		#define GEODE_STATICS_onSupport
		GEODE_AS_STATIC_FUNCTION(onSupport) 
	#endif

	#ifndef GEODE_STATICS_tryEnableRecord
		#define GEODE_STATICS_tryEnableRecord
		GEODE_AS_STATIC_FUNCTION(tryEnableRecord) 
	#endif

	#ifndef GEODE_STATICS_sfxSliderChanged
		#define GEODE_STATICS_sfxSliderChanged
		GEODE_AS_STATIC_FUNCTION(sfxSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_musicSliderChanged
		#define GEODE_STATICS_musicSliderChanged
		GEODE_AS_STATIC_FUNCTION(musicSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsLayer> : ModifyBase<ModifyDerive<Der, OptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, OptionsLayer>>::ModifyBase;
		using Base = OptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75bcf0, Default, OptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75bf50, Default, OptionsLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75d380, Default, OptionsLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75d3f0, Default, OptionsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
