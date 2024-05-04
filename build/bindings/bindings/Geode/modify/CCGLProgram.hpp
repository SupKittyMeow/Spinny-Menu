#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_initWithVertexShaderByteArray
		#define GEODE_STATICS_initWithVertexShaderByteArray
		GEODE_AS_STATIC_FUNCTION(initWithVertexShaderByteArray) 
	#endif

	#ifndef GEODE_STATICS_initWithVertexShaderFilename
		#define GEODE_STATICS_initWithVertexShaderFilename
		GEODE_AS_STATIC_FUNCTION(initWithVertexShaderFilename) 
	#endif

	#ifndef GEODE_STATICS_getProgram
		#define GEODE_STATICS_getProgram
		GEODE_AS_STATIC_FUNCTION(getProgram) 
	#endif

	#ifndef GEODE_STATICS_getUniformLocationForName
		#define GEODE_STATICS_getUniformLocationForName
		GEODE_AS_STATIC_FUNCTION(getUniformLocationForName) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith1f
		#define GEODE_STATICS_setUniformLocationWith1f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith1f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith1i
		#define GEODE_STATICS_setUniformLocationWith1i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith1i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2f
		#define GEODE_STATICS_setUniformLocationWith2f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2fv
		#define GEODE_STATICS_setUniformLocationWith2fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2i
		#define GEODE_STATICS_setUniformLocationWith2i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith2iv
		#define GEODE_STATICS_setUniformLocationWith2iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith2iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3f
		#define GEODE_STATICS_setUniformLocationWith3f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3fv
		#define GEODE_STATICS_setUniformLocationWith3fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3i
		#define GEODE_STATICS_setUniformLocationWith3i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith3iv
		#define GEODE_STATICS_setUniformLocationWith3iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith3iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4f
		#define GEODE_STATICS_setUniformLocationWith4f
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4f) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4fv
		#define GEODE_STATICS_setUniformLocationWith4fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4i
		#define GEODE_STATICS_setUniformLocationWith4i
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4i) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWith4iv
		#define GEODE_STATICS_setUniformLocationWith4iv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWith4iv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWithMatrix3fv
		#define GEODE_STATICS_setUniformLocationWithMatrix3fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWithMatrix3fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformLocationWithMatrix4fv
		#define GEODE_STATICS_setUniformLocationWithMatrix4fv
		GEODE_AS_STATIC_FUNCTION(setUniformLocationWithMatrix4fv) 
	#endif

	#ifndef GEODE_STATICS_setUniformsForBuiltins
		#define GEODE_STATICS_setUniformsForBuiltins
		GEODE_AS_STATIC_FUNCTION(setUniformsForBuiltins) 
	#endif

	#ifndef GEODE_STATICS_addAttribute
		#define GEODE_STATICS_addAttribute
		GEODE_AS_STATIC_FUNCTION(addAttribute) 
	#endif

	#ifndef GEODE_STATICS_compileShader
		#define GEODE_STATICS_compileShader
		GEODE_AS_STATIC_FUNCTION(compileShader) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_fragmentShaderLog
		#define GEODE_STATICS_fragmentShaderLog
		GEODE_AS_STATIC_FUNCTION(fragmentShaderLog) 
	#endif

	#ifndef GEODE_STATICS_link
		#define GEODE_STATICS_link
		GEODE_AS_STATIC_FUNCTION(link) 
	#endif

	#ifndef GEODE_STATICS_programLog
		#define GEODE_STATICS_programLog
		GEODE_AS_STATIC_FUNCTION(programLog) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_updateUniformLocation
		#define GEODE_STATICS_updateUniformLocation
		GEODE_AS_STATIC_FUNCTION(updateUniformLocation) 
	#endif

	#ifndef GEODE_STATICS_updateUniforms
		#define GEODE_STATICS_updateUniforms
		GEODE_AS_STATIC_FUNCTION(updateUniforms) 
	#endif

	#ifndef GEODE_STATICS_use
		#define GEODE_STATICS_use
		GEODE_AS_STATIC_FUNCTION(use) 
	#endif

	#ifndef GEODE_STATICS_vertexShaderLog
		#define GEODE_STATICS_vertexShaderLog
		GEODE_AS_STATIC_FUNCTION(vertexShaderLog) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGLProgram> : ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>::ModifyBase;
		using Base = cocos2d::CCGLProgram;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40ad20, Default, cocos2d::CCGLProgram, setUniformsForBuiltins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x409d50, Default, cocos2d::CCGLProgram, use, )
		}
	};
}
