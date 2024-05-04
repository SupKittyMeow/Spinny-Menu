#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_getObjType
		#define GEODE_STATICS_getObjType
		GEODE_AS_STATIC_FUNCTION(getObjType) 
	#endif

	#ifndef GEODE_STATICS_setObjType
		#define GEODE_STATICS_setObjType
		GEODE_AS_STATIC_FUNCTION(setObjType) 
	#endif

	#ifndef GEODE_STATICS_autorelease
		#define GEODE_STATICS_autorelease
		GEODE_AS_STATIC_FUNCTION(autorelease) 
	#endif

	#ifndef GEODE_STATICS_copy
		#define GEODE_STATICS_copy
		GEODE_AS_STATIC_FUNCTION(copy) 
	#endif

	#ifndef GEODE_STATICS_isSingleReference
		#define GEODE_STATICS_isSingleReference
		GEODE_AS_STATIC_FUNCTION(isSingleReference) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_retain
		#define GEODE_STATICS_retain
		GEODE_AS_STATIC_FUNCTION(retain) 
	#endif

	#ifndef GEODE_STATICS_retainCount
		#define GEODE_STATICS_retainCount
		GEODE_AS_STATIC_FUNCTION(retainCount) 
	#endif

	#ifndef GEODE_STATICS_getTag
		#define GEODE_STATICS_getTag
		GEODE_AS_STATIC_FUNCTION(getTag) 
	#endif

	#ifndef GEODE_STATICS_isEqual
		#define GEODE_STATICS_isEqual
		GEODE_AS_STATIC_FUNCTION(isEqual) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_setTag
		#define GEODE_STATICS_setTag
		GEODE_AS_STATIC_FUNCTION(setTag) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCObject> : ModifyBase<ModifyDerive<Der, cocos2d::CCObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCObject>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCObject>>::ModifyBase;
		using Base = cocos2d::CCObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467310, Default, cocos2d::CCObject, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x467020, Default, cocos2d::CCObject, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x467130, Default, cocos2d::CCObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467260, Default, cocos2d::CCObject, autorelease, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467290, Default, cocos2d::CCObject, isSingleReference, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467230, Default, cocos2d::CCObject, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467250, Default, cocos2d::CCObject, retain, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4672e0, Default, cocos2d::CCObject, getTag, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4672b0, Default, cocos2d::CCObject, isEqual, cocos2d::CCObject const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4672c0, Default, cocos2d::CCObject, acceptVisitor, cocos2d::CCDataVisitor&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467300, Default, cocos2d::CCObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467320, Default, cocos2d::CCObject, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4672f0, Default, cocos2d::CCObject, setTag, int)
		}
	};
}
