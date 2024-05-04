#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDropDownLayer.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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
	struct ModifyDerive<Der, GJDropDownLayer> : ModifyBase<ModifyDerive<Der, GJDropDownLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDropDownLayer>>;
		using ModifyBase<ModifyDerive<Der, GJDropDownLayer>>::ModifyBase;
		using Base = GJDropDownLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5acc30, Default, GJDropDownLayer, create, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5acd70, Default, GJDropDownLayer, init, const char*, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5ac980, Default, GJDropDownLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad550, Default, GJDropDownLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad240, Default, GJDropDownLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad280, Default, GJDropDownLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad1c0, Default, GJDropDownLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad210, Default, GJDropDownLayer, enterLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad2c0, Default, GJDropDownLayer, exitLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad300, Default, GJDropDownLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad3f0, Default, GJDropDownLayer, hideLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad4f0, Default, GJDropDownLayer, layerVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad510, Default, GJDropDownLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad4e0, Default, GJDropDownLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad1d0, Default, GJDropDownLayer, disableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad1f0, Default, GJDropDownLayer, enableUI, )
		}
	};
}
