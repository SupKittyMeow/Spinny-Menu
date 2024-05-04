#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelListLayer.hpp>
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

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onListInfo
		#define GEODE_STATICS_onListInfo
		GEODE_AS_STATIC_FUNCTION(onListInfo) 
	#endif

	#ifndef GEODE_STATICS_onSelectIcon
		#define GEODE_STATICS_onSelectIcon
		GEODE_AS_STATIC_FUNCTION(onSelectIcon) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_onDescription
		#define GEODE_STATICS_onDescription
		GEODE_AS_STATIC_FUNCTION(onDescription) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_onToggleEditMode
		#define GEODE_STATICS_onToggleEditMode
		GEODE_AS_STATIC_FUNCTION(onToggleEditMode) 
	#endif

	#ifndef GEODE_STATICS_onRefreshLevelList
		#define GEODE_STATICS_onRefreshLevelList
		GEODE_AS_STATIC_FUNCTION(onRefreshLevelList) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_ownerDelete
		#define GEODE_STATICS_ownerDelete
		GEODE_AS_STATIC_FUNCTION(ownerDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_updateEditMode
		#define GEODE_STATICS_updateEditMode
		GEODE_AS_STATIC_FUNCTION(updateEditMode) 
	#endif

	#ifndef GEODE_STATICS_updateStatsArt
		#define GEODE_STATICS_updateStatsArt
		GEODE_AS_STATIC_FUNCTION(updateStatsArt) 
	#endif

	#ifndef GEODE_STATICS_verifyListName
		#define GEODE_STATICS_verifyListName
		GEODE_AS_STATIC_FUNCTION(verifyListName) 
	#endif

	#ifndef GEODE_STATICS_updateSideButtons
		#define GEODE_STATICS_updateSideButtons
		GEODE_AS_STATIC_FUNCTION(updateSideButtons) 
	#endif

	#ifndef GEODE_STATICS_confirmOwnerDelete
		#define GEODE_STATICS_confirmOwnerDelete
		GEODE_AS_STATIC_FUNCTION(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_shareCommentClosed
		#define GEODE_STATICS_shareCommentClosed
		GEODE_AS_STATIC_FUNCTION(shareCommentClosed) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_cloneList
		#define GEODE_STATICS_cloneList
		GEODE_AS_STATIC_FUNCTION(cloneList) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
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

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_iconSelectClosed
		#define GEODE_STATICS_iconSelectClosed
		GEODE_AS_STATIC_FUNCTION(iconSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_levelListDeleteFinished
		#define GEODE_STATICS_levelListDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelListDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelListDeleteFailed
		#define GEODE_STATICS_levelListDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelListDeleteFailed) 
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


	template<class Der>
	struct ModifyDerive<Der, LevelListLayer> : ModifyBase<ModifyDerive<Der, LevelListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelListLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelListLayer>>::ModifyBase;
		using Base = LevelListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33a9a0, Default, LevelListLayer, init, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x33a830, Default, LevelListLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e710, Default, LevelListLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ed50, Default, LevelListLayer, shareCommentClosed, gd::string, ShareCommentLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33a8b0, Default, LevelListLayer, scene, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33dbe0, Default, LevelListLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33dc10, Default, LevelListLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33df90, Default, LevelListLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e1d0, Default, LevelListLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e9c0, Default, LevelListLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e5b0, Default, LevelListLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e6f0, Default, LevelListLayer, updateResultArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e200, Default, LevelListLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ee20, Default, LevelListLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f060, Default, LevelListLayer, iconSelectClosed, SelectListIconLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f1f0, Default, LevelListLayer, levelListDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f2f0, Default, LevelListLayer, levelListDeleteFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f5c0, Default, LevelListLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f3f0, Default, LevelListLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f690, Default, LevelListLayer, textChanged, CCTextInputNode*)
		}
	};
}
