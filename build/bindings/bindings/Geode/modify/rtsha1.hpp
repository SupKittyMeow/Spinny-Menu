#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/rtsha1.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_toHexString
		#define GEODE_STATICS_toHexString
		GEODE_AS_STATIC_FUNCTION(toHexString) 
	#endif

	#ifndef GEODE_STATICS_calc
		#define GEODE_STATICS_calc
		GEODE_AS_STATIC_FUNCTION(calc) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, rtsha1> : ModifyBase<ModifyDerive<Der, rtsha1>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, rtsha1>>;
		using ModifyBase<ModifyDerive<Der, rtsha1>>::ModifyBase;
		using Base = rtsha1;
        using Derived = Der;
		void apply() override {

		}
	};
}
