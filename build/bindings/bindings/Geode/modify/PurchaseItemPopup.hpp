#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PurchaseItemPopup.hpp>
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

	#ifndef GEODE_STATICS_onPurchase
		#define GEODE_STATICS_onPurchase
		GEODE_AS_STATIC_FUNCTION(onPurchase) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PurchaseItemPopup> : ModifyBase<ModifyDerive<Der, PurchaseItemPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PurchaseItemPopup>>;
		using ModifyBase<ModifyDerive<Der, PurchaseItemPopup>>::ModifyBase;
		using Base = PurchaseItemPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305650, Default, PurchaseItemPopup, keyBackClicked, )
		}
	};
}
