#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SimplePlayer.hpp>
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

	#ifndef GEODE_STATICS_setColors
		#define GEODE_STATICS_setColors
		GEODE_AS_STATIC_FUNCTION(setColors) 
	#endif

	#ifndef GEODE_STATICS_setFrames
		#define GEODE_STATICS_setFrames
		GEODE_AS_STATIC_FUNCTION(setFrames) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_asyncLoadIcon
		#define GEODE_STATICS_asyncLoadIcon
		GEODE_AS_STATIC_FUNCTION(asyncLoadIcon) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif

	#ifndef GEODE_STATICS_createRobotSprite
		#define GEODE_STATICS_createRobotSprite
		GEODE_AS_STATIC_FUNCTION(createRobotSprite) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_createSpiderSprite
		#define GEODE_STATICS_createSpiderSprite
		GEODE_AS_STATIC_FUNCTION(createSpiderSprite) 
	#endif

	#ifndef GEODE_STATICS_iconFinishedLoading
		#define GEODE_STATICS_iconFinishedLoading
		GEODE_AS_STATIC_FUNCTION(iconFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SimplePlayer> : ModifyBase<ModifyDerive<Der, SimplePlayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SimplePlayer>>;
		using ModifyBase<ModifyDerive<Der, SimplePlayer>>::ModifyBase;
		using Base = SimplePlayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x349730, Default, SimplePlayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34e0e0, Default, SimplePlayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cf50, Default, SimplePlayer, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x349a00, Default, SimplePlayer, updatePlayerFrame, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x349850, Default, SimplePlayer, createSpiderSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34ece0, Default, SimplePlayer, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34e980, Default, SimplePlayer, setColor, cocos2d::_ccColor3B const&)
		}
	};
}
