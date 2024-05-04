#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSmartTemplateLayer.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSmartTemplateLayer> : ModifyBase<ModifyDerive<Der, SetupSmartTemplateLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSmartTemplateLayer>>;
		using ModifyBase<ModifyDerive<Der, SetupSmartTemplateLayer>>::ModifyBase;
		using Base = SetupSmartTemplateLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c3540, Default, SetupSmartTemplateLayer, create, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c36a0, Default, SetupSmartTemplateLayer, init, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c3f90, Default, SetupSmartTemplateLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c45f0, Default, SetupSmartTemplateLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c4300, Default, SetupSmartTemplateLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c4510, Default, SetupSmartTemplateLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c43e0, Default, SetupSmartTemplateLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c45d0, Default, SetupSmartTemplateLayer, textChanged, CCTextInputNode*)
		}
	};
}
