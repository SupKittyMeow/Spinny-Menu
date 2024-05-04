#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetIDPopupDelegate> : ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>::ModifyBase;
		using Base = SetIDPopupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
