#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DemonFilterDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, DemonFilterDelegate> : ModifyBase<ModifyDerive<Der, DemonFilterDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DemonFilterDelegate>>;
		using ModifyBase<ModifyDerive<Der, DemonFilterDelegate>>::ModifyBase;
		using Base = DemonFilterDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
