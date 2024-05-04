#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LabelGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createLabel
		#define GEODE_STATICS_createLabel
		GEODE_AS_STATIC_FUNCTION(createLabel) 
	#endif

	#ifndef GEODE_STATICS_removeLabel
		#define GEODE_STATICS_removeLabel
		GEODE_AS_STATIC_FUNCTION(removeLabel) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_queueUpdateLabel
		#define GEODE_STATICS_queueUpdateLabel
		GEODE_AS_STATIC_FUNCTION(queueUpdateLabel) 
	#endif

	#ifndef GEODE_STATICS_unlockLabelColor
		#define GEODE_STATICS_unlockLabelColor
		GEODE_AS_STATIC_FUNCTION(unlockLabelColor) 
	#endif

	#ifndef GEODE_STATICS_updateLabelAlign
		#define GEODE_STATICS_updateLabelAlign
		GEODE_AS_STATIC_FUNCTION(updateLabelAlign) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_updateLabelIfDirty
		#define GEODE_STATICS_updateLabelIfDirty
		GEODE_AS_STATIC_FUNCTION(updateLabelIfDirty) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewLabel
		#define GEODE_STATICS_updatePreviewLabel
		GEODE_AS_STATIC_FUNCTION(updatePreviewLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_updateTextKerning
		#define GEODE_STATICS_updateTextKerning
		GEODE_AS_STATIC_FUNCTION(updateTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getTextKerning
		#define GEODE_STATICS_getTextKerning
		GEODE_AS_STATIC_FUNCTION(getTextKerning) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LabelGameObject> : ModifyBase<ModifyDerive<Der, LabelGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LabelGameObject>>;
		using ModifyBase<ModifyDerive<Der, LabelGameObject>>::ModifyBase;
		using Base = LabelGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8d10, Default, LabelGameObject, updateLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8eb0, Default, LabelGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8490, Default, LabelGameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8460, Default, LabelGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a8840, Default, LabelGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9120, Default, LabelGameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9d40, Default, LabelGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9180, Default, LabelGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a90d0, Default, LabelGameObject, setObjectColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a88c0, Default, LabelGameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2e30, Default, LabelGameObject, getTextKerning, )
		}
	};
}
