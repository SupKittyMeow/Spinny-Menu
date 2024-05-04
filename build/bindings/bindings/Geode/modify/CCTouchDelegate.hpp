#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchDelegate> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>>::ModifyBase;
		using Base = cocos2d::CCTouchDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
