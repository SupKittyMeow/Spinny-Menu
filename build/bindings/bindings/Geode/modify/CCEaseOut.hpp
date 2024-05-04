#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEaseOut> : ModifyBase<ModifyDerive<Der, cocos2d::CCEaseOut>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEaseOut>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEaseOut>>::ModifyBase;
		using Base = cocos2d::CCEaseOut;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ecb10, Default, cocos2d::CCEaseOut, create, cocos2d::CCActionInterval*, float)
		}
	};
}
