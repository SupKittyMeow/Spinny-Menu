#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectControlGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectControlGameObject> : ModifyBase<ModifyDerive<Der, ObjectControlGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectControlGameObject>>;
		using ModifyBase<ModifyDerive<Der, ObjectControlGameObject>>::ModifyBase;
		using Base = ObjectControlGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ced00, Default, ObjectControlGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ce7e0, Default, ObjectControlGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ce830, Default, ObjectControlGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
