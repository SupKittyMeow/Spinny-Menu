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
	struct ModifyDerive<Der, cocos2d::CCLayerRGBA> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>>::ModifyBase;
		using Base = cocos2d::CCLayerRGBA;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x48d120, Default, cocos2d::CCLayerRGBA, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x48d490, Default, cocos2d::CCLayerRGBA)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d700, Default, cocos2d::CCLayerRGBA, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d940, Default, cocos2d::CCLayerRGBA, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d900, Default, cocos2d::CCLayerRGBA, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d920, Default, cocos2d::CCLayerRGBA, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d7a0, Default, cocos2d::CCLayerRGBA, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d780, Default, cocos2d::CCLayerRGBA, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d7c0, Default, cocos2d::CCLayerRGBA, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48dea0, Default, cocos2d::CCLayerRGBA, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48dec0, Default, cocos2d::CCLayerRGBA, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48dc40, Default, cocos2d::CCLayerRGBA, updateDisplayedColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48de60, Default, cocos2d::CCLayerRGBA, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48de80, Default, cocos2d::CCLayerRGBA, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48dab0, Default, cocos2d::CCLayerRGBA, updateDisplayedOpacity, unsigned char)
		}
	};
}
