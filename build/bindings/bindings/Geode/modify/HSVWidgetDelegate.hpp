#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_hsvChanged
		#define GEODE_STATICS_hsvChanged
		GEODE_AS_STATIC_FUNCTION(hsvChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVWidgetDelegate> : ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>::ModifyBase;
		using Base = HSVWidgetDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
