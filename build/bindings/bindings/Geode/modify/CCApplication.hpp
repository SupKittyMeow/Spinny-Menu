#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedApplication
		#define GEODE_STATICS_sharedApplication
		GEODE_AS_STATIC_FUNCTION(sharedApplication) 
	#endif

	#ifndef GEODE_STATICS_openURL
		#define GEODE_STATICS_openURL
		GEODE_AS_STATIC_FUNCTION(openURL) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCApplication> : ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>::ModifyBase;
		using Base = cocos2d::CCApplication;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3065c0, Default, cocos2d::CCApplication, sharedApplication, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307350, Default, cocos2d::CCApplication, openURL, char const*)
		}
	};
}
