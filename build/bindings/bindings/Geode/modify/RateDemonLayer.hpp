#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RateDemonLayer.hpp>
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

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RateDemonLayer> : ModifyBase<ModifyDerive<Der, RateDemonLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RateDemonLayer>>;
		using ModifyBase<ModifyDerive<Der, RateDemonLayer>>::ModifyBase;
		using Base = RateDemonLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261c80, Default, RateDemonLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261df0, Default, RateDemonLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2629a0, Default, RateDemonLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262660, Default, RateDemonLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262750, Default, RateDemonLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2628c0, Default, RateDemonLayer, onClosePopup, UploadActionPopup*)
		}
	};
}
