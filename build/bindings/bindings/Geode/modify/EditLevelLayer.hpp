#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditLevelLayer.hpp>
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

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onMoveToTop
		#define GEODE_STATICS_onMoveToTop
		GEODE_AS_STATIC_FUNCTION(onMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_onSetFolder
		#define GEODE_STATICS_onSetFolder
		GEODE_AS_STATIC_FUNCTION(onSetFolder) 
	#endif

	#ifndef GEODE_STATICS_onGuidelines
		#define GEODE_STATICS_onGuidelines
		GEODE_AS_STATIC_FUNCTION(onGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onLowDetailMode
		#define GEODE_STATICS_onLowDetailMode
		GEODE_AS_STATIC_FUNCTION(onLowDetailMode) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescription
		#define GEODE_STATICS_onUpdateDescription
		GEODE_AS_STATIC_FUNCTION(onUpdateDescription) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onTest
		#define GEODE_STATICS_onTest
		GEODE_AS_STATIC_FUNCTION(onTest) 
	#endif

	#ifndef GEODE_STATICS_onClone
		#define GEODE_STATICS_onClone
		GEODE_AS_STATIC_FUNCTION(onClone) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_updateDescText
		#define GEODE_STATICS_updateDescText
		GEODE_AS_STATIC_FUNCTION(updateDescText) 
	#endif

	#ifndef GEODE_STATICS_closeTextInputs
		#define GEODE_STATICS_closeTextInputs
		GEODE_AS_STATIC_FUNCTION(closeTextInputs) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelName
		#define GEODE_STATICS_verifyLevelName
		GEODE_AS_STATIC_FUNCTION(verifyLevelName) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToTop
		#define GEODE_STATICS_confirmMoveToTop
		GEODE_AS_STATIC_FUNCTION(confirmMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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
	struct ModifyDerive<Der, EditLevelLayer> : ModifyBase<ModifyDerive<Der, EditLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, EditLevelLayer>>::ModifyBase;
		using Base = EditLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d96f0, Default, EditLevelLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9820, Default, EditLevelLayer, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc2c0, Default, EditLevelLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc080, Default, EditLevelLayer, onSetFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc500, Default, EditLevelLayer, onGuidelines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc120, Default, EditLevelLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbc30, Default, EditLevelLayer, onUpdateDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc170, Default, EditLevelLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dadc0, Default, EditLevelLayer, onEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbe00, Default, EditLevelLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1daf10, Default, EditLevelLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db050, Default, EditLevelLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbed0, Default, EditLevelLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbd10, Default, EditLevelLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dbfa0, Default, EditLevelLayer, confirmMoveToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9590, Default, EditLevelLayer, scene, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd510, Default, EditLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd540, Default, EditLevelLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd410, Default, EditLevelLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd060, Default, EditLevelLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc940, Default, EditLevelLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dc650, Default, EditLevelLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dca20, Default, EditLevelLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd5e0, Default, EditLevelLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd770, Default, EditLevelLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dd590, Default, EditLevelLayer, onClosePopup, UploadActionPopup*)
		}
	};
}
