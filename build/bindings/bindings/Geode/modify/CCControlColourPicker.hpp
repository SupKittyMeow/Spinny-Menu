#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colourPicker
		#define GEODE_STATICS_colourPicker
		GEODE_AS_STATIC_FUNCTION(colourPicker) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlColourPicker> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>>::ModifyBase;
		using Base = cocos2d::extension::CCControlColourPicker;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x334940, Default, cocos2d::extension::CCControlColourPicker, colourPicker, )
		}
	};
}
