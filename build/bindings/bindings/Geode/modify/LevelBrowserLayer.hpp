#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelBrowserLayer.hpp>
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

	#ifndef GEODE_STATICS_getSearchTitle
		#define GEODE_STATICS_getSearchTitle
		GEODE_AS_STATIC_FUNCTION(getSearchTitle) 
	#endif

	#ifndef GEODE_STATICS_getItemsMatchingSearch
		#define GEODE_STATICS_getItemsMatchingSearch
		GEODE_AS_STATIC_FUNCTION(getItemsMatchingSearch) 
	#endif

	#ifndef GEODE_STATICS_setSearchObject
		#define GEODE_STATICS_setSearchObject
		GEODE_AS_STATIC_FUNCTION(setSearchObject) 
	#endif

	#ifndef GEODE_STATICS_onGoToPage
		#define GEODE_STATICS_onGoToPage
		GEODE_AS_STATIC_FUNCTION(onGoToPage) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onFavorites
		#define GEODE_STATICS_onFavorites
		GEODE_AS_STATIC_FUNCTION(onFavorites) 
	#endif

	#ifndef GEODE_STATICS_onLocalMode
		#define GEODE_STATICS_onLocalMode
		GEODE_AS_STATIC_FUNCTION(onLocalMode) 
	#endif

	#ifndef GEODE_STATICS_onSavedMode
		#define GEODE_STATICS_onSavedMode
		GEODE_AS_STATIC_FUNCTION(onSavedMode) 
	#endif

	#ifndef GEODE_STATICS_onGoToFolder
		#define GEODE_STATICS_onGoToFolder
		GEODE_AS_STATIC_FUNCTION(onGoToFolder) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onGoToLastPage
		#define GEODE_STATICS_onGoToLastPage
		GEODE_AS_STATIC_FUNCTION(onGoToLastPage) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onMyOnlineLevels
		#define GEODE_STATICS_onMyOnlineLevels
		GEODE_AS_STATIC_FUNCTION(onMyOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onRemoveAllFavorites
		#define GEODE_STATICS_onRemoveAllFavorites
		GEODE_AS_STATIC_FUNCTION(onRemoveAllFavorites) 
	#endif

	#ifndef GEODE_STATICS_onNew
		#define GEODE_STATICS_onNew
		GEODE_AS_STATIC_FUNCTION(onNew) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onSaved
		#define GEODE_STATICS_onSaved
		GEODE_AS_STATIC_FUNCTION(onSaved) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_createNewList
		#define GEODE_STATICS_createNewList
		GEODE_AS_STATIC_FUNCTION(createNewList) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_reloadAllObjects
		#define GEODE_STATICS_reloadAllObjects
		GEODE_AS_STATIC_FUNCTION(reloadAllObjects) 
	#endif

	#ifndef GEODE_STATICS_setupLevelBrowser
		#define GEODE_STATICS_setupLevelBrowser
		GEODE_AS_STATIC_FUNCTION(setupLevelBrowser) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_createNewSmartTemplate
		#define GEODE_STATICS_createNewSmartTemplate
		GEODE_AS_STATIC_FUNCTION(createNewSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_shareCommentClosed
		#define GEODE_STATICS_shareCommentClosed
		GEODE_AS_STATIC_FUNCTION(shareCommentClosed) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_updateResultArray
		#define GEODE_STATICS_updateResultArray
		GEODE_AS_STATIC_FUNCTION(updateResultArray) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelBrowserLayer> : ModifyBase<ModifyDerive<Der, LevelBrowserLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelBrowserLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelBrowserLayer>>::ModifyBase;
		using Base = LevelBrowserLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4675c0, Default, LevelBrowserLayer, create, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467790, Default, LevelBrowserLayer, init, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x467380, Default, LevelBrowserLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46c370, Default, LevelBrowserLayer, getSearchTitle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469350, Default, LevelBrowserLayer, onGoToPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4691f0, Default, LevelBrowserLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4691b0, Default, LevelBrowserLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469cf0, Default, LevelBrowserLayer, onDeleteAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469f90, Default, LevelBrowserLayer, onFavorites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469b00, Default, LevelBrowserLayer, onLocalMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469dc0, Default, LevelBrowserLayer, onSavedMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a500, Default, LevelBrowserLayer, onGoToFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a880, Default, LevelBrowserLayer, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a5b0, Default, LevelBrowserLayer, onGoToLastPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469460, Default, LevelBrowserLayer, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469890, Default, LevelBrowserLayer, onMyOnlineLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469710, Default, LevelBrowserLayer, onToggleAllObjects, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469bd0, Default, LevelBrowserLayer, onRemoveAllFavorites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4697a0, Default, LevelBrowserLayer, onNew, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d2e0, Default, LevelBrowserLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a1a0, Default, LevelBrowserLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469e90, Default, LevelBrowserLayer, onSaved, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a5f0, Default, LevelBrowserLayer, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a090, Default, LevelBrowserLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d520, Default, LevelBrowserLayer, createNewList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469230, Default, LevelBrowserLayer, updatePageLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46c070, Default, LevelBrowserLayer, setupLevelBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46a900, Default, LevelBrowserLayer, loadPage, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46de00, Default, LevelBrowserLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46dfa0, Default, LevelBrowserLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e090, Default, LevelBrowserLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e0f0, Default, LevelBrowserLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e0b0, Default, LevelBrowserLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e0d0, Default, LevelBrowserLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46dfb0, Default, LevelBrowserLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d390, Default, LevelBrowserLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d3d0, Default, LevelBrowserLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ca00, Default, LevelBrowserLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46cb60, Default, LevelBrowserLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46cc40, Default, LevelBrowserLayer, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d6b0, Default, LevelBrowserLayer, shareCommentClosed, gd::string, ShareCommentLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d790, Default, LevelBrowserLayer, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d9e0, Default, LevelBrowserLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d1b0, Default, LevelBrowserLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e110, Default, LevelBrowserLayer, updateResultArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46de80, Default, LevelBrowserLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
		}
	};
}
