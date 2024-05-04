#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingCircle> : ModifyBase<ModifyDerive<Der, LoadingCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircle>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircle>>::ModifyBase;
		using Base = LoadingCircle;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49a640, Default, LoadingCircle, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49a970, Default, LoadingCircle, fadeAndRemove, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49a880, Default, LoadingCircle, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49a7b0, Default, LoadingCircle, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49aa00, Default, LoadingCircle, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49ac80, Default, LoadingCircle, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49ac90, Default, LoadingCircle, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49aca0, Default, LoadingCircle, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49acb0, Default, LoadingCircle, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49aa20, Default, LoadingCircle, registerWithTouchDispatcher, )
		}
	};
}
