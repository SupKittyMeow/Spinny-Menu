#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowPopup.hpp>
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

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPremade
		#define GEODE_STATICS_onPremade
		GEODE_AS_STATIC_FUNCTION(onPremade) 
	#endif

	#ifndef GEODE_STATICS_updateMode
		#define GEODE_STATICS_updateMode
		GEODE_AS_STATIC_FUNCTION(updateMode) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_selectPremadeClosed
		#define GEODE_STATICS_selectPremadeClosed
		GEODE_AS_STATIC_FUNCTION(selectPremadeClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>::ModifyBase;
		using Base = SetupAdvFollowPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e6750, Default, SetupAdvFollowPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e6e00, Default, SetupAdvFollowPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e63b0, Default, SetupAdvFollowPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e64f0, Default, SetupAdvFollowPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e6980, Default, SetupAdvFollowPopup, selectPremadeClosed, SelectPremadeLayer*, int)
		}
	};
}
