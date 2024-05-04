#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoObject.hpp>
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

	#ifndef GEODE_STATICS_getTagsString
		#define GEODE_STATICS_getTagsString
		GEODE_AS_STATIC_FUNCTION(getTagsString) 
	#endif

	#ifndef GEODE_STATICS_containsTag
		#define GEODE_STATICS_containsTag
		GEODE_AS_STATIC_FUNCTION(containsTag) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_addTags
		#define GEODE_STATICS_addTags
		GEODE_AS_STATIC_FUNCTION(addTags) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoObject> : ModifyBase<ModifyDerive<Der, SongInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SongInfoObject>>::ModifyBase;
		using Base = SongInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55fb90, Default, SongInfoObject, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55d1d0, Default, SongInfoObject, create, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x557250, Default, SongInfoObject, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55fe20, Default, SongInfoObject, init, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560020, Default, SongInfoObject, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560500, Default, SongInfoObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560650, Default, SongInfoObject, canEncode, )
		}
	};
}
