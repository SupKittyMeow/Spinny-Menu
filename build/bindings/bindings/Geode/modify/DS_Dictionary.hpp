#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addBoolValuesToMapForKey
		#define GEODE_STATICS_addBoolValuesToMapForKey
		GEODE_AS_STATIC_FUNCTION(addBoolValuesToMapForKey) 
	#endif

	#ifndef GEODE_STATICS_addBoolValuesToMapForKeySpecial
		#define GEODE_STATICS_addBoolValuesToMapForKeySpecial
		GEODE_AS_STATIC_FUNCTION(addBoolValuesToMapForKeySpecial) 
	#endif

	#ifndef GEODE_STATICS_checkCompatibility
		#define GEODE_STATICS_checkCompatibility
		GEODE_AS_STATIC_FUNCTION(checkCompatibility) 
	#endif

	#ifndef GEODE_STATICS_cleanStringWhiteSpace
		#define GEODE_STATICS_cleanStringWhiteSpace
		GEODE_AS_STATIC_FUNCTION(cleanStringWhiteSpace) 
	#endif

	#ifndef GEODE_STATICS_copyFile
		#define GEODE_STATICS_copyFile
		GEODE_AS_STATIC_FUNCTION(copyFile) 
	#endif

	#ifndef GEODE_STATICS_decodeObjectForKey
		#define GEODE_STATICS_decodeObjectForKey
		GEODE_AS_STATIC_FUNCTION(decodeObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_getAllKeys
		#define GEODE_STATICS_getAllKeys
		GEODE_AS_STATIC_FUNCTION(getAllKeys) 
	#endif

	#ifndef GEODE_STATICS_getArrayForKey
		#define GEODE_STATICS_getArrayForKey
		GEODE_AS_STATIC_FUNCTION(getArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getDictForKey
		#define GEODE_STATICS_getDictForKey
		GEODE_AS_STATIC_FUNCTION(getDictForKey) 
	#endif

	#ifndef GEODE_STATICS_getFloatForKey
		#define GEODE_STATICS_getFloatForKey
		GEODE_AS_STATIC_FUNCTION(getFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_getIndexOfKey
		#define GEODE_STATICS_getIndexOfKey
		GEODE_AS_STATIC_FUNCTION(getIndexOfKey) 
	#endif

	#ifndef GEODE_STATICS_getIndexOfKeyWithClosestAlphaNumericalMatch
		#define GEODE_STATICS_getIndexOfKeyWithClosestAlphaNumericalMatch
		GEODE_AS_STATIC_FUNCTION(getIndexOfKeyWithClosestAlphaNumericalMatch) 
	#endif

	#ifndef GEODE_STATICS_getIntegerForKey
		#define GEODE_STATICS_getIntegerForKey
		GEODE_AS_STATIC_FUNCTION(getIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_getNumKeys
		#define GEODE_STATICS_getNumKeys
		GEODE_AS_STATIC_FUNCTION(getNumKeys) 
	#endif

	#ifndef GEODE_STATICS_getObjectForKey
		#define GEODE_STATICS_getObjectForKey
		GEODE_AS_STATIC_FUNCTION(getObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_getRectArrayForKey
		#define GEODE_STATICS_getRectArrayForKey
		GEODE_AS_STATIC_FUNCTION(getRectArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_getRectForKey
		#define GEODE_STATICS_getRectForKey
		GEODE_AS_STATIC_FUNCTION(getRectForKey) 
	#endif

	#ifndef GEODE_STATICS_getStringArrayForKey
		#define GEODE_STATICS_getStringArrayForKey
		GEODE_AS_STATIC_FUNCTION(getStringArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_getStringForKey
		#define GEODE_STATICS_getStringForKey
		GEODE_AS_STATIC_FUNCTION(getStringForKey) 
	#endif

	#ifndef GEODE_STATICS_getVec2ArrayForKey
		#define GEODE_STATICS_getVec2ArrayForKey
		GEODE_AS_STATIC_FUNCTION(getVec2ArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_getVec2ForKey
		#define GEODE_STATICS_getVec2ForKey
		GEODE_AS_STATIC_FUNCTION(getVec2ForKey) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromCompressedFile
		#define GEODE_STATICS_loadRootSubDictFromCompressedFile
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromCompressedFile) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromFile
		#define GEODE_STATICS_loadRootSubDictFromFile
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromFile) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromString
		#define GEODE_STATICS_loadRootSubDictFromString
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromString) 
	#endif

	#ifndef GEODE_STATICS_rectFromString
		#define GEODE_STATICS_rectFromString
		GEODE_AS_STATIC_FUNCTION(rectFromString) 
	#endif

	#ifndef GEODE_STATICS_removeAllKeys
		#define GEODE_STATICS_removeAllKeys
		GEODE_AS_STATIC_FUNCTION(removeAllKeys) 
	#endif

	#ifndef GEODE_STATICS_removeKey
		#define GEODE_STATICS_removeKey
		GEODE_AS_STATIC_FUNCTION(removeKey) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToCompressedFile
		#define GEODE_STATICS_saveRootSubDictToCompressedFile
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToCompressedFile) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToFile
		#define GEODE_STATICS_saveRootSubDictToFile
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToFile) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToString
		#define GEODE_STATICS_saveRootSubDictToString
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToString) 
	#endif

	#ifndef GEODE_STATICS_setArrayForKey
		#define GEODE_STATICS_setArrayForKey
		GEODE_AS_STATIC_FUNCTION(setArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setBoolMapForKey
		#define GEODE_STATICS_setBoolMapForKey
		GEODE_AS_STATIC_FUNCTION(setBoolMapForKey) 
	#endif

	#ifndef GEODE_STATICS_setDictForKey
		#define GEODE_STATICS_setDictForKey
		GEODE_AS_STATIC_FUNCTION(setDictForKey) 
	#endif

	#ifndef GEODE_STATICS_setFloatForKey
		#define GEODE_STATICS_setFloatForKey
		GEODE_AS_STATIC_FUNCTION(setFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_setIntegerForKey
		#define GEODE_STATICS_setIntegerForKey
		GEODE_AS_STATIC_FUNCTION(setIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_setObjectForKey
		#define GEODE_STATICS_setObjectForKey
		GEODE_AS_STATIC_FUNCTION(setObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_setRectArrayForKey
		#define GEODE_STATICS_setRectArrayForKey
		GEODE_AS_STATIC_FUNCTION(setRectArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_setRectForKey
		#define GEODE_STATICS_setRectForKey
		GEODE_AS_STATIC_FUNCTION(setRectForKey) 
	#endif

	#ifndef GEODE_STATICS_setStringArrayForKey
		#define GEODE_STATICS_setStringArrayForKey
		GEODE_AS_STATIC_FUNCTION(setStringArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_setStringForKey
		#define GEODE_STATICS_setStringForKey
		GEODE_AS_STATIC_FUNCTION(setStringForKey) 
	#endif

	#ifndef GEODE_STATICS_setSubDictForKey
		#define GEODE_STATICS_setSubDictForKey
		GEODE_AS_STATIC_FUNCTION(setSubDictForKey) 
	#endif

	#ifndef GEODE_STATICS_setVec2ArrayForKey
		#define GEODE_STATICS_setVec2ArrayForKey
		GEODE_AS_STATIC_FUNCTION(setVec2ArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_setVec2ForKey
		#define GEODE_STATICS_setVec2ForKey
		GEODE_AS_STATIC_FUNCTION(setVec2ForKey) 
	#endif

	#ifndef GEODE_STATICS_split
		#define GEODE_STATICS_split
		GEODE_AS_STATIC_FUNCTION(split) 
	#endif

	#ifndef GEODE_STATICS_splitWithForm
		#define GEODE_STATICS_splitWithForm
		GEODE_AS_STATIC_FUNCTION(splitWithForm) 
	#endif

	#ifndef GEODE_STATICS_stepBackToRootSubDict
		#define GEODE_STATICS_stepBackToRootSubDict
		GEODE_AS_STATIC_FUNCTION(stepBackToRootSubDict) 
	#endif

	#ifndef GEODE_STATICS_stepIntoSubDictWithKey
		#define GEODE_STATICS_stepIntoSubDictWithKey
		GEODE_AS_STATIC_FUNCTION(stepIntoSubDictWithKey) 
	#endif

	#ifndef GEODE_STATICS_stepOutOfSubDict
		#define GEODE_STATICS_stepOutOfSubDict
		GEODE_AS_STATIC_FUNCTION(stepOutOfSubDict) 
	#endif

	#ifndef GEODE_STATICS_vec2FromString
		#define GEODE_STATICS_vec2FromString
		GEODE_AS_STATIC_FUNCTION(vec2FromString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DS_Dictionary> : ModifyBase<ModifyDerive<Der, DS_Dictionary>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DS_Dictionary>>;
		using ModifyBase<ModifyDerive<Der, DS_Dictionary>>::ModifyBase;
		using Base = DS_Dictionary;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171b90, Default, DS_Dictionary, getArrayForKey, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e8f0, Default, DS_Dictionary, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172ac0, Default, DS_Dictionary, getDictForKey, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e9f0, Default, DS_Dictionary, getFloatForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e7b0, Default, DS_Dictionary, getIntegerForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e0d0, Default, DS_Dictionary, getKey, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171d10, Default, DS_Dictionary, getObjectForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16eb30, Default, DS_Dictionary, getStringForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16fc80, Default, DS_Dictionary, setBoolForKey, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1721a0, Default, DS_Dictionary, setDictForKey, char const*, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16feb0, Default, DS_Dictionary, setFloatForKey, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16f9a0, Default, DS_Dictionary, setIntegerForKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1701a0, Default, DS_Dictionary, setStringForKey, char const*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16daa0, Default, DS_Dictionary, stepIntoSubDictWithKey, char const*)
		}
	};
}
