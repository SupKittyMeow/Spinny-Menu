#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MessageListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_loadMessagesFinished
		#define GEODE_STATICS_loadMessagesFinished
		GEODE_AS_STATIC_FUNCTION(loadMessagesFinished) 
	#endif

	#ifndef GEODE_STATICS_loadMessagesFailed
		#define GEODE_STATICS_loadMessagesFailed
		GEODE_AS_STATIC_FUNCTION(loadMessagesFailed) 
	#endif

	#ifndef GEODE_STATICS_forceReloadMessages
		#define GEODE_STATICS_forceReloadMessages
		GEODE_AS_STATIC_FUNCTION(forceReloadMessages) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MessageListDelegate> : ModifyBase<ModifyDerive<Der, MessageListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MessageListDelegate>>;
		using ModifyBase<ModifyDerive<Der, MessageListDelegate>>::ModifyBase;
		using Base = MessageListDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
