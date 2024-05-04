#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PromoInterstitial.hpp>
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

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PromoInterstitial> : ModifyBase<ModifyDerive<Der, PromoInterstitial>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PromoInterstitial>>;
		using ModifyBase<ModifyDerive<Der, PromoInterstitial>>::ModifyBase;
		using Base = PromoInterstitial;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2aeef0, Default, PromoInterstitial, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2af110, Default, PromoInterstitial, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2aeff0, Default, PromoInterstitial, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2af090, Default, PromoInterstitial, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2aed50, Default, PromoInterstitial, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2aed20, Default, PromoInterstitial, show, )
		}
	};
}
