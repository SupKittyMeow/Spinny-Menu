#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditButtonBar.hpp>
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

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_onLeft
		#define GEODE_STATICS_onLeft
		GEODE_AS_STATIC_FUNCTION(onLeft) 
	#endif

	#ifndef GEODE_STATICS_onRight
		#define GEODE_STATICS_onRight
		GEODE_AS_STATIC_FUNCTION(onRight) 
	#endif

	#ifndef GEODE_STATICS_reloadItems
		#define GEODE_STATICS_reloadItems
		GEODE_AS_STATIC_FUNCTION(reloadItems) 
	#endif

	#ifndef GEODE_STATICS_loadFromItems
		#define GEODE_STATICS_loadFromItems
		GEODE_AS_STATIC_FUNCTION(loadFromItems) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditButtonBar> : ModifyBase<ModifyDerive<Der, EditButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditButtonBar>>;
		using ModifyBase<ModifyDerive<Der, EditButtonBar>>::ModifyBase;
		using Base = EditButtonBar;
        using Derived = Der;
		void apply() override {

		}
	};
}
