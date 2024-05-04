#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUpdateDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_levelUpdateFinished
		#define GEODE_STATICS_levelUpdateFinished
		GEODE_AS_STATIC_FUNCTION(levelUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFailed
		#define GEODE_STATICS_levelUpdateFailed
		GEODE_AS_STATIC_FUNCTION(levelUpdateFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelUpdateDelegate> : ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>::ModifyBase;
		using Base = LevelUpdateDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
