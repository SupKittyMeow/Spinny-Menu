#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJCommentListLayer.hpp>
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
	struct ModifyDerive<Der, GJCommentListLayer> : ModifyBase<ModifyDerive<Der, GJCommentListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJCommentListLayer>>;
		using ModifyBase<ModifyDerive<Der, GJCommentListLayer>>::ModifyBase;
		using Base = GJCommentListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c4e0, Default, GJCommentListLayer, create, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c5f0, Default, GJCommentListLayer, init, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)
		}
	};
}
