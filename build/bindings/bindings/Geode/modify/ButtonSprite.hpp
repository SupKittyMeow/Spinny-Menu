#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ButtonSprite.hpp>
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

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBGImage
		#define GEODE_STATICS_updateBGImage
		GEODE_AS_STATIC_FUNCTION(updateBGImage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteBGSize
		#define GEODE_STATICS_updateSpriteBGSize
		GEODE_AS_STATIC_FUNCTION(updateSpriteBGSize) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteOffset
		#define GEODE_STATICS_updateSpriteOffset
		GEODE_AS_STATIC_FUNCTION(updateSpriteOffset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ButtonSprite> : ModifyBase<ModifyDerive<Der, ButtonSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ButtonSprite>>;
		using ModifyBase<ModifyDerive<Der, ButtonSprite>>::ModifyBase;
		using Base = ButtonSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8c590, Default, ButtonSprite, create, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8c5c0, Default, ButtonSprite, create, char const*, int, int, float, bool, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8bd40, Default, ButtonSprite, create, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8cf20, Default, ButtonSprite, setColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8c9e0, Default, ButtonSprite, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8cdd0, Default, ButtonSprite, updateBGImage, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8cef0, Default, ButtonSprite, updateSpriteOffset, cocos2d::CCPoint)
		}
	};
}
