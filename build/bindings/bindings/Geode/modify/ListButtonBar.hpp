#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListButtonBar.hpp>
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

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListButtonBar> : ModifyBase<ModifyDerive<Der, ListButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListButtonBar>>;
		using ModifyBase<ModifyDerive<Der, ListButtonBar>>::ModifyBase;
		using Base = ListButtonBar;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d12d0, Default, ListButtonBar, create, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d13a0, Default, ListButtonBar, init, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int)
		}
	};
}
