#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_swapBuffers
		#define GEODE_STATICS_swapBuffers
		GEODE_AS_STATIC_FUNCTION(swapBuffers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLView> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>::ModifyBase;
		using Base = cocos2d::CCEGLView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4de300, Default, cocos2d::CCEGLView, swapBuffers, )
		}
	};
}
