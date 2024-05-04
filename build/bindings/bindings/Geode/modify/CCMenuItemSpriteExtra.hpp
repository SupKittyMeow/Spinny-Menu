#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
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

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemSpriteExtra> : ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>::ModifyBase;
		using Base = CCMenuItemSpriteExtra;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254900, Default, CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254990, Default, CCMenuItemSpriteExtra, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254b20, Default, CCMenuItemSpriteExtra, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254c90, Default, CCMenuItemSpriteExtra, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254f00, Default, CCMenuItemSpriteExtra, unselected, )
		}
	};
}
