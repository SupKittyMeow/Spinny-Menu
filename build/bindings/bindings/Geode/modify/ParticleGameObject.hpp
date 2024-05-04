#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParticleGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setParticleString
		#define GEODE_STATICS_setParticleString
		GEODE_AS_STATIC_FUNCTION(setParticleString) 
	#endif

	#ifndef GEODE_STATICS_updateParticle
		#define GEODE_STATICS_updateParticle
		GEODE_AS_STATIC_FUNCTION(updateParticle) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_updateParticleAngle
		#define GEODE_STATICS_updateParticleAngle
		GEODE_AS_STATIC_FUNCTION(updateParticleAngle) 
	#endif

	#ifndef GEODE_STATICS_updateParticleScale
		#define GEODE_STATICS_updateParticleScale
		GEODE_AS_STATIC_FUNCTION(updateParticleScale) 
	#endif

	#ifndef GEODE_STATICS_updateParticleStruct
		#define GEODE_STATICS_updateParticleStruct
		GEODE_AS_STATIC_FUNCTION(updateParticleStruct) 
	#endif

	#ifndef GEODE_STATICS_applyParticleSettings
		#define GEODE_STATICS_applyParticleSettings
		GEODE_AS_STATIC_FUNCTION(applyParticleSettings) 
	#endif

	#ifndef GEODE_STATICS_createParticlePreviewArt
		#define GEODE_STATICS_createParticlePreviewArt
		GEODE_AS_STATIC_FUNCTION(createParticlePreviewArt) 
	#endif

	#ifndef GEODE_STATICS_createAndAddCustomParticle
		#define GEODE_STATICS_createAndAddCustomParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_updateParticlePreviewArtOpacity
		#define GEODE_STATICS_updateParticlePreviewArtOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticlePreviewArtOpacity) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_particleWasActivated
		#define GEODE_STATICS_particleWasActivated
		GEODE_AS_STATIC_FUNCTION(particleWasActivated) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_blendModeChanged
		#define GEODE_STATICS_blendModeChanged
		GEODE_AS_STATIC_FUNCTION(blendModeChanged) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_updateParticleOpacity
		#define GEODE_STATICS_updateParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateMainParticleOpacity
		#define GEODE_STATICS_updateMainParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryParticleOpacity
		#define GEODE_STATICS_updateSecondaryParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTrigger
		#define GEODE_STATICS_updateAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTrigger) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParticleGameObject> : ModifyBase<ModifyDerive<Der, ParticleGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParticleGameObject>>;
		using ModifyBase<ModifyDerive<Der, ParticleGameObject>>::ModifyBase;
		using Base = ParticleGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b470, Default, ParticleGameObject, updateParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a850, Default, ParticleGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b0d0, Default, ParticleGameObject, updateParticleAngle, float, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ac10, Default, ParticleGameObject, updateParticleStruct, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a820, Default, ParticleGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b8a0, Default, ParticleGameObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b910, Default, ParticleGameObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b980, Default, ParticleGameObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b7e0, Default, ParticleGameObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b820, Default, ParticleGameObject, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b860, Default, ParticleGameObject, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bae0, Default, ParticleGameObject, setChildColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19aa90, Default, ParticleGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ab60, Default, ParticleGameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bcd0, Default, ParticleGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bc90, Default, ParticleGameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bed0, Default, ParticleGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ac40, Default, ParticleGameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b1f0, Default, ParticleGameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b270, Default, ParticleGameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19b9f0, Default, ParticleGameObject, setObjectColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ab20, Default, ParticleGameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2bf0, Default, ParticleGameObject, updateParticleColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2c00, Default, ParticleGameObject, updateParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bbd0, Default, ParticleGameObject, updateMainParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bc30, Default, ParticleGameObject, updateSecondaryParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bd30, Default, ParticleGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19be80, Default, ParticleGameObject, updateAnimateOnTrigger, bool)
		}
	};
}
