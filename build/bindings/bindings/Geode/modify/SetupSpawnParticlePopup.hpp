#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSpawnParticlePopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SetupSpawnParticlePopup> : ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>::ModifyBase;
		using Base = SetupSpawnParticlePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
