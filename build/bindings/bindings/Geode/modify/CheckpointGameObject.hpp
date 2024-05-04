#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CheckpointGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_resetCheckpoint
		#define GEODE_STATICS_resetCheckpoint
		GEODE_AS_STATIC_FUNCTION(resetCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointSpriteVisibility
		#define GEODE_STATICS_updateCheckpointSpriteVisibility
		GEODE_AS_STATIC_FUNCTION(updateCheckpointSpriteVisibility) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CheckpointGameObject> : ModifyBase<ModifyDerive<Der, CheckpointGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CheckpointGameObject>>;
		using ModifyBase<ModifyDerive<Der, CheckpointGameObject>>::ModifyBase;
		using Base = CheckpointGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b89c0, Default, CheckpointGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ba120, Default, CheckpointGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8db0, Default, CheckpointGameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8960, Default, CheckpointGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ba260, Default, CheckpointGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b97a0, Default, CheckpointGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b89e0, Default, CheckpointGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ba2d0, Default, CheckpointGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b9390, Default, CheckpointGameObject, updateSyncedAnimation, float, int)
		}
	};
}
