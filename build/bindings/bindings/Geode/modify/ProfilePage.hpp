#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ProfilePage.hpp>
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

	#ifndef GEODE_STATICS_onMessages
		#define GEODE_STATICS_onMessages
		GEODE_AS_STATIC_FUNCTION(onMessages) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRequests
		#define GEODE_STATICS_onRequests
		GEODE_AS_STATIC_FUNCTION(onRequests) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onBlockUser
		#define GEODE_STATICS_onBlockUser
		GEODE_AS_STATIC_FUNCTION(onBlockUser) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onCommentHistory
		#define GEODE_STATICS_onCommentHistory
		GEODE_AS_STATIC_FUNCTION(onCommentHistory) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFollow
		#define GEODE_STATICS_onFollow
		GEODE_AS_STATIC_FUNCTION(onFollow) 
	#endif

	#ifndef GEODE_STATICS_onFriend
		#define GEODE_STATICS_onFriend
		GEODE_AS_STATIC_FUNCTION(onFriend) 
	#endif

	#ifndef GEODE_STATICS_onTwitch
		#define GEODE_STATICS_onTwitch
		GEODE_AS_STATIC_FUNCTION(onTwitch) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_onMyLists
		#define GEODE_STATICS_onMyLists
		GEODE_AS_STATIC_FUNCTION(onMyLists) 
	#endif

	#ifndef GEODE_STATICS_onTwitter
		#define GEODE_STATICS_onTwitter
		GEODE_AS_STATIC_FUNCTION(onTwitter) 
	#endif

	#ifndef GEODE_STATICS_onYouTube
		#define GEODE_STATICS_onYouTube
		GEODE_AS_STATIC_FUNCTION(onYouTube) 
	#endif

	#ifndef GEODE_STATICS_isOnWatchlist
		#define GEODE_STATICS_isOnWatchlist
		GEODE_AS_STATIC_FUNCTION(isOnWatchlist) 
	#endif

	#ifndef GEODE_STATICS_setupComments
		#define GEODE_STATICS_setupComments
		GEODE_AS_STATIC_FUNCTION(setupComments) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_showNoAccountError
		#define GEODE_STATICS_showNoAccountError
		GEODE_AS_STATIC_FUNCTION(showNoAccountError) 
	#endif

	#ifndef GEODE_STATICS_loadPageFromUserInfo
		#define GEODE_STATICS_loadPageFromUserInfo
		GEODE_AS_STATIC_FUNCTION(loadPageFromUserInfo) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_toggleMainPageVisibility
		#define GEODE_STATICS_toggleMainPageVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMainPageVisibility) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFinished
		#define GEODE_STATICS_getUserInfoFinished
		GEODE_AS_STATIC_FUNCTION(getUserInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFailed
		#define GEODE_STATICS_getUserInfoFailed
		GEODE_AS_STATIC_FUNCTION(getUserInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_userInfoChanged
		#define GEODE_STATICS_userInfoChanged
		GEODE_AS_STATIC_FUNCTION(userInfoChanged) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_commentDeleteFailed
		#define GEODE_STATICS_commentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(commentDeleteFailed) 
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


	template<class Der>
	struct ModifyDerive<Der, ProfilePage> : ModifyBase<ModifyDerive<Der, ProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ProfilePage>>;
		using ModifyBase<ModifyDerive<Der, ProfilePage>>::ModifyBase;
		using Base = ProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x778c80, Default, ProfilePage, create, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x778e90, Default, ProfilePage, init, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d2e0, Default, ProfilePage, onMessages, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77cf40, Default, ProfilePage, onMyLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d400, Default, ProfilePage, onRequests, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d490, Default, ProfilePage, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77cc20, Default, ProfilePage, onBlockUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c770, Default, ProfilePage, onSendMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c730, Default, ProfilePage, onCommentHistory, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x779940, Default, ProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x779bc0, Default, ProfilePage, onFollow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c880, Default, ProfilePage, onFriend, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c5f0, Default, ProfilePage, onTwitch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x779e30, Default, ProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d4b0, Default, ProfilePage, onComment, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d370, Default, ProfilePage, onFriends, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d110, Default, ProfilePage, onMyLists, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c490, Default, ProfilePage, onTwitter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77c340, Default, ProfilePage, onYouTube, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7799c0, Default, ProfilePage, setupComments, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77a170, Default, ProfilePage, loadPageFromUserInfo, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77a030, Default, ProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e370, Default, ProfilePage, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d730, Default, ProfilePage, blockUser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e7a0, Default, ProfilePage, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77f1b0, Default, ProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77dd50, Default, ProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77dfd0, Default, ProfilePage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d810, Default, ProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77de60, Default, ProfilePage, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77df30, Default, ProfilePage, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e2c0, Default, ProfilePage, getUserInfoFinished, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e5f0, Default, ProfilePage, getUserInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e6b0, Default, ProfilePage, userInfoChanged, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e8d0, Default, ProfilePage, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77e9c0, Default, ProfilePage, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77ea90, Default, ProfilePage, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77eec0, Default, ProfilePage, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77ef50, Default, ProfilePage, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77f020, Default, ProfilePage, commentDeleteFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77d9f0, Default, ProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77da70, Default, ProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77dc30, Default, ProfilePage, uploadActionFailed, int, int)
		}
	};
}
