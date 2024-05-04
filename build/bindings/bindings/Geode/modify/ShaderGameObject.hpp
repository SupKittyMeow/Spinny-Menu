#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShaderGameObject.hpp>
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

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShaderGameObject> : ModifyBase<ModifyDerive<Der, ShaderGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShaderGameObject>>;
		using ModifyBase<ModifyDerive<Der, ShaderGameObject>>::ModifyBase;
		using Base = ShaderGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18f0d0, Default, ShaderGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b710, Default, ShaderGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b780, Default, ShaderGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
