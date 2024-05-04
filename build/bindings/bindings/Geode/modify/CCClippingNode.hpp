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

	#ifndef GEODE_STATICS_getAlphaThreshold
		#define GEODE_STATICS_getAlphaThreshold
		GEODE_AS_STATIC_FUNCTION(getAlphaThreshold) 
	#endif

	#ifndef GEODE_STATICS_getStencil
		#define GEODE_STATICS_getStencil
		GEODE_AS_STATIC_FUNCTION(getStencil) 
	#endif

	#ifndef GEODE_STATICS_setAlphaThreshold
		#define GEODE_STATICS_setAlphaThreshold
		GEODE_AS_STATIC_FUNCTION(setAlphaThreshold) 
	#endif

	#ifndef GEODE_STATICS_setInverted
		#define GEODE_STATICS_setInverted
		GEODE_AS_STATIC_FUNCTION(setInverted) 
	#endif

	#ifndef GEODE_STATICS_setStencil
		#define GEODE_STATICS_setStencil
		GEODE_AS_STATIC_FUNCTION(setStencil) 
	#endif

	#ifndef GEODE_STATICS_isInverted
		#define GEODE_STATICS_isInverted
		GEODE_AS_STATIC_FUNCTION(isInverted) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_onExitTransitionDidStart
		#define GEODE_STATICS_onExitTransitionDidStart
		GEODE_AS_STATIC_FUNCTION(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCClippingNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>>::ModifyBase;
		using Base = cocos2d::CCClippingNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e27c0, Default, cocos2d::CCClippingNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2ed0, Default, cocos2d::CCClippingNode, setAlphaThreshold, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2ef0, Default, cocos2d::CCClippingNode, setInverted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2e80, Default, cocos2d::CCClippingNode, setStencil, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2990, Default, cocos2d::CCClippingNode, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e29c0, Default, cocos2d::CCClippingNode, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2a20, Default, cocos2d::CCClippingNode, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e29f0, Default, cocos2d::CCClippingNode, onExitTransitionDidStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e2a50, Default, cocos2d::CCClippingNode, visit, )
		}
	};
}
