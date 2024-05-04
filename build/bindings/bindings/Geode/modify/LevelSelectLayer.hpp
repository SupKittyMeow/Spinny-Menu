#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSelectLayer.hpp>
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

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
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

	#ifndef GEODE_STATICS_colorForPage
		#define GEODE_STATICS_colorForPage
		GEODE_AS_STATIC_FUNCTION(colorForPage) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_tryShowAd
		#define GEODE_STATICS_tryShowAd
		GEODE_AS_STATIC_FUNCTION(tryShowAd) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_updatePageWithObject
		#define GEODE_STATICS_updatePageWithObject
		GEODE_AS_STATIC_FUNCTION(updatePageWithObject) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSelectLayer> : ModifyBase<ModifyDerive<Der, LevelSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSelectLayer>>::ModifyBase;
		using Base = LevelSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410b80, Default, LevelSelectLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410c70, Default, LevelSelectLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4109e0, Default, LevelSelectLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4133f0, Default, LevelSelectLayer, getColorValue, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x411980, Default, LevelSelectLayer, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x411a30, Default, LevelSelectLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x411a80, Default, LevelSelectLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x411a00, Default, LevelSelectLayer, onNext, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4119d0, Default, LevelSelectLayer, onPrev, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410a60, Default, LevelSelectLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413710, Default, LevelSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4137b0, Default, LevelSelectLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x411ac0, Default, LevelSelectLayer, updatePageWithObject, cocos2d::CCObject*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413280, Default, LevelSelectLayer, scrollLayerMoved, cocos2d::CCPoint)
		}
	};
}
