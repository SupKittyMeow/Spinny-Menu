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

	#ifndef GEODE_STATICS_initWithNormalSprite
		#define GEODE_STATICS_initWithNormalSprite
		GEODE_AS_STATIC_FUNCTION(initWithNormalSprite) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_getNormalImage
		#define GEODE_STATICS_getNormalImage
		GEODE_AS_STATIC_FUNCTION(getNormalImage) 
	#endif

	#ifndef GEODE_STATICS_setNormalImage
		#define GEODE_STATICS_setNormalImage
		GEODE_AS_STATIC_FUNCTION(setNormalImage) 
	#endif

	#ifndef GEODE_STATICS_getSelectedImage
		#define GEODE_STATICS_getSelectedImage
		GEODE_AS_STATIC_FUNCTION(getSelectedImage) 
	#endif

	#ifndef GEODE_STATICS_setSelectedImage
		#define GEODE_STATICS_setSelectedImage
		GEODE_AS_STATIC_FUNCTION(setSelectedImage) 
	#endif

	#ifndef GEODE_STATICS_getDisabledImage
		#define GEODE_STATICS_getDisabledImage
		GEODE_AS_STATIC_FUNCTION(getDisabledImage) 
	#endif

	#ifndef GEODE_STATICS_setDisabledImage
		#define GEODE_STATICS_setDisabledImage
		GEODE_AS_STATIC_FUNCTION(setDisabledImage) 
	#endif

	#ifndef GEODE_STATICS_updateImagesVisibility
		#define GEODE_STATICS_updateImagesVisibility
		GEODE_AS_STATIC_FUNCTION(updateImagesVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemSprite> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>>::ModifyBase;
		using Base = cocos2d::CCMenuItemSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e290, Default, cocos2d::CCMenuItemSprite, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e2b0, Default, cocos2d::CCMenuItemSprite, initWithNormalSprite, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e3a0, Default, cocos2d::CCMenuItemSprite, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e4c0, Default, cocos2d::CCMenuItemSprite, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39def0, Default, cocos2d::CCMenuItemSprite, getNormalImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39df00, Default, cocos2d::CCMenuItemSprite, setNormalImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39dfc0, Default, cocos2d::CCMenuItemSprite, getSelectedImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39dfd0, Default, cocos2d::CCMenuItemSprite, setSelectedImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e060, Default, cocos2d::CCMenuItemSprite, getDisabledImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e070, Default, cocos2d::CCMenuItemSprite, setDisabledImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e4e0, Default, cocos2d::CCMenuItemSprite, updateImagesVisibility, )
		}
	};
}
