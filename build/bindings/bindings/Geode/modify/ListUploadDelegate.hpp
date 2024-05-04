#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, ListUploadDelegate> : ModifyBase<ModifyDerive<Der, ListUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, ListUploadDelegate>>::ModifyBase;
		using Base = ListUploadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
