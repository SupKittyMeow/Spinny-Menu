#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithData
		#define GEODE_STATICS_createWithData
		GEODE_AS_STATIC_FUNCTION(createWithData) 
	#endif

	#ifndef GEODE_STATICS_getCString
		#define GEODE_STATICS_getCString
		GEODE_AS_STATIC_FUNCTION(getCString) 
	#endif

	#ifndef GEODE_STATICS_boolValue
		#define GEODE_STATICS_boolValue
		GEODE_AS_STATIC_FUNCTION(boolValue) 
	#endif

	#ifndef GEODE_STATICS_compare
		#define GEODE_STATICS_compare
		GEODE_AS_STATIC_FUNCTION(compare) 
	#endif

	#ifndef GEODE_STATICS_doubleValue
		#define GEODE_STATICS_doubleValue
		GEODE_AS_STATIC_FUNCTION(doubleValue) 
	#endif

	#ifndef GEODE_STATICS_floatValue
		#define GEODE_STATICS_floatValue
		GEODE_AS_STATIC_FUNCTION(floatValue) 
	#endif

	#ifndef GEODE_STATICS_intValue
		#define GEODE_STATICS_intValue
		GEODE_AS_STATIC_FUNCTION(intValue) 
	#endif

	#ifndef GEODE_STATICS_length
		#define GEODE_STATICS_length
		GEODE_AS_STATIC_FUNCTION(length) 
	#endif

	#ifndef GEODE_STATICS_uintValue
		#define GEODE_STATICS_uintValue
		GEODE_AS_STATIC_FUNCTION(uintValue) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_isEqual
		#define GEODE_STATICS_isEqual
		GEODE_AS_STATIC_FUNCTION(isEqual) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCString> : ModifyBase<ModifyDerive<Der, cocos2d::CCString>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCString>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCString>>::ModifyBase;
		using Base = cocos2d::CCString;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76cee0, Default, cocos2d::CCString, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76cc10, Default, cocos2d::CCString, createWithData, unsigned char const*, unsigned long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76c510, Default, cocos2d::CCString, getCString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76c980, Default, cocos2d::CCString, boolValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76c950, Default, cocos2d::CCString, doubleValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76c910, Default, cocos2d::CCString, floatValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76c890, Default, cocos2d::CCString, intValue, )
		}
	};
}
