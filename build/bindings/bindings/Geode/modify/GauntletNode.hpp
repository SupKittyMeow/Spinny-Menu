#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletNode.hpp>
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

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_nameForType
		#define GEODE_STATICS_nameForType
		GEODE_AS_STATIC_FUNCTION(nameForType) 
	#endif

	#ifndef GEODE_STATICS_frameForType
		#define GEODE_STATICS_frameForType
		GEODE_AS_STATIC_FUNCTION(frameForType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletNode> : ModifyBase<ModifyDerive<Der, GauntletNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletNode>>;
		using ModifyBase<ModifyDerive<Der, GauntletNode>>::ModifyBase;
		using Base = GauntletNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53ed50, Default, GauntletNode, init, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5403e0, Default, GauntletNode, nameForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5408a0, Default, GauntletNode, frameForType, GauntletType)
		}
	};
}
