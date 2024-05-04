#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIButtonConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, UIButtonConfig> : ModifyBase<ModifyDerive<Der, UIButtonConfig>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UIButtonConfig>>;
		using ModifyBase<ModifyDerive<Der, UIButtonConfig>>::ModifyBase;
		using Base = UIButtonConfig;
        using Derived = Der;
		void apply() override {

		}
	};
}
