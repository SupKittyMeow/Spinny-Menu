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

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_anyObject
		#define GEODE_STATICS_anyObject
		GEODE_AS_STATIC_FUNCTION(anyObject) 
	#endif

	#ifndef GEODE_STATICS_begin
		#define GEODE_STATICS_begin
		GEODE_AS_STATIC_FUNCTION(begin) 
	#endif

	#ifndef GEODE_STATICS_containsObject
		#define GEODE_STATICS_containsObject
		GEODE_AS_STATIC_FUNCTION(containsObject) 
	#endif

	#ifndef GEODE_STATICS_copy
		#define GEODE_STATICS_copy
		GEODE_AS_STATIC_FUNCTION(copy) 
	#endif

	#ifndef GEODE_STATICS_count
		#define GEODE_STATICS_count
		GEODE_AS_STATIC_FUNCTION(count) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_mutableCopy
		#define GEODE_STATICS_mutableCopy
		GEODE_AS_STATIC_FUNCTION(mutableCopy) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSet> : ModifyBase<ModifyDerive<Der, cocos2d::CCSet>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSet>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSet>>::ModifyBase;
		using Base = cocos2d::CCSet;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775080, Default, cocos2d::CCSet, addObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775250, Default, cocos2d::CCSet, anyObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775070, Default, cocos2d::CCSet, count, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775030, Default, cocos2d::CCSet, mutableCopy, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775130, Default, cocos2d::CCSet, removeObject, cocos2d::CCObject*)
		}
	};
}
