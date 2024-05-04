#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MessagesProfilePage.hpp>
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

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSentMessages
		#define GEODE_STATICS_onSentMessages
		GEODE_AS_STATIC_FUNCTION(onSentMessages) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_untoggleAll
		#define GEODE_STATICS_untoggleAll
		GEODE_AS_STATIC_FUNCTION(untoggleAll) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
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
	struct ModifyDerive<Der, MessagesProfilePage> : ModifyBase<ModifyDerive<Der, MessagesProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MessagesProfilePage>>;
		using ModifyBase<ModifyDerive<Der, MessagesProfilePage>>::ModifyBase;
		using Base = MessagesProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20cdd0, Default, MessagesProfilePage, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20cf80, Default, MessagesProfilePage, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20de00, Default, MessagesProfilePage, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20dde0, Default, MessagesProfilePage, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20daa0, Default, MessagesProfilePage, onSentMessages, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20db30, Default, MessagesProfilePage, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20dd20, Default, MessagesProfilePage, onToggleAllObjects, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20d970, Default, MessagesProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20de20, Default, MessagesProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ee60, Default, MessagesProfilePage, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ea70, Default, MessagesProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20de90, Default, MessagesProfilePage, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e900, Default, MessagesProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e8d0, Default, MessagesProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e4b0, Default, MessagesProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e520, Default, MessagesProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e590, Default, MessagesProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e730, Default, MessagesProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ebe0, Default, MessagesProfilePage, loadMessagesFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ed10, Default, MessagesProfilePage, loadMessagesFailed, char const*, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ee20, Default, MessagesProfilePage, forceReloadMessages, bool)
		}
	};
}
