#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletSelectLayer.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNext
		#define GEODE_STATICS_onNext
		GEODE_AS_STATIC_FUNCTION(onNext) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onPrev
		#define GEODE_STATICS_onPrev
		GEODE_AS_STATIC_FUNCTION(onPrev) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_unblockPlay
		#define GEODE_STATICS_unblockPlay
		GEODE_AS_STATIC_FUNCTION(unblockPlay) 
	#endif

	#ifndef GEODE_STATICS_updateArrows
		#define GEODE_STATICS_updateArrows
		GEODE_AS_STATIC_FUNCTION(updateArrows) 
	#endif

	#ifndef GEODE_STATICS_setupGauntlets
		#define GEODE_STATICS_setupGauntlets
		GEODE_AS_STATIC_FUNCTION(setupGauntlets) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerWillScrollToPage
		#define GEODE_STATICS_scrollLayerWillScrollToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerScrolledToPage
		#define GEODE_STATICS_scrollLayerScrolledToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletSelectLayer> : ModifyBase<ModifyDerive<Der, GauntletSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>::ModifyBase;
		using Base = GauntletSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53cd80, Default, GauntletSelectLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53ce70, Default, GauntletSelectLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53e4d0, Default, GauntletSelectLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53dad0, Default, GauntletSelectLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53db90, Default, GauntletSelectLayer, setupGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53cc60, Default, GauntletSelectLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53e950, Default, GauntletSelectLayer, goToPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53ecc0, Default, GauntletSelectLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53eb90, Default, GauntletSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53eaf0, Default, GauntletSelectLayer, scrollLayerWillScrollToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53ea50, Default, GauntletSelectLayer, scrollLayerScrolledToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53e100, Default, GauntletSelectLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53e2d0, Default, GauntletSelectLayer, loadLevelsFailed, char const*, int)
		}
	};
}
