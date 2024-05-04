#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelDeleteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_levelDeleteFinished
		#define GEODE_STATICS_levelDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFailed
		#define GEODE_STATICS_levelDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelDeleteFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelDeleteDelegate> : ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>>::ModifyBase;
		using Base = LevelDeleteDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
