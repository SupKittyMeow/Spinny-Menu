#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TopArtistsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_setupLeaderboard
		#define GEODE_STATICS_setupLeaderboard
		GEODE_AS_STATIC_FUNCTION(setupLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadListFinished
		#define GEODE_STATICS_loadListFinished
		GEODE_AS_STATIC_FUNCTION(loadListFinished) 
	#endif

	#ifndef GEODE_STATICS_loadListFailed
		#define GEODE_STATICS_loadListFailed
		GEODE_AS_STATIC_FUNCTION(loadListFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TopArtistsLayer> : ModifyBase<ModifyDerive<Der, TopArtistsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TopArtistsLayer>>;
		using ModifyBase<ModifyDerive<Der, TopArtistsLayer>>::ModifyBase;
		using Base = TopArtistsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee360, Default, TopArtistsLayer, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ed8a0, Default, TopArtistsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee210, Default, TopArtistsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee1a0, Default, TopArtistsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eebf0, Default, TopArtistsLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee260, Default, TopArtistsLayer, loadListFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee320, Default, TopArtistsLayer, loadListFailed, char const*)
		}
	};
}
