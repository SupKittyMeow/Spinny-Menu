#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
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

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_setAllowedChars
		#define GEODE_STATICS_setAllowedChars
		GEODE_AS_STATIC_FUNCTION(setAllowedChars) 
	#endif

	#ifndef GEODE_STATICS_setLabelNormalColor
		#define GEODE_STATICS_setLabelNormalColor
		GEODE_AS_STATIC_FUNCTION(setLabelNormalColor) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_addTextArea
		#define GEODE_STATICS_addTextArea
		GEODE_AS_STATIC_FUNCTION(addTextArea) 
	#endif

	#ifndef GEODE_STATICS_forceOffset
		#define GEODE_STATICS_forceOffset
		GEODE_AS_STATIC_FUNCTION(forceOffset) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabel
		#define GEODE_STATICS_updateBlinkLabel
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCursorPosition
		#define GEODE_STATICS_updateCursorPosition
		GEODE_AS_STATIC_FUNCTION(updateCursorPosition) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabelToChar
		#define GEODE_STATICS_updateBlinkLabelToChar
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultFontValues
		#define GEODE_STATICS_updateDefaultFontValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x97e10, Default, CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x97fc0, Default, CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x97d40, Default, CCTextInputNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98980, Default, CCTextInputNode, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98860, Default, CCTextInputNode, setAllowedChars, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x988e0, Default, CCTextInputNode, setString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98350, Default, CCTextInputNode, addTextArea, TextArea*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a490, Default, CCTextInputNode, forceOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98560, Default, CCTextInputNode, updateLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98a20, Default, CCTextInputNode, refreshLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a4a0, Default, CCTextInputNode, updateCursorPosition, cocos2d::CCPoint, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98880, Default, CCTextInputNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a9d0, Default, CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ac00, Default, CCTextInputNode, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9abc0, Default, CCTextInputNode, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9abe0, Default, CCTextInputNode, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ac20, Default, CCTextInputNode, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x993a0, Default, CCTextInputNode, textChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99380, Default, CCTextInputNode, onClickTrackNode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99120, Default, CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99270, Default, CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x994b0, Default, CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99a30, Default, CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99d50, Default, CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
		}
	};
}
