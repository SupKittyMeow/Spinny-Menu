#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLevel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getCoinKey
		#define GEODE_STATICS_getCoinKey
		GEODE_AS_STATIC_FUNCTION(getCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_getLengthKey
		#define GEODE_STATICS_getLengthKey
		GEODE_AS_STATIC_FUNCTION(getLengthKey) 
	#endif

	#ifndef GEODE_STATICS_saveNewScore
		#define GEODE_STATICS_saveNewScore
		GEODE_AS_STATIC_FUNCTION(saveNewScore) 
	#endif

	#ifndef GEODE_STATICS_copyLevelInfo
		#define GEODE_STATICS_copyLevelInfo
		GEODE_AS_STATIC_FUNCTION(copyLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_unverifyCoins
		#define GEODE_STATICS_unverifyCoins
		GEODE_AS_STATIC_FUNCTION(unverifyCoins) 
	#endif

	#ifndef GEODE_STATICS_savePercentage
		#define GEODE_STATICS_savePercentage
		GEODE_AS_STATIC_FUNCTION(savePercentage) 
	#endif

	#ifndef GEODE_STATICS_getListSnapshot
		#define GEODE_STATICS_getListSnapshot
		GEODE_AS_STATIC_FUNCTION(getListSnapshot) 
	#endif

	#ifndef GEODE_STATICS_levelWasAltered
		#define GEODE_STATICS_levelWasAltered
		GEODE_AS_STATIC_FUNCTION(levelWasAltered) 
	#endif

	#ifndef GEODE_STATICS_areCoinsVerified
		#define GEODE_STATICS_areCoinsVerified
		GEODE_AS_STATIC_FUNCTION(areCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getNormalPercent
		#define GEODE_STATICS_getNormalPercent
		GEODE_AS_STATIC_FUNCTION(getNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setNormalPercent
		#define GEODE_STATICS_setNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_lengthKeyToString
		#define GEODE_STATICS_lengthKeyToString
		GEODE_AS_STATIC_FUNCTION(lengthKeyToString) 
	#endif

	#ifndef GEODE_STATICS_levelWasSubmitted
		#define GEODE_STATICS_levelWasSubmitted
		GEODE_AS_STATIC_FUNCTION(levelWasSubmitted) 
	#endif

	#ifndef GEODE_STATICS_storeNewLocalScore
		#define GEODE_STATICS_storeNewLocalScore
		GEODE_AS_STATIC_FUNCTION(storeNewLocalScore) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_parseSettingsString
		#define GEODE_STATICS_parseSettingsString
		GEODE_AS_STATIC_FUNCTION(parseSettingsString) 
	#endif

	#ifndef GEODE_STATICS_scoreStringToVector
		#define GEODE_STATICS_scoreStringToVector
		GEODE_AS_STATIC_FUNCTION(scoreStringToVector) 
	#endif

	#ifndef GEODE_STATICS_scoreVectorToString
		#define GEODE_STATICS_scoreVectorToString
		GEODE_AS_STATIC_FUNCTION(scoreVectorToString) 
	#endif

	#ifndef GEODE_STATICS_getAverageDifficulty
		#define GEODE_STATICS_getAverageDifficulty
		GEODE_AS_STATIC_FUNCTION(getAverageDifficulty) 
	#endif

	#ifndef GEODE_STATICS_demonIconForDifficulty
		#define GEODE_STATICS_demonIconForDifficulty
		GEODE_AS_STATIC_FUNCTION(demonIconForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_generateSettingsString
		#define GEODE_STATICS_generateSettingsString
		GEODE_AS_STATIC_FUNCTION(generateSettingsString) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPageForTab
		#define GEODE_STATICS_getLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildPageForTab
		#define GEODE_STATICS_setLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedLevelDescription
		#define GEODE_STATICS_getUnpackedLevelDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLevel> : ModifyBase<ModifyDerive<Der, GJGameLevel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLevel>>;
		using ModifyBase<ModifyDerive<Der, GJGameLevel>>::ModifyBase;
		using Base = GJGameLevel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x503c90, Default, GJGameLevel, create, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x501aa0, Default, GJGameLevel, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52a700, Default, GJGameLevel, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51ad20, Default, GJGameLevel, getCoinKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5291e0, Default, GJGameLevel, getSongName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x528db0, Default, GJGameLevel, getLengthKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x528990, Default, GJGameLevel, savePercentage, int, bool, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5287c0, Default, GJGameLevel, levelWasAltered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5290d0, Default, GJGameLevel, getAudioFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5022b0, Default, GJGameLevel, getNormalPercent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x528df0, Default, GJGameLevel, lengthKeyToString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x529780, Default, GJGameLevel, scoreStringToVector, gd::string&, gd::vector<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x528e90, Default, GJGameLevel, getAverageDifficulty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52c310, Default, GJGameLevel, demonIconForDifficulty, DemonDifficultyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52c280, Default, GJGameLevel, getUnpackedLevelDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52b6f0, Default, GJGameLevel, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52c210, Default, GJGameLevel, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5285a0, Default, GJGameLevel, init, )
		}
	};
}
