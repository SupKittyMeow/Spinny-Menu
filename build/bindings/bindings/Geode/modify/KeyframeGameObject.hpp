#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeyframeGameObject.hpp>
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

	#ifndef GEODE_STATICS_updateShadowObjects
		#define GEODE_STATICS_updateShadowObjects
		GEODE_AS_STATIC_FUNCTION(updateShadowObjects) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeyframeGameObject> : ModifyBase<ModifyDerive<Der, KeyframeGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeGameObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeGameObject>>::ModifyBase;
		using Base = KeyframeGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ad8d0, Default, KeyframeGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ad510, Default, KeyframeGameObject, updateShadowObjects, GJBaseGameLayer*, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ad4a0, Default, KeyframeGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ad770, Default, KeyframeGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ade40, Default, KeyframeGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
