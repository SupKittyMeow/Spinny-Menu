#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setNewScene
		#define GEODE_STATICS_setNewScene
		GEODE_AS_STATIC_FUNCTION(setNewScene) 
	#endif

	#ifndef GEODE_STATICS_finish
		#define GEODE_STATICS_finish
		GEODE_AS_STATIC_FUNCTION(finish) 
	#endif

	#ifndef GEODE_STATICS_hideOutShowIn
		#define GEODE_STATICS_hideOutShowIn
		GEODE_AS_STATIC_FUNCTION(hideOutShowIn) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_cleanup
		#define GEODE_STATICS_cleanup
		GEODE_AS_STATIC_FUNCTION(cleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionScene> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>>::ModifyBase;
		using Base = cocos2d::CCTransitionScene;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd0620, Default, cocos2d::CCTransitionScene)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0a90, Default, cocos2d::CCTransitionScene, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0ae0, Default, cocos2d::CCTransitionScene, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0b40, Default, cocos2d::CCTransitionScene, cleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0840, Default, cocos2d::CCTransitionScene, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd07a0, Default, cocos2d::CCTransitionScene, initWithDuration, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd0830, Default, cocos2d::CCTransitionScene, sceneOrder, )
		}
	};
}
