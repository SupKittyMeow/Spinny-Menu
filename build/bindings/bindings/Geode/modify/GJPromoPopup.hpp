#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPromoPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
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
	struct ModifyDerive<Der, GJPromoPopup> : ModifyBase<ModifyDerive<Der, GJPromoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPromoPopup>>;
		using ModifyBase<ModifyDerive<Der, GJPromoPopup>>::ModifyBase;
		using Base = GJPromoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2915e0, Default, GJPromoPopup, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291760, Default, GJPromoPopup, init, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291a40, Default, GJPromoPopup, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291b50, Default, GJPromoPopup, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291a80, Default, GJPromoPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291b90, Default, GJPromoPopup, show, )
		}
	};
}
