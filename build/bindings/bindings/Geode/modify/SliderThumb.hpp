#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderThumb.hpp>
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

	#ifndef GEODE_STATICS_setRotated
		#define GEODE_STATICS_setRotated
		GEODE_AS_STATIC_FUNCTION(setRotated) 
	#endif

	#ifndef GEODE_STATICS_setMaxOffset
		#define GEODE_STATICS_setMaxOffset
		GEODE_AS_STATIC_FUNCTION(setMaxOffset) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderThumb> : ModifyBase<ModifyDerive<Der, SliderThumb>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderThumb>>;
		using ModifyBase<ModifyDerive<Der, SliderThumb>>::ModifyBase;
		using Base = SliderThumb;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e0390, Default, SliderThumb, setValue, float)
		}
	};
}
