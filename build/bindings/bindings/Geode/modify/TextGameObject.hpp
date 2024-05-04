#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextGameObject.hpp>
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

	#ifndef GEODE_STATICS_updateTextObject
		#define GEODE_STATICS_updateTextObject
		GEODE_AS_STATIC_FUNCTION(updateTextObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_updateTextKerning
		#define GEODE_STATICS_updateTextKerning
		GEODE_AS_STATIC_FUNCTION(updateTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getTextKerning
		#define GEODE_STATICS_getTextKerning
		GEODE_AS_STATIC_FUNCTION(getTextKerning) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextGameObject> : ModifyBase<ModifyDerive<Der, TextGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextGameObject>>;
		using ModifyBase<ModifyDerive<Der, TextGameObject>>::ModifyBase;
		using Base = TextGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x596ef0, Default, TextGameObject, updateTextObject, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597170, Default, TextGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597280, Default, TextGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x596ee0, Default, TextGameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597b00, Default, TextGameObject, getTextKerning, )
		}
	};
}
