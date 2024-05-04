#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OBB2D.hpp>
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

	#ifndef GEODE_STATICS_getBoundingRect
		#define GEODE_STATICS_getBoundingRect
		GEODE_AS_STATIC_FUNCTION(getBoundingRect) 
	#endif

	#ifndef GEODE_STATICS_computeAxes
		#define GEODE_STATICS_computeAxes
		GEODE_AS_STATIC_FUNCTION(computeAxes) 
	#endif

	#ifndef GEODE_STATICS_orderCorners
		#define GEODE_STATICS_orderCorners
		GEODE_AS_STATIC_FUNCTION(orderCorners) 
	#endif

	#ifndef GEODE_STATICS_overlaps1Way
		#define GEODE_STATICS_overlaps1Way
		GEODE_AS_STATIC_FUNCTION(overlaps1Way) 
	#endif

	#ifndef GEODE_STATICS_calculateWithCenter
		#define GEODE_STATICS_calculateWithCenter
		GEODE_AS_STATIC_FUNCTION(calculateWithCenter) 
	#endif

	#ifndef GEODE_STATICS_overlaps
		#define GEODE_STATICS_overlaps
		GEODE_AS_STATIC_FUNCTION(overlaps) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OBB2D> : ModifyBase<ModifyDerive<Der, OBB2D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OBB2D>>;
		using ModifyBase<ModifyDerive<Der, OBB2D>>::ModifyBase;
		using Base = OBB2D;
        using Derived = Der;
		void apply() override {

		}
	};
}
