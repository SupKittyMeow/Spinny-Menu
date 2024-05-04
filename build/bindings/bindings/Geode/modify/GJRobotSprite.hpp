#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRobotSprite.hpp>
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

	#ifndef GEODE_STATICS_updateFrame
		#define GEODE_STATICS_updateFrame
		GEODE_AS_STATIC_FUNCTION(updateFrame) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateColor01
		#define GEODE_STATICS_updateColor01
		GEODE_AS_STATIC_FUNCTION(updateColor01) 
	#endif

	#ifndef GEODE_STATICS_updateColor02
		#define GEODE_STATICS_updateColor02
		GEODE_AS_STATIC_FUNCTION(updateColor02) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_hideGlow
		#define GEODE_STATICS_hideGlow
		GEODE_AS_STATIC_FUNCTION(hideGlow) 
	#endif

	#ifndef GEODE_STATICS_showGlow
		#define GEODE_STATICS_showGlow
		GEODE_AS_STATIC_FUNCTION(showGlow) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRobotSprite> : ModifyBase<ModifyDerive<Der, GJRobotSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRobotSprite>>;
		using ModifyBase<ModifyDerive<Der, GJRobotSprite>>::ModifyBase;
		using Base = GJRobotSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a0cc0, Default, GJRobotSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a0e70, Default, GJRobotSprite, init, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a13a0, Default, GJRobotSprite, updateFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1bd0, Default, GJRobotSprite, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1bb0, Default, GJRobotSprite, updateColor01, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1ef0, Default, GJRobotSprite, updateColor02, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1f10, Default, GJRobotSprite, updateGlowColor, cocos2d::_ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1b90, Default, GJRobotSprite, hideGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1b70, Default, GJRobotSprite, showGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a1f90, Default, GJRobotSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a20a0, Default, GJRobotSprite, hideSecondary, )
		}
	};
}
