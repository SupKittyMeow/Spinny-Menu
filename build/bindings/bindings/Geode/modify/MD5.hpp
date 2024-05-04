#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MD5.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_MD5Transform
		#define GEODE_STATICS_MD5Transform
		GEODE_AS_STATIC_FUNCTION(MD5Transform) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MD5> : ModifyBase<ModifyDerive<Der, MD5>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MD5>>;
		using ModifyBase<ModifyDerive<Der, MD5>>::ModifyBase;
		using Base = MD5;
        using Derived = Der;
		void apply() override {

		}
	};
}
