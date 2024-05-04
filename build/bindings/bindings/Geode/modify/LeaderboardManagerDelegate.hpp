#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LeaderboardManagerDelegate> : ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>::ModifyBase;
		using Base = LeaderboardManagerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
