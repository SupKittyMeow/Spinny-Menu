#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DashRingObject.hpp>
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

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DashRingObject> : ModifyBase<ModifyDerive<Der, DashRingObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DashRingObject>>;
		using ModifyBase<ModifyDerive<Der, DashRingObject>>::ModifyBase;
		using Base = DashRingObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19dbf0, Default, DashRingObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19dd40, Default, DashRingObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19deb0, Default, DashRingObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
