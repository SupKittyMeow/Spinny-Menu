#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSearchObject.hpp>
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

	#ifndef GEODE_STATICS_getSearchKey
		#define GEODE_STATICS_getSearchKey
		GEODE_AS_STATIC_FUNCTION(getSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getPageObject
		#define GEODE_STATICS_getPageObject
		GEODE_AS_STATIC_FUNCTION(getPageObject) 
	#endif

	#ifndef GEODE_STATICS_getNextPageKey
		#define GEODE_STATICS_getNextPageKey
		GEODE_AS_STATIC_FUNCTION(getNextPageKey) 
	#endif

	#ifndef GEODE_STATICS_getNextPageObject
		#define GEODE_STATICS_getNextPageObject
		GEODE_AS_STATIC_FUNCTION(getNextPageObject) 
	#endif

	#ifndef GEODE_STATICS_getPrevPageObject
		#define GEODE_STATICS_getPrevPageObject
		GEODE_AS_STATIC_FUNCTION(getPrevPageObject) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_createFromKey
		#define GEODE_STATICS_createFromKey
		GEODE_AS_STATIC_FUNCTION(createFromKey) 
	#endif

	#ifndef GEODE_STATICS_isLevelSearchObject
		#define GEODE_STATICS_isLevelSearchObject
		GEODE_AS_STATIC_FUNCTION(isLevelSearchObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSearchObject> : ModifyBase<ModifyDerive<Der, GJSearchObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSearchObject>>;
		using ModifyBase<ModifyDerive<Der, GJSearchObject>>::ModifyBase;
		using Base = GJSearchObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52d700, Default, GJSearchObject, create, SearchType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52d830, Default, GJSearchObject, create, SearchType, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52d460, Default, GJSearchObject, create, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52df30, Default, GJSearchObject, getPageObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52df10, Default, GJSearchObject, getNextPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52e160, Default, GJSearchObject, getPrevPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5114d0, Default, GJSearchObject, getKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50aa20, Default, GJSearchObject, createFromKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52e180, Default, GJSearchObject, isLevelSearchObject, )
		}
	};
}
