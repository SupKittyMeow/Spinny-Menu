#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJListLayer.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, GJListLayer> : ModifyBase<ModifyDerive<Der, GJListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJListLayer>>;
		using ModifyBase<ModifyDerive<Der, GJListLayer>>::ModifyBase;
		using Base = GJListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597b70, Default, GJListLayer, create, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597c80, Default, GJListLayer, init, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int)
		}
	};
}
