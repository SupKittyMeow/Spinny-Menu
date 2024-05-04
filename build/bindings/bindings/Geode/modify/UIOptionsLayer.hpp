#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIOptionsLayer.hpp>
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

	#ifndef GEODE_STATICS_getNode
		#define GEODE_STATICS_getNode
		GEODE_AS_STATIC_FUNCTION(getNode) 
	#endif

	#ifndef GEODE_STATICS_onSaveLoad
		#define GEODE_STATICS_onSaveLoad
		GEODE_AS_STATIC_FUNCTION(onSaveLoad) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

	#ifndef GEODE_STATICS_toggleUIGroup
		#define GEODE_STATICS_toggleUIGroup
		GEODE_AS_STATIC_FUNCTION(toggleUIGroup) 
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

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UIOptionsLayer> : ModifyBase<ModifyDerive<Der, UIOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UIOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, UIOptionsLayer>>::ModifyBase;
		using Base = UIOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f890, Default, UIOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290010, Default, UIOptionsLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2901e0, Default, UIOptionsLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290380, Default, UIOptionsLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2904c0, Default, UIOptionsLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290500, Default, UIOptionsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28fa20, Default, UIOptionsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28fd30, Default, UIOptionsLayer, getValue, int)
		}
	};
}
