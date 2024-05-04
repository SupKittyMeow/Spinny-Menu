#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_levelUploadFinished
		#define GEODE_STATICS_levelUploadFinished
		GEODE_AS_STATIC_FUNCTION(levelUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUploadFailed
		#define GEODE_STATICS_levelUploadFailed
		GEODE_AS_STATIC_FUNCTION(levelUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelUploadDelegate> : ModifyBase<ModifyDerive<Der, LevelUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>::ModifyBase;
		using Base = LevelUploadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
