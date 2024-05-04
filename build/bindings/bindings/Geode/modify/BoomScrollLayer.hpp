#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
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

	#ifndef GEODE_STATICS_getTotalPages
		#define GEODE_STATICS_getTotalPages
		GEODE_AS_STATIC_FUNCTION(getTotalPages) 
	#endif

	#ifndef GEODE_STATICS_getRelativePageForNum
		#define GEODE_STATICS_getRelativePageForNum
		GEODE_AS_STATIC_FUNCTION(getRelativePageForNum) 
	#endif

	#ifndef GEODE_STATICS_getRelativePosForPage
		#define GEODE_STATICS_getRelativePosForPage
		GEODE_AS_STATIC_FUNCTION(getRelativePosForPage) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_setDotScale
		#define GEODE_STATICS_setDotScale
		GEODE_AS_STATIC_FUNCTION(setDotScale) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorPosition
		#define GEODE_STATICS_setPagesIndicatorPosition
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_moveToPage
		#define GEODE_STATICS_moveToPage
		GEODE_AS_STATIC_FUNCTION(moveToPage) 
	#endif

	#ifndef GEODE_STATICS_removePage
		#define GEODE_STATICS_removePage
		GEODE_AS_STATIC_FUNCTION(removePage) 
	#endif

	#ifndef GEODE_STATICS_selectPage
		#define GEODE_STATICS_selectPage
		GEODE_AS_STATIC_FUNCTION(selectPage) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_quickUpdate
		#define GEODE_STATICS_quickUpdate
		GEODE_AS_STATIC_FUNCTION(quickUpdate) 
	#endif

	#ifndef GEODE_STATICS_updatePages
		#define GEODE_STATICS_updatePages
		GEODE_AS_STATIC_FUNCTION(updatePages) 
	#endif

	#ifndef GEODE_STATICS_moveToPageEnded
		#define GEODE_STATICS_moveToPageEnded
		GEODE_AS_STATIC_FUNCTION(moveToPageEnded) 
	#endif

	#ifndef GEODE_STATICS_instantMoveToPage
		#define GEODE_STATICS_instantMoveToPage
		GEODE_AS_STATIC_FUNCTION(instantMoveToPage) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_removePageWithNumber
		#define GEODE_STATICS_removePageWithNumber
		GEODE_AS_STATIC_FUNCTION(removePageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_togglePageIndicators
		#define GEODE_STATICS_togglePageIndicators
		GEODE_AS_STATIC_FUNCTION(togglePageIndicators) 
	#endif

	#ifndef GEODE_STATICS_pageNumberForPosition
		#define GEODE_STATICS_pageNumberForPosition
		GEODE_AS_STATIC_FUNCTION(pageNumberForPosition) 
	#endif

	#ifndef GEODE_STATICS_repositionPagesLooped
		#define GEODE_STATICS_repositionPagesLooped
		GEODE_AS_STATIC_FUNCTION(repositionPagesLooped) 
	#endif

	#ifndef GEODE_STATICS_setupDynamicScrolling
		#define GEODE_STATICS_setupDynamicScrolling
		GEODE_AS_STATIC_FUNCTION(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_STATICS_positionForPageWithNumber
		#define GEODE_STATICS_positionForPageWithNumber
		GEODE_AS_STATIC_FUNCTION(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_addPage
		#define GEODE_STATICS_addPage
		GEODE_AS_STATIC_FUNCTION(addPage) 
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


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayer> : ModifyBase<ModifyDerive<Der, BoomScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayer>>::ModifyBase;
		using Base = BoomScrollLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x382bc0, Default, BoomScrollLayer, create, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3827d0, Default, BoomScrollLayer, create, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x382860, Default, BoomScrollLayer, init, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x383740, Default, BoomScrollLayer, getTotalPages, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x383ae0, Default, BoomScrollLayer, getPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x382d00, Default, BoomScrollLayer, setPagesIndicatorPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x383770, Default, BoomScrollLayer, updateDots, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x382d30, Default, BoomScrollLayer, updatePages, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384070, Default, BoomScrollLayer, moveToPageEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384200, Default, BoomScrollLayer, instantMoveToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x383fa0, Default, BoomScrollLayer, togglePageIndicators, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x382e50, Default, BoomScrollLayer, repositionPagesLooped, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3834f0, Default, BoomScrollLayer, setupDynamicScrolling, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384010, Default, BoomScrollLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384b40, Default, BoomScrollLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384c30, Default, BoomScrollLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384f50, Default, BoomScrollLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384980, Default, BoomScrollLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3847f0, Default, BoomScrollLayer, registerWithTouchDispatcher, )
		}
	};
}
