#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MPLobbyLayer.hpp>
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

	#ifndef GEODE_STATICS_onUpdateLobby
		#define GEODE_STATICS_onUpdateLobby
		GEODE_AS_STATIC_FUNCTION(onUpdateLobby) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onBtn1
		#define GEODE_STATICS_onBtn1
		GEODE_AS_STATIC_FUNCTION(onBtn1) 
	#endif

	#ifndef GEODE_STATICS_onBtn2
		#define GEODE_STATICS_onBtn2
		GEODE_AS_STATIC_FUNCTION(onBtn2) 
	#endif

	#ifndef GEODE_STATICS_onBtn3
		#define GEODE_STATICS_onBtn3
		GEODE_AS_STATIC_FUNCTION(onBtn3) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_postComment
		#define GEODE_STATICS_postComment
		GEODE_AS_STATIC_FUNCTION(postComment) 
	#endif

	#ifndef GEODE_STATICS_updateLobby
		#define GEODE_STATICS_updateLobby
		GEODE_AS_STATIC_FUNCTION(updateLobby) 
	#endif

	#ifndef GEODE_STATICS_tryExitLobby
		#define GEODE_STATICS_tryExitLobby
		GEODE_AS_STATIC_FUNCTION(tryExitLobby) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_joinLobbyFinished
		#define GEODE_STATICS_joinLobbyFinished
		GEODE_AS_STATIC_FUNCTION(joinLobbyFinished) 
	#endif

	#ifndef GEODE_STATICS_joinLobbyFailed
		#define GEODE_STATICS_joinLobbyFailed
		GEODE_AS_STATIC_FUNCTION(joinLobbyFailed) 
	#endif

	#ifndef GEODE_STATICS_updateComments
		#define GEODE_STATICS_updateComments
		GEODE_AS_STATIC_FUNCTION(updateComments) 
	#endif

	#ifndef GEODE_STATICS_didUploadMPComment
		#define GEODE_STATICS_didUploadMPComment
		GEODE_AS_STATIC_FUNCTION(didUploadMPComment) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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


	template<class Der>
	struct ModifyDerive<Der, MPLobbyLayer> : ModifyBase<ModifyDerive<Der, MPLobbyLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MPLobbyLayer>>;
		using ModifyBase<ModifyDerive<Der, MPLobbyLayer>>::ModifyBase;
		using Base = MPLobbyLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fce0, Default, MPLobbyLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470490, Default, MPLobbyLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fe60, Default, MPLobbyLayer, joinLobbyFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4702c0, Default, MPLobbyLayer, joinLobbyFailed, int, GJMPErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470190, Default, MPLobbyLayer, updateComments, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4702a0, Default, MPLobbyLayer, didUploadMPComment, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4703c0, Default, MPLobbyLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4703e0, Default, MPLobbyLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470400, Default, MPLobbyLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4704d0, Default, MPLobbyLayer, keyUp, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470420, Default, MPLobbyLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4704f0, Default, MPLobbyLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470700, Default, MPLobbyLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4708a0, Default, MPLobbyLayer, onClosePopup, UploadActionPopup*)
		}
	};
}
