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

	#ifndef GEODE_STATICS_createWithTotalParticles
		#define GEODE_STATICS_createWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(createWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initIndices
		#define GEODE_STATICS_initIndices
		GEODE_AS_STATIC_FUNCTION(initIndices) 
	#endif

	#ifndef GEODE_STATICS_initTexCoordsWithRect
		#define GEODE_STATICS_initTexCoordsWithRect
		GEODE_AS_STATIC_FUNCTION(initTexCoordsWithRect) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setTextureWithRect
		#define GEODE_STATICS_setTextureWithRect
		GEODE_AS_STATIC_FUNCTION(setTextureWithRect) 
	#endif

	#ifndef GEODE_STATICS_allocMemory
		#define GEODE_STATICS_allocMemory
		GEODE_AS_STATIC_FUNCTION(allocMemory) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_setupVBO
		#define GEODE_STATICS_setupVBO
		GEODE_AS_STATIC_FUNCTION(setupVBO) 
	#endif

	#ifndef GEODE_STATICS_updateTexCoords
		#define GEODE_STATICS_updateTexCoords
		GEODE_AS_STATIC_FUNCTION(updateTexCoords) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setTotalParticles
		#define GEODE_STATICS_setTotalParticles
		GEODE_AS_STATIC_FUNCTION(setTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initWithTotalParticles
		#define GEODE_STATICS_initWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(initWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_updateQuadWithParticle
		#define GEODE_STATICS_updateQuadWithParticle
		GEODE_AS_STATIC_FUNCTION(updateQuadWithParticle) 
	#endif

	#ifndef GEODE_STATICS_postStep
		#define GEODE_STATICS_postStep
		GEODE_AS_STATIC_FUNCTION(postStep) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleSystemQuad> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>::ModifyBase;
		using Base = cocos2d::CCParticleSystemQuad;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c7320, Default, cocos2d::CCParticleSystemQuad, create, )
		}
	};
}
