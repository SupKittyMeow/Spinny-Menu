#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndPortalObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSpawnPos
		#define GEODE_STATICS_getSpawnPos
		GEODE_AS_STATIC_FUNCTION(getSpawnPos) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateEndPos
		#define GEODE_STATICS_updateEndPos
		GEODE_AS_STATIC_FUNCTION(updateEndPos) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndPortalObject> : ModifyBase<ModifyDerive<Der, EndPortalObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndPortalObject>>;
		using ModifyBase<ModifyDerive<Der, EndPortalObject>>::ModifyBase;
		using Base = EndPortalObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379e40, Default, EndPortalObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a210, Default, EndPortalObject, updateColors, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a2d0, Default, EndPortalObject, triggerObject, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379ee0, Default, EndPortalObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a3e0, Default, EndPortalObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a4f0, Default, EndPortalObject, setVisible, bool)
		}
	};
}
