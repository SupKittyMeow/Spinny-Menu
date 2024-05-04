#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCBlockLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_decrementForcePrio
		#define GEODE_STATICS_decrementForcePrio
		GEODE_AS_STATIC_FUNCTION(decrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_incrementForcePrio
		#define GEODE_STATICS_incrementForcePrio
		GEODE_AS_STATIC_FUNCTION(incrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_enterLayer
		#define GEODE_STATICS_enterLayer
		GEODE_AS_STATIC_FUNCTION(enterLayer) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_hideLayer
		#define GEODE_STATICS_hideLayer
		GEODE_AS_STATIC_FUNCTION(hideLayer) 
	#endif

	#ifndef GEODE_STATICS_layerVisible
		#define GEODE_STATICS_layerVisible
		GEODE_AS_STATIC_FUNCTION(layerVisible) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_disableUI
		#define GEODE_STATICS_disableUI
		GEODE_AS_STATIC_FUNCTION(disableUI) 
	#endif

	#ifndef GEODE_STATICS_enableUI
		#define GEODE_STATICS_enableUI
		GEODE_AS_STATIC_FUNCTION(enableUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCBlockLayer> : ModifyBase<ModifyDerive<Der, CCBlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCBlockLayer>>;
		using ModifyBase<ModifyDerive<Der, CCBlockLayer>>::ModifyBase;
		using Base = CCBlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0940, Default, CCBlockLayer, decrementForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f05e0, Default, CCBlockLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0890, Default, CCBlockLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f08c0, Default, CCBlockLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0920, Default, CCBlockLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f08e0, Default, CCBlockLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0900, Default, CCBlockLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0750, Default, CCBlockLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0790, Default, CCBlockLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f06f0, Default, CCBlockLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0720, Default, CCBlockLayer, enterLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f07c0, Default, CCBlockLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0800, Default, CCBlockLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0810, Default, CCBlockLayer, hideLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0830, Default, CCBlockLayer, layerVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0850, Default, CCBlockLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0820, Default, CCBlockLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0700, Default, CCBlockLayer, disableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f0710, Default, CCBlockLayer, enableUI, )
		}
	};
}
