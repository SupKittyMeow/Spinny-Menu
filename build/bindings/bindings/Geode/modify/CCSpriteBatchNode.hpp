#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_getAtlasCapacity
		#define GEODE_STATICS_getAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(getAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_getDescendants
		#define GEODE_STATICS_getDescendants
		GEODE_AS_STATIC_FUNCTION(getDescendants) 
	#endif

	#ifndef GEODE_STATICS_getManualSortChildren
		#define GEODE_STATICS_getManualSortChildren
		GEODE_AS_STATIC_FUNCTION(getManualSortChildren) 
	#endif

	#ifndef GEODE_STATICS_getTextureAtlas
		#define GEODE_STATICS_getTextureAtlas
		GEODE_AS_STATIC_FUNCTION(getTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_getUsedAtlasCapacity
		#define GEODE_STATICS_getUsedAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(getUsedAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_setManualSortChildren
		#define GEODE_STATICS_setManualSortChildren
		GEODE_AS_STATIC_FUNCTION(setManualSortChildren) 
	#endif

	#ifndef GEODE_STATICS_setTextureAtlas
		#define GEODE_STATICS_setTextureAtlas
		GEODE_AS_STATIC_FUNCTION(setTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_addSpriteWithoutQuad
		#define GEODE_STATICS_addSpriteWithoutQuad
		GEODE_AS_STATIC_FUNCTION(addSpriteWithoutQuad) 
	#endif

	#ifndef GEODE_STATICS_appendChild
		#define GEODE_STATICS_appendChild
		GEODE_AS_STATIC_FUNCTION(appendChild) 
	#endif

	#ifndef GEODE_STATICS_atlasIndexForChild
		#define GEODE_STATICS_atlasIndexForChild
		GEODE_AS_STATIC_FUNCTION(atlasIndexForChild) 
	#endif

	#ifndef GEODE_STATICS_highestAtlasIndexInChild
		#define GEODE_STATICS_highestAtlasIndexInChild
		GEODE_AS_STATIC_FUNCTION(highestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_STATICS_increaseAtlasCapacity
		#define GEODE_STATICS_increaseAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(increaseAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_insertChild
		#define GEODE_STATICS_insertChild
		GEODE_AS_STATIC_FUNCTION(insertChild) 
	#endif

	#ifndef GEODE_STATICS_insertQuadFromSprite
		#define GEODE_STATICS_insertQuadFromSprite
		GEODE_AS_STATIC_FUNCTION(insertQuadFromSprite) 
	#endif

	#ifndef GEODE_STATICS_lowestAtlasIndexInChild
		#define GEODE_STATICS_lowestAtlasIndexInChild
		GEODE_AS_STATIC_FUNCTION(lowestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_STATICS_manualSortAllChildren
		#define GEODE_STATICS_manualSortAllChildren
		GEODE_AS_STATIC_FUNCTION(manualSortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_rebuildIndexInOrder
		#define GEODE_STATICS_rebuildIndexInOrder
		GEODE_AS_STATIC_FUNCTION(rebuildIndexInOrder) 
	#endif

	#ifndef GEODE_STATICS_removeChildAtIndex
		#define GEODE_STATICS_removeChildAtIndex
		GEODE_AS_STATIC_FUNCTION(removeChildAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFromAtlas
		#define GEODE_STATICS_removeSpriteFromAtlas
		GEODE_AS_STATIC_FUNCTION(removeSpriteFromAtlas) 
	#endif

	#ifndef GEODE_STATICS_reorderBatch
		#define GEODE_STATICS_reorderBatch
		GEODE_AS_STATIC_FUNCTION(reorderBatch) 
	#endif

	#ifndef GEODE_STATICS_swap
		#define GEODE_STATICS_swap
		GEODE_AS_STATIC_FUNCTION(swap) 
	#endif

	#ifndef GEODE_STATICS_updateAtlasIndex
		#define GEODE_STATICS_updateAtlasIndex
		GEODE_AS_STATIC_FUNCTION(updateAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_updateQuadFromSprite
		#define GEODE_STATICS_updateQuadFromSprite
		GEODE_AS_STATIC_FUNCTION(updateQuadFromSprite) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteBatchNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>::ModifyBase;
		using Base = cocos2d::CCSpriteBatchNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167460, Default, cocos2d::CCSpriteBatchNode, create, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167320, Default, cocos2d::CCSpriteBatchNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168800, Default, cocos2d::CCSpriteBatchNode, getAtlasCapacity, )
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1675f0, Default, cocos2d::CCSpriteBatchNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1676a0, Default, cocos2d::CCSpriteBatchNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1678a0, Default, cocos2d::CCSpriteBatchNode, appendChild, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1687b0, Default, cocos2d::CCSpriteBatchNode, increaseAtlasCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1675a0, Default, cocos2d::CCSpriteBatchNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167a70, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167a80, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167810, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167af0, Default, cocos2d::CCSpriteBatchNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167dd0, Default, cocos2d::CCSpriteBatchNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167a90, Default, cocos2d::CCSpriteBatchNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167e80, Default, cocos2d::CCSpriteBatchNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168670, Default, cocos2d::CCSpriteBatchNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167770, Default, cocos2d::CCSpriteBatchNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168ed0, Default, cocos2d::CCSpriteBatchNode, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168ef0, Default, cocos2d::CCSpriteBatchNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168f10, Default, cocos2d::CCSpriteBatchNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168f40, Default, cocos2d::CCSpriteBatchNode, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
