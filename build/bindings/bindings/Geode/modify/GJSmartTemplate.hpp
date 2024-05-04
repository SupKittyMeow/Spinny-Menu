#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartTemplate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getPrefabs
		#define GEODE_STATICS_getPrefabs
		GEODE_AS_STATIC_FUNCTION(getPrefabs) 
	#endif

	#ifndef GEODE_STATICS_getNoCornerKey
		#define GEODE_STATICS_getNoCornerKey
		GEODE_AS_STATIC_FUNCTION(getNoCornerKey) 
	#endif

	#ifndef GEODE_STATICS_getPrefabWithID
		#define GEODE_STATICS_getPrefabWithID
		GEODE_AS_STATIC_FUNCTION(getPrefabWithID) 
	#endif

	#ifndef GEODE_STATICS_getRandomPrefab
		#define GEODE_STATICS_getRandomPrefab
		GEODE_AS_STATIC_FUNCTION(getRandomPrefab) 
	#endif

	#ifndef GEODE_STATICS_getSimplifiedKey
		#define GEODE_STATICS_getSimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getSimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_getTemplateState
		#define GEODE_STATICS_getTemplateState
		GEODE_AS_STATIC_FUNCTION(getTemplateState) 
	#endif

	#ifndef GEODE_STATICS_getSimplifiedType
		#define GEODE_STATICS_getSimplifiedType
		GEODE_AS_STATIC_FUNCTION(getSimplifiedType) 
	#endif

	#ifndef GEODE_STATICS_getVerySimplifiedKey
		#define GEODE_STATICS_getVerySimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getVerySimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_getTotalChanceForPrefab
		#define GEODE_STATICS_getTotalChanceForPrefab
		GEODE_AS_STATIC_FUNCTION(getTotalChanceForPrefab) 
	#endif

	#ifndef GEODE_STATICS_getPrefab
		#define GEODE_STATICS_getPrefab
		GEODE_AS_STATIC_FUNCTION(getPrefab) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_savePrefab
		#define GEODE_STATICS_savePrefab
		GEODE_AS_STATIC_FUNCTION(savePrefab) 
	#endif

	#ifndef GEODE_STATICS_isUnrequired
		#define GEODE_STATICS_isUnrequired
		GEODE_AS_STATIC_FUNCTION(isUnrequired) 
	#endif

	#ifndef GEODE_STATICS_offsetForDir
		#define GEODE_STATICS_offsetForDir
		GEODE_AS_STATIC_FUNCTION(offsetForDir) 
	#endif

	#ifndef GEODE_STATICS_removePrefab
		#define GEODE_STATICS_removePrefab
		GEODE_AS_STATIC_FUNCTION(removePrefab) 
	#endif

	#ifndef GEODE_STATICS_flipBlockType
		#define GEODE_STATICS_flipBlockType
		GEODE_AS_STATIC_FUNCTION(flipBlockType) 
	#endif

	#ifndef GEODE_STATICS_offsetForType
		#define GEODE_STATICS_offsetForType
		GEODE_AS_STATIC_FUNCTION(offsetForType) 
	#endif

	#ifndef GEODE_STATICS_scanForPrefab
		#define GEODE_STATICS_scanForPrefab
		GEODE_AS_STATIC_FUNCTION(scanForPrefab) 
	#endif

	#ifndef GEODE_STATICS_flipBlockTypeX
		#define GEODE_STATICS_flipBlockTypeX
		GEODE_AS_STATIC_FUNCTION(flipBlockTypeX) 
	#endif

	#ifndef GEODE_STATICS_flipBlockTypeY
		#define GEODE_STATICS_flipBlockTypeY
		GEODE_AS_STATIC_FUNCTION(flipBlockTypeY) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_offsetForObject
		#define GEODE_STATICS_offsetForObject
		GEODE_AS_STATIC_FUNCTION(offsetForObject) 
	#endif

	#ifndef GEODE_STATICS_rotateBlockType
		#define GEODE_STATICS_rotateBlockType
		GEODE_AS_STATIC_FUNCTION(rotateBlockType) 
	#endif

	#ifndef GEODE_STATICS_saveRemapToDict
		#define GEODE_STATICS_saveRemapToDict
		GEODE_AS_STATIC_FUNCTION(saveRemapToDict) 
	#endif

	#ifndef GEODE_STATICS_keyFromNeighbors
		#define GEODE_STATICS_keyFromNeighbors
		GEODE_AS_STATIC_FUNCTION(keyFromNeighbors) 
	#endif

	#ifndef GEODE_STATICS_generateRemapDict
		#define GEODE_STATICS_generateRemapDict
		GEODE_AS_STATIC_FUNCTION(generateRemapDict) 
	#endif

	#ifndef GEODE_STATICS_logTemplateStatus
		#define GEODE_STATICS_logTemplateStatus
		GEODE_AS_STATIC_FUNCTION(logTemplateStatus) 
	#endif

	#ifndef GEODE_STATICS_rotateBlockType90
		#define GEODE_STATICS_rotateBlockType90
		GEODE_AS_STATIC_FUNCTION(rotateBlockType90) 
	#endif

	#ifndef GEODE_STATICS_smartObjectToType
		#define GEODE_STATICS_smartObjectToType
		GEODE_AS_STATIC_FUNCTION(smartObjectToType) 
	#endif

	#ifndef GEODE_STATICS_keyFromNeighborsOld
		#define GEODE_STATICS_keyFromNeighborsOld
		GEODE_AS_STATIC_FUNCTION(keyFromNeighborsOld) 
	#endif

	#ifndef GEODE_STATICS_resetScannedPrefabs
		#define GEODE_STATICS_resetScannedPrefabs
		GEODE_AS_STATIC_FUNCTION(resetScannedPrefabs) 
	#endif

	#ifndef GEODE_STATICS_shouldDiscardObject
		#define GEODE_STATICS_shouldDiscardObject
		GEODE_AS_STATIC_FUNCTION(shouldDiscardObject) 
	#endif

	#ifndef GEODE_STATICS_smartTypeToObjectKey
		#define GEODE_STATICS_smartTypeToObjectKey
		GEODE_AS_STATIC_FUNCTION(smartTypeToObjectKey) 
	#endif

	#ifndef GEODE_STATICS_applyTransformationsForType
		#define GEODE_STATICS_applyTransformationsForType
		GEODE_AS_STATIC_FUNCTION(applyTransformationsForType) 
	#endif

	#ifndef GEODE_STATICS_flipKey
		#define GEODE_STATICS_flipKey
		GEODE_AS_STATIC_FUNCTION(flipKey) 
	#endif

	#ifndef GEODE_STATICS_rotateKey
		#define GEODE_STATICS_rotateKey
		GEODE_AS_STATIC_FUNCTION(rotateKey) 
	#endif

	#ifndef GEODE_STATICS_saveRemap
		#define GEODE_STATICS_saveRemap
		GEODE_AS_STATIC_FUNCTION(saveRemap) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartTemplate> : ModifyBase<ModifyDerive<Der, GJSmartTemplate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartTemplate>>;
		using ModifyBase<ModifyDerive<Der, GJSmartTemplate>>::ModifyBase;
		using Base = GJSmartTemplate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x403360, Default, GJSmartTemplate, getNoCornerKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x402b00, Default, GJSmartTemplate, getSimplifiedKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4034a0, Default, GJSmartTemplate, getVerySimplifiedKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x407300, Default, GJSmartTemplate, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x407250, Default, GJSmartTemplate, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x403130, Default, GJSmartTemplate, saveRemapToDict, gd::string, gd::string, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x406780, Default, GJSmartTemplate, logTemplateStatus, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x402210, Default, GJSmartTemplate, saveRemap, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4075e0, Default, GJSmartTemplate, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x407240, Default, GJSmartTemplate, canEncode, )
		}
	};
}
