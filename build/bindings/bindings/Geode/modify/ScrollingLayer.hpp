#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ScrollingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getViewRect
		#define GEODE_STATICS_getViewRect
		GEODE_AS_STATIC_FUNCTION(getViewRect) 
	#endif

	#ifndef GEODE_STATICS_setStartOffset
		#define GEODE_STATICS_setStartOffset
		GEODE_AS_STATIC_FUNCTION(setStartOffset) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ScrollingLayer> : ModifyBase<ModifyDerive<Der, ScrollingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ScrollingLayer>>;
		using ModifyBase<ModifyDerive<Der, ScrollingLayer>>::ModifyBase;
		using Base = ScrollingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4030, Default, ScrollingLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4120, Default, ScrollingLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4270, Default, ScrollingLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4410, Default, ScrollingLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4530, Default, ScrollingLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e4570, Default, ScrollingLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
