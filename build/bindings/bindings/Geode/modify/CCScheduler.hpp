#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTimeScale
		#define GEODE_STATICS_getTimeScale
		GEODE_AS_STATIC_FUNCTION(getTimeScale) 
	#endif

	#ifndef GEODE_STATICS_setTimeScale
		#define GEODE_STATICS_setTimeScale
		GEODE_AS_STATIC_FUNCTION(setTimeScale) 
	#endif

	#ifndef GEODE_STATICS_appendIn
		#define GEODE_STATICS_appendIn
		GEODE_AS_STATIC_FUNCTION(appendIn) 
	#endif

	#ifndef GEODE_STATICS_isTargetPaused
		#define GEODE_STATICS_isTargetPaused
		GEODE_AS_STATIC_FUNCTION(isTargetPaused) 
	#endif

	#ifndef GEODE_STATICS_pauseAllTargets
		#define GEODE_STATICS_pauseAllTargets
		GEODE_AS_STATIC_FUNCTION(pauseAllTargets) 
	#endif

	#ifndef GEODE_STATICS_pauseAllTargetsWithMinPriority
		#define GEODE_STATICS_pauseAllTargetsWithMinPriority
		GEODE_AS_STATIC_FUNCTION(pauseAllTargetsWithMinPriority) 
	#endif

	#ifndef GEODE_STATICS_pauseTarget
		#define GEODE_STATICS_pauseTarget
		GEODE_AS_STATIC_FUNCTION(pauseTarget) 
	#endif

	#ifndef GEODE_STATICS_priorityIn
		#define GEODE_STATICS_priorityIn
		GEODE_AS_STATIC_FUNCTION(priorityIn) 
	#endif

	#ifndef GEODE_STATICS_removeHashElement
		#define GEODE_STATICS_removeHashElement
		GEODE_AS_STATIC_FUNCTION(removeHashElement) 
	#endif

	#ifndef GEODE_STATICS_removeUpdateFromHash
		#define GEODE_STATICS_removeUpdateFromHash
		GEODE_AS_STATIC_FUNCTION(removeUpdateFromHash) 
	#endif

	#ifndef GEODE_STATICS_resumeTarget
		#define GEODE_STATICS_resumeTarget
		GEODE_AS_STATIC_FUNCTION(resumeTarget) 
	#endif

	#ifndef GEODE_STATICS_resumeTargets
		#define GEODE_STATICS_resumeTargets
		GEODE_AS_STATIC_FUNCTION(resumeTargets) 
	#endif

	#ifndef GEODE_STATICS_scheduleScriptFunc
		#define GEODE_STATICS_scheduleScriptFunc
		GEODE_AS_STATIC_FUNCTION(scheduleScriptFunc) 
	#endif

	#ifndef GEODE_STATICS_scheduleSelector
		#define GEODE_STATICS_scheduleSelector
		GEODE_AS_STATIC_FUNCTION(scheduleSelector) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateForTarget
		#define GEODE_STATICS_scheduleUpdateForTarget
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateForTarget) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAll
		#define GEODE_STATICS_unscheduleAll
		GEODE_AS_STATIC_FUNCTION(unscheduleAll) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllForTarget
		#define GEODE_STATICS_unscheduleAllForTarget
		GEODE_AS_STATIC_FUNCTION(unscheduleAllForTarget) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllWithMinPriority
		#define GEODE_STATICS_unscheduleAllWithMinPriority
		GEODE_AS_STATIC_FUNCTION(unscheduleAllWithMinPriority) 
	#endif

	#ifndef GEODE_STATICS_unscheduleScriptEntry
		#define GEODE_STATICS_unscheduleScriptEntry
		GEODE_AS_STATIC_FUNCTION(unscheduleScriptEntry) 
	#endif

	#ifndef GEODE_STATICS_unscheduleSelector
		#define GEODE_STATICS_unscheduleSelector
		GEODE_AS_STATIC_FUNCTION(unscheduleSelector) 
	#endif

	#ifndef GEODE_STATICS_unscheduleUpdateForTarget
		#define GEODE_STATICS_unscheduleUpdateForTarget
		GEODE_AS_STATIC_FUNCTION(unscheduleUpdateForTarget) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCScheduler> : ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>>::ModifyBase;
		using Base = cocos2d::CCScheduler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x421430, Default, cocos2d::CCScheduler, pauseTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41fe50, Default, cocos2d::CCScheduler, scheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41fe30, Default, cocos2d::CCScheduler, scheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420a30, Default, cocos2d::CCScheduler, scheduleUpdateForTarget, cocos2d::CCObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420ff0, Default, cocos2d::CCScheduler, unscheduleAllForTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41f960, Default, cocos2d::CCScheduler, unscheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x421a70, Default, cocos2d::CCScheduler, update, float)
		}
	};
}
