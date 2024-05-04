#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCIndexPath.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, CCIndexPath> : ModifyBase<ModifyDerive<Der, CCIndexPath>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCIndexPath>>;
		using ModifyBase<ModifyDerive<Der, CCIndexPath>>::ModifyBase;
		using Base = CCIndexPath;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4670c0, Default, CCIndexPath)
		}
	};
}
