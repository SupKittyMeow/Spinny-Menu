#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJObjectDecoder.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDecoder
		#define GEODE_STATICS_sharedDecoder
		GEODE_AS_STATIC_FUNCTION(sharedDecoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getDecodedObject
		#define GEODE_STATICS_getDecodedObject
		GEODE_AS_STATIC_FUNCTION(getDecodedObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJObjectDecoder> : ModifyBase<ModifyDerive<Der, GJObjectDecoder>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJObjectDecoder>>;
		using ModifyBase<ModifyDerive<Der, GJObjectDecoder>>::ModifyBase;
		using Base = GJObjectDecoder;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e7c70, Default, GJObjectDecoder, sharedDecoder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e7cf0, Default, GJObjectDecoder, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e7d00, Default, GJObjectDecoder, getDecodedObject, int, DS_Dictionary*)
		}
	};
}
