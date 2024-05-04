#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRequestPopup.hpp>
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

	#ifndef GEODE_STATICS_onBlock
		#define GEODE_STATICS_onBlock
		GEODE_AS_STATIC_FUNCTION(onBlock) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onAccept
		#define GEODE_STATICS_onAccept
		GEODE_AS_STATIC_FUNCTION(onAccept) 
	#endif

	#ifndef GEODE_STATICS_onRemove
		#define GEODE_STATICS_onRemove
		GEODE_AS_STATIC_FUNCTION(onRemove) 
	#endif

	#ifndef GEODE_STATICS_loadFromGJFriendRequest
		#define GEODE_STATICS_loadFromGJFriendRequest
		GEODE_AS_STATIC_FUNCTION(loadFromGJFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRequestPopup> : ModifyBase<ModifyDerive<Der, FriendRequestPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRequestPopup>>;
		using ModifyBase<ModifyDerive<Der, FriendRequestPopup>>::ModifyBase;
		using Base = FriendRequestPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280e10, Default, FriendRequestPopup, create, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280f80, Default, FriendRequestPopup, init, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282090, Default, FriendRequestPopup, onBlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x281550, Default, FriendRequestPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x281ef0, Default, FriendRequestPopup, onAccept, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x281fc0, Default, FriendRequestPopup, onRemove, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2815c0, Default, FriendRequestPopup, loadFromGJFriendRequest, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282380, Default, FriendRequestPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282470, Default, FriendRequestPopup, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282630, Default, FriendRequestPopup, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282700, Default, FriendRequestPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282870, Default, FriendRequestPopup, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
