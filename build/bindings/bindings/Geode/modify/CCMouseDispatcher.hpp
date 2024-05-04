#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addDelegate
		#define GEODE_STATICS_addDelegate
		GEODE_AS_STATIC_FUNCTION(addDelegate) 
	#endif

	#ifndef GEODE_STATICS_dispatchScrollMSG
		#define GEODE_STATICS_dispatchScrollMSG
		GEODE_AS_STATIC_FUNCTION(dispatchScrollMSG) 
	#endif

	#ifndef GEODE_STATICS_forceAddDelegate
		#define GEODE_STATICS_forceAddDelegate
		GEODE_AS_STATIC_FUNCTION(forceAddDelegate) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMouseDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>>::ModifyBase;
		using Base = cocos2d::CCMouseDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53c670, Default, cocos2d::CCMouseDispatcher, dispatchScrollMSG, float, float)
		}
	};
}
