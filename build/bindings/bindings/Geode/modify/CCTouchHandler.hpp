#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_handlerWithDelegate
		#define GEODE_STATICS_handlerWithDelegate
		GEODE_AS_STATIC_FUNCTION(handlerWithDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getEnabledSelectors
		#define GEODE_STATICS_getEnabledSelectors
		GEODE_AS_STATIC_FUNCTION(getEnabledSelectors) 
	#endif

	#ifndef GEODE_STATICS_getPriority
		#define GEODE_STATICS_getPriority
		GEODE_AS_STATIC_FUNCTION(getPriority) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setEnalbedSelectors
		#define GEODE_STATICS_setEnalbedSelectors
		GEODE_AS_STATIC_FUNCTION(setEnalbedSelectors) 
	#endif

	#ifndef GEODE_STATICS_setPriority
		#define GEODE_STATICS_setPriority
		GEODE_AS_STATIC_FUNCTION(setPriority) 
	#endif

	#ifndef GEODE_STATICS_initWithDelegate
		#define GEODE_STATICS_initWithDelegate
		GEODE_AS_STATIC_FUNCTION(initWithDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>>::ModifyBase;
		using Base = cocos2d::CCTouchHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45d860, Default, cocos2d::CCTouchHandler, getDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45d8e0, Default, cocos2d::CCTouchHandler, getPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45d8f0, Default, cocos2d::CCTouchHandler, setPriority, int)
		}
	};
}
