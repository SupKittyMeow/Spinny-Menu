#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelCommentDelegate> : ModifyBase<ModifyDerive<Der, LevelCommentDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>::ModifyBase;
		using Base = LevelCommentDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
