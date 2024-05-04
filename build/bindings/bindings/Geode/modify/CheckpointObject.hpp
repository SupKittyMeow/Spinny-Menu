#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CheckpointObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CheckpointObject> : ModifyBase<ModifyDerive<Der, CheckpointObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CheckpointObject>>;
		using ModifyBase<ModifyDerive<Der, CheckpointObject>>::ModifyBase;
		using Base = CheckpointObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5170, Default, CheckpointObject, getObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8ef0, Default, CheckpointObject, init, )
		}
	};
}
