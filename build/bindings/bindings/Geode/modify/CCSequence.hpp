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

	#ifndef GEODE_STATICS_createWithTwoActions
		#define GEODE_STATICS_createWithTwoActions
		GEODE_AS_STATIC_FUNCTION(createWithTwoActions) 
	#endif

	#ifndef GEODE_STATICS_createWithVariableList
		#define GEODE_STATICS_createWithVariableList
		GEODE_AS_STATIC_FUNCTION(createWithVariableList) 
	#endif

	#ifndef GEODE_STATICS_initWithTwoActions
		#define GEODE_STATICS_initWithTwoActions
		GEODE_AS_STATIC_FUNCTION(initWithTwoActions) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSequence> : ModifyBase<ModifyDerive<Der, cocos2d::CCSequence>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSequence>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSequence>>::ModifyBase;
		using Base = cocos2d::CCSequence;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x393ab0, Default, cocos2d::CCSequence, create, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3937f0, Default, cocos2d::CCSequence, createWithVariableList, cocos2d::CCFiniteTimeAction*, va_list)
		}
	};
}
