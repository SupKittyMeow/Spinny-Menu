#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MoreSearchLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onFeatured
		#define GEODE_STATICS_onFeatured
		GEODE_AS_STATIC_FUNCTION(onFeatured) 
	#endif

	#ifndef GEODE_STATICS_onFollowed
		#define GEODE_STATICS_onFollowed
		GEODE_AS_STATIC_FUNCTION(onFollowed) 
	#endif

	#ifndef GEODE_STATICS_onOriginal
		#define GEODE_STATICS_onOriginal
		GEODE_AS_STATIC_FUNCTION(onOriginal) 
	#endif

	#ifndef GEODE_STATICS_onSongMode
		#define GEODE_STATICS_onSongMode
		GEODE_AS_STATIC_FUNCTION(onSongMode) 
	#endif

	#ifndef GEODE_STATICS_onCompleted
		#define GEODE_STATICS_onCompleted
		GEODE_AS_STATIC_FUNCTION(onCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLegendary
		#define GEODE_STATICS_onLegendary
		GEODE_AS_STATIC_FUNCTION(onLegendary) 
	#endif

	#ifndef GEODE_STATICS_onTwoPlayer
		#define GEODE_STATICS_onTwoPlayer
		GEODE_AS_STATIC_FUNCTION(onTwoPlayer) 
	#endif

	#ifndef GEODE_STATICS_onSongFilter
		#define GEODE_STATICS_onSongFilter
		GEODE_AS_STATIC_FUNCTION(onSongFilter) 
	#endif

	#ifndef GEODE_STATICS_onUncompleted
		#define GEODE_STATICS_onUncompleted
		GEODE_AS_STATIC_FUNCTION(onUncompleted) 
	#endif

	#ifndef GEODE_STATICS_onEpic
		#define GEODE_STATICS_onEpic
		GEODE_AS_STATIC_FUNCTION(onEpic) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCoins
		#define GEODE_STATICS_onCoins
		GEODE_AS_STATIC_FUNCTION(onCoins) 
	#endif

	#ifndef GEODE_STATICS_onMythic
		#define GEODE_STATICS_onMythic
		GEODE_AS_STATIC_FUNCTION(onMythic) 
	#endif

	#ifndef GEODE_STATICS_onNoStar
		#define GEODE_STATICS_onNoStar
		GEODE_AS_STATIC_FUNCTION(onNoStar) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_selectSong
		#define GEODE_STATICS_selectSong
		GEODE_AS_STATIC_FUNCTION(selectSong) 
	#endif

	#ifndef GEODE_STATICS_audioPrevious
		#define GEODE_STATICS_audioPrevious
		GEODE_AS_STATIC_FUNCTION(audioPrevious) 
	#endif

	#ifndef GEODE_STATICS_toggleSongNodes
		#define GEODE_STATICS_toggleSongNodes
		GEODE_AS_STATIC_FUNCTION(toggleSongNodes) 
	#endif

	#ifndef GEODE_STATICS_updateAudioLabel
		#define GEODE_STATICS_updateAudioLabel
		GEODE_AS_STATIC_FUNCTION(updateAudioLabel) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_audioNext
		#define GEODE_STATICS_audioNext
		GEODE_AS_STATIC_FUNCTION(audioNext) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MoreSearchLayer> : ModifyBase<ModifyDerive<Der, MoreSearchLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MoreSearchLayer>>;
		using ModifyBase<ModifyDerive<Der, MoreSearchLayer>>::ModifyBase;
		using Base = MoreSearchLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5efc80, Default, MoreSearchLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2b30, Default, MoreSearchLayer, onFeatured, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2950, Default, MoreSearchLayer, onOriginal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2c30, Default, MoreSearchLayer, onSongMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2910, Default, MoreSearchLayer, onCompleted, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2bb0, Default, MoreSearchLayer, onLegendary, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f29d0, Default, MoreSearchLayer, onTwoPlayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2a10, Default, MoreSearchLayer, onSongFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f28d0, Default, MoreSearchLayer, onUncompleted, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2b70, Default, MoreSearchLayer, onEpic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f25d0, Default, MoreSearchLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2990, Default, MoreSearchLayer, onCoins, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2bf0, Default, MoreSearchLayer, onMythic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2af0, Default, MoreSearchLayer, onNoStar, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f26b0, Default, MoreSearchLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f11e0, Default, MoreSearchLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f33b0, Default, MoreSearchLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f3240, Default, MoreSearchLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f3300, Default, MoreSearchLayer, textInputReturn, CCTextInputNode*)
		}
	};
}
