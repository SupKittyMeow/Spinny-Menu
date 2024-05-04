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

	#ifndef GEODE_STATICS_getShouldPremultiply
		#define GEODE_STATICS_getShouldPremultiply
		GEODE_AS_STATIC_FUNCTION(getShouldPremultiply) 
	#endif

	#ifndef GEODE_STATICS_setShouldPremultiply
		#define GEODE_STATICS_setShouldPremultiply
		GEODE_AS_STATIC_FUNCTION(setShouldPremultiply) 
	#endif

	#ifndef GEODE_STATICS_setValues
		#define GEODE_STATICS_setValues
		GEODE_AS_STATIC_FUNCTION(setValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_initWithColor
		#define GEODE_STATICS_initWithColor
		GEODE_AS_STATIC_FUNCTION(initWithColor) 
	#endif

	#ifndef GEODE_STATICS_getStartColor
		#define GEODE_STATICS_getStartColor
		GEODE_AS_STATIC_FUNCTION(getStartColor) 
	#endif

	#ifndef GEODE_STATICS_setStartColor
		#define GEODE_STATICS_setStartColor
		GEODE_AS_STATIC_FUNCTION(setStartColor) 
	#endif

	#ifndef GEODE_STATICS_getEndColor
		#define GEODE_STATICS_getEndColor
		GEODE_AS_STATIC_FUNCTION(getEndColor) 
	#endif

	#ifndef GEODE_STATICS_setEndColor
		#define GEODE_STATICS_setEndColor
		GEODE_AS_STATIC_FUNCTION(setEndColor) 
	#endif

	#ifndef GEODE_STATICS_getStartOpacity
		#define GEODE_STATICS_getStartOpacity
		GEODE_AS_STATIC_FUNCTION(getStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_setStartOpacity
		#define GEODE_STATICS_setStartOpacity
		GEODE_AS_STATIC_FUNCTION(setStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_getEndOpacity
		#define GEODE_STATICS_getEndOpacity
		GEODE_AS_STATIC_FUNCTION(getEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_setEndOpacity
		#define GEODE_STATICS_setEndOpacity
		GEODE_AS_STATIC_FUNCTION(setEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_getVector
		#define GEODE_STATICS_getVector
		GEODE_AS_STATIC_FUNCTION(getVector) 
	#endif

	#ifndef GEODE_STATICS_setVector
		#define GEODE_STATICS_setVector
		GEODE_AS_STATIC_FUNCTION(setVector) 
	#endif

	#ifndef GEODE_STATICS_setCompressedInterpolation
		#define GEODE_STATICS_setCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(setCompressedInterpolation) 
	#endif

	#ifndef GEODE_STATICS_isCompressedInterpolation
		#define GEODE_STATICS_isCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(isCompressedInterpolation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerGradient> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>::ModifyBase;
		using Base = cocos2d::CCLayerGradient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f140, Default, cocos2d::CCLayerGradient, create, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f3f0, Default, cocos2d::CCLayerGradient, create, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f480, Default, cocos2d::CCLayerGradient, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f4f0, Default, cocos2d::CCLayerGradient, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f630, Default, cocos2d::CCLayerGradient, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f580, Default, cocos2d::CCLayerGradient, initWithColor, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f520, Default, cocos2d::CCLayerGradient, initWithColor, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f820, Default, cocos2d::CCLayerGradient, getStartColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f830, Default, cocos2d::CCLayerGradient, setStartColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f880, Default, cocos2d::CCLayerGradient, getEndColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f850, Default, cocos2d::CCLayerGradient, setEndColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f8b0, Default, cocos2d::CCLayerGradient, getStartOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f890, Default, cocos2d::CCLayerGradient, setStartOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f8e0, Default, cocos2d::CCLayerGradient, getEndOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f8c0, Default, cocos2d::CCLayerGradient, setEndOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f920, Default, cocos2d::CCLayerGradient, getVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f8f0, Default, cocos2d::CCLayerGradient, setVector, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f9c0, Default, cocos2d::CCLayerGradient, setCompressedInterpolation, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48f9b0, Default, cocos2d::CCLayerGradient, isCompressedInterpolation, )
		}
	};
}
