#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getActionByTag
		#define GEODE_STATICS_getActionByTag
		GEODE_AS_STATIC_FUNCTION(getActionByTag) 
	#endif

	#ifndef GEODE_STATICS_actionAllocWithHashElement
		#define GEODE_STATICS_actionAllocWithHashElement
		GEODE_AS_STATIC_FUNCTION(actionAllocWithHashElement) 
	#endif

	#ifndef GEODE_STATICS_addAction
		#define GEODE_STATICS_addAction
		GEODE_AS_STATIC_FUNCTION(addAction) 
	#endif

	#ifndef GEODE_STATICS_deleteHashElement
		#define GEODE_STATICS_deleteHashElement
		GEODE_AS_STATIC_FUNCTION(deleteHashElement) 
	#endif

	#ifndef GEODE_STATICS_numberOfRunningActionsInTarget
		#define GEODE_STATICS_numberOfRunningActionsInTarget
		GEODE_AS_STATIC_FUNCTION(numberOfRunningActionsInTarget) 
	#endif

	#ifndef GEODE_STATICS_pauseAllRunningActions
		#define GEODE_STATICS_pauseAllRunningActions
		GEODE_AS_STATIC_FUNCTION(pauseAllRunningActions) 
	#endif

	#ifndef GEODE_STATICS_pauseTarget
		#define GEODE_STATICS_pauseTarget
		GEODE_AS_STATIC_FUNCTION(pauseTarget) 
	#endif

	#ifndef GEODE_STATICS_removeAction
		#define GEODE_STATICS_removeAction
		GEODE_AS_STATIC_FUNCTION(removeAction) 
	#endif

	#ifndef GEODE_STATICS_removeActionAtIndex
		#define GEODE_STATICS_removeActionAtIndex
		GEODE_AS_STATIC_FUNCTION(removeActionAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeActionByTag
		#define GEODE_STATICS_removeActionByTag
		GEODE_AS_STATIC_FUNCTION(removeActionByTag) 
	#endif

	#ifndef GEODE_STATICS_removeAllActions
		#define GEODE_STATICS_removeAllActions
		GEODE_AS_STATIC_FUNCTION(removeAllActions) 
	#endif

	#ifndef GEODE_STATICS_removeAllActionsFromTarget
		#define GEODE_STATICS_removeAllActionsFromTarget
		GEODE_AS_STATIC_FUNCTION(removeAllActionsFromTarget) 
	#endif

	#ifndef GEODE_STATICS_resumeTarget
		#define GEODE_STATICS_resumeTarget
		GEODE_AS_STATIC_FUNCTION(resumeTarget) 
	#endif

	#ifndef GEODE_STATICS_resumeTargets
		#define GEODE_STATICS_resumeTargets
		GEODE_AS_STATIC_FUNCTION(resumeTargets) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCActionManager> : ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>>::ModifyBase;
		using Base = cocos2d::CCActionManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212f20, Default, cocos2d::CCActionManager, addAction, cocos2d::CCAction*, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212c60, Default, cocos2d::CCActionManager, pauseTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213640, Default, cocos2d::CCActionManager, removeActionByTag, unsigned int, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212d40, Default, cocos2d::CCActionManager, resumeTarget, cocos2d::CCObject*)
		}
	};
}
