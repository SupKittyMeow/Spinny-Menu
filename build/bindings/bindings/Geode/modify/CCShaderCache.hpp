#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedShaderCache
		#define GEODE_STATICS_purgeSharedShaderCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedShaderCache) 
	#endif

	#ifndef GEODE_STATICS_sharedShaderCache
		#define GEODE_STATICS_sharedShaderCache
		GEODE_AS_STATIC_FUNCTION(sharedShaderCache) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addProgram
		#define GEODE_STATICS_addProgram
		GEODE_AS_STATIC_FUNCTION(addProgram) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultShader
		#define GEODE_STATICS_loadDefaultShader
		GEODE_AS_STATIC_FUNCTION(loadDefaultShader) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultShaders
		#define GEODE_STATICS_loadDefaultShaders
		GEODE_AS_STATIC_FUNCTION(loadDefaultShaders) 
	#endif

	#ifndef GEODE_STATICS_programForKey
		#define GEODE_STATICS_programForKey
		GEODE_AS_STATIC_FUNCTION(programForKey) 
	#endif

	#ifndef GEODE_STATICS_reloadDefaultShaders
		#define GEODE_STATICS_reloadDefaultShaders
		GEODE_AS_STATIC_FUNCTION(reloadDefaultShaders) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCShaderCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCShaderCache>>::ModifyBase;
		using Base = cocos2d::CCShaderCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e0f90, Default, cocos2d::CCShaderCache, sharedShaderCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e1e70, Default, cocos2d::CCShaderCache, programForKey, char const*)
		}
	};
}
