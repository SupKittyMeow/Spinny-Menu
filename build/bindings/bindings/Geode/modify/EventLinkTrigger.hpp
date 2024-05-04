#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EventLinkTrigger.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EventLinkTrigger> : ModifyBase<ModifyDerive<Der, EventLinkTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EventLinkTrigger>>;
		using ModifyBase<ModifyDerive<Der, EventLinkTrigger>>::ModifyBase;
		using Base = EventLinkTrigger;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5220, Default, EventLinkTrigger, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b5f20, Default, EventLinkTrigger, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b51d0, Default, EventLinkTrigger, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b53d0, Default, EventLinkTrigger, getSaveString, GJBaseGameLayer*)
		}
	};
}
