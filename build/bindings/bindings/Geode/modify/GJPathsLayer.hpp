#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onPath
		#define GEODE_STATICS_onPath
		GEODE_AS_STATIC_FUNCTION(onPath) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_nameForPath
		#define GEODE_STATICS_nameForPath
		GEODE_AS_STATIC_FUNCTION(nameForPath) 
	#endif

	#ifndef GEODE_STATICS_darkenButtons
		#define GEODE_STATICS_darkenButtons
		GEODE_AS_STATIC_FUNCTION(darkenButtons) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
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


	template<class Der>
	struct ModifyDerive<Der, GJPathsLayer> : ModifyBase<ModifyDerive<Der, GJPathsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathsLayer>>;
		using ModifyBase<ModifyDerive<Der, GJPathsLayer>>::ModifyBase;
		using Base = GJPathsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dad20, Default, GJPathsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2db510, Default, GJPathsLayer, onPath, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dab80, Default, GJPathsLayer, nameForPath, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dae70, Default, GJPathsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2db590, Default, GJPathsLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2db9b0, Default, GJPathsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2db8e0, Default, GJPathsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2db9f0, Default, GJPathsLayer, show, )
		}
	};
}
