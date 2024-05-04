#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ItemInfoPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCredit
		#define GEODE_STATICS_onCredit
		GEODE_AS_STATIC_FUNCTION(onCredit) 
	#endif

	#ifndef GEODE_STATICS_nameForUnlockType
		#define GEODE_STATICS_nameForUnlockType
		GEODE_AS_STATIC_FUNCTION(nameForUnlockType) 
	#endif

	#ifndef GEODE_STATICS_isUnlockedByDefault
		#define GEODE_STATICS_isUnlockedByDefault
		GEODE_AS_STATIC_FUNCTION(isUnlockedByDefault) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ItemInfoPopup> : ModifyBase<ModifyDerive<Der, ItemInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ItemInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, ItemInfoPopup>>::ModifyBase;
		using Base = ItemInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d550, Default, ItemInfoPopup, create, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34f980, Default, ItemInfoPopup, init, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x350f10, Default, ItemInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x350c60, Default, ItemInfoPopup, nameForUnlockType, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x350fa0, Default, ItemInfoPopup, keyBackClicked, )
		}
	};
}
