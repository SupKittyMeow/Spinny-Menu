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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedColor
		#define GEODE_STATICS_getDisplayedColor
		GEODE_AS_STATIC_FUNCTION(getDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedOpacity
		#define GEODE_STATICS_getDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_isCascadeColorEnabled
		#define GEODE_STATICS_isCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeColorEnabled
		#define GEODE_STATICS_setCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_isCascadeOpacityEnabled
		#define GEODE_STATICS_isCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeOpacityEnabled
		#define GEODE_STATICS_setCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCNodeRGBA> : ModifyBase<ModifyDerive<Der, cocos2d::CCNodeRGBA>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCNodeRGBA>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCNodeRGBA>>::ModifyBase;
		using Base = cocos2d::CCNodeRGBA;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x252ff0, Default, cocos2d::CCNodeRGBA, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x2530a0, Default, cocos2d::CCNodeRGBA)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2530d0, Default, cocos2d::CCNodeRGBA, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2534f0, Default, cocos2d::CCNodeRGBA, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2534b0, Default, cocos2d::CCNodeRGBA, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2534d0, Default, cocos2d::CCNodeRGBA, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253180, Default, cocos2d::CCNodeRGBA, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253160, Default, cocos2d::CCNodeRGBA, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2531a0, Default, cocos2d::CCNodeRGBA, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253880, Default, cocos2d::CCNodeRGBA, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2538a0, Default, cocos2d::CCNodeRGBA, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253660, Default, cocos2d::CCNodeRGBA, updateDisplayedColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253470, Default, cocos2d::CCNodeRGBA, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253490, Default, cocos2d::CCNodeRGBA, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2532e0, Default, cocos2d::CCNodeRGBA, updateDisplayedOpacity, unsigned char)
		}
	};
}
