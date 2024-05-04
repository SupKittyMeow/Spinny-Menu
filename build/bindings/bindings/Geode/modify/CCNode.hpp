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

	#ifndef GEODE_STATICS_resetGlobalOrderOfArrival
		#define GEODE_STATICS_resetGlobalOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(resetGlobalOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_getActionByTag
		#define GEODE_STATICS_getActionByTag
		GEODE_AS_STATIC_FUNCTION(getActionByTag) 
	#endif

	#ifndef GEODE_STATICS_getComponent
		#define GEODE_STATICS_getComponent
		GEODE_AS_STATIC_FUNCTION(getComponent) 
	#endif

	#ifndef GEODE_STATICS_getScriptHandler
		#define GEODE_STATICS_getScriptHandler
		GEODE_AS_STATIC_FUNCTION(getScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_getTransformTemp
		#define GEODE_STATICS_getTransformTemp
		GEODE_AS_STATIC_FUNCTION(getTransformTemp) 
	#endif

	#ifndef GEODE_STATICS_getUseChildIndex
		#define GEODE_STATICS_getUseChildIndex
		GEODE_AS_STATIC_FUNCTION(getUseChildIndex) 
	#endif

	#ifndef GEODE_STATICS_setAdditionalTransform
		#define GEODE_STATICS_setAdditionalTransform
		GEODE_AS_STATIC_FUNCTION(setAdditionalTransform) 
	#endif

	#ifndef GEODE_STATICS_setUseChildIndex
		#define GEODE_STATICS_setUseChildIndex
		GEODE_AS_STATIC_FUNCTION(setUseChildIndex) 
	#endif

	#ifndef GEODE_STATICS_boundingBox
		#define GEODE_STATICS_boundingBox
		GEODE_AS_STATIC_FUNCTION(boundingBox) 
	#endif

	#ifndef GEODE_STATICS_childrenAlloc
		#define GEODE_STATICS_childrenAlloc
		GEODE_AS_STATIC_FUNCTION(childrenAlloc) 
	#endif

	#ifndef GEODE_STATICS_convertToNodeSpace
		#define GEODE_STATICS_convertToNodeSpace
		GEODE_AS_STATIC_FUNCTION(convertToNodeSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToNodeSpaceAR
		#define GEODE_STATICS_convertToNodeSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertToNodeSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_convertToWindowSpace
		#define GEODE_STATICS_convertToWindowSpace
		GEODE_AS_STATIC_FUNCTION(convertToWindowSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToWorldSpace
		#define GEODE_STATICS_convertToWorldSpace
		GEODE_AS_STATIC_FUNCTION(convertToWorldSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToWorldSpaceAR
		#define GEODE_STATICS_convertToWorldSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertToWorldSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_convertTouchToNodeSpace
		#define GEODE_STATICS_convertTouchToNodeSpace
		GEODE_AS_STATIC_FUNCTION(convertTouchToNodeSpace) 
	#endif

	#ifndef GEODE_STATICS_convertTouchToNodeSpaceAR
		#define GEODE_STATICS_convertTouchToNodeSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertTouchToNodeSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_detachChild
		#define GEODE_STATICS_detachChild
		GEODE_AS_STATIC_FUNCTION(detachChild) 
	#endif

	#ifndef GEODE_STATICS_insertChild
		#define GEODE_STATICS_insertChild
		GEODE_AS_STATIC_FUNCTION(insertChild) 
	#endif

	#ifndef GEODE_STATICS_numberOfRunningActions
		#define GEODE_STATICS_numberOfRunningActions
		GEODE_AS_STATIC_FUNCTION(numberOfRunningActions) 
	#endif

	#ifndef GEODE_STATICS_pauseSchedulerAndActions
		#define GEODE_STATICS_pauseSchedulerAndActions
		GEODE_AS_STATIC_FUNCTION(pauseSchedulerAndActions) 
	#endif

	#ifndef GEODE_STATICS_qsortAllChildrenWithIndex
		#define GEODE_STATICS_qsortAllChildrenWithIndex
		GEODE_AS_STATIC_FUNCTION(qsortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_STATICS_resumeSchedulerAndActions
		#define GEODE_STATICS_resumeSchedulerAndActions
		GEODE_AS_STATIC_FUNCTION(resumeSchedulerAndActions) 
	#endif

	#ifndef GEODE_STATICS_runAction
		#define GEODE_STATICS_runAction
		GEODE_AS_STATIC_FUNCTION(runAction) 
	#endif

	#ifndef GEODE_STATICS_schedule
		#define GEODE_STATICS_schedule
		GEODE_AS_STATIC_FUNCTION(schedule) 
	#endif

	#ifndef GEODE_STATICS_scheduleOnce
		#define GEODE_STATICS_scheduleOnce
		GEODE_AS_STATIC_FUNCTION(scheduleOnce) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdate
		#define GEODE_STATICS_scheduleUpdate
		GEODE_AS_STATIC_FUNCTION(scheduleUpdate) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateWithPriority
		#define GEODE_STATICS_scheduleUpdateWithPriority
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateWithPriority) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateWithPriorityLua
		#define GEODE_STATICS_scheduleUpdateWithPriorityLua
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateWithPriorityLua) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildrenNoIndex
		#define GEODE_STATICS_sortAllChildrenNoIndex
		GEODE_AS_STATIC_FUNCTION(sortAllChildrenNoIndex) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildrenWithIndex
		#define GEODE_STATICS_sortAllChildrenWithIndex
		GEODE_AS_STATIC_FUNCTION(sortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_STATICS_stopAction
		#define GEODE_STATICS_stopAction
		GEODE_AS_STATIC_FUNCTION(stopAction) 
	#endif

	#ifndef GEODE_STATICS_stopActionByTag
		#define GEODE_STATICS_stopActionByTag
		GEODE_AS_STATIC_FUNCTION(stopActionByTag) 
	#endif

	#ifndef GEODE_STATICS_stopAllActions
		#define GEODE_STATICS_stopAllActions
		GEODE_AS_STATIC_FUNCTION(stopAllActions) 
	#endif

	#ifndef GEODE_STATICS_transform
		#define GEODE_STATICS_transform
		GEODE_AS_STATIC_FUNCTION(transform) 
	#endif

	#ifndef GEODE_STATICS_transformAncestors
		#define GEODE_STATICS_transformAncestors
		GEODE_AS_STATIC_FUNCTION(transformAncestors) 
	#endif

	#ifndef GEODE_STATICS_unschedule
		#define GEODE_STATICS_unschedule
		GEODE_AS_STATIC_FUNCTION(unschedule) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllSelectors
		#define GEODE_STATICS_unscheduleAllSelectors
		GEODE_AS_STATIC_FUNCTION(unscheduleAllSelectors) 
	#endif

	#ifndef GEODE_STATICS_unscheduleUpdate
		#define GEODE_STATICS_unscheduleUpdate
		GEODE_AS_STATIC_FUNCTION(unscheduleUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateChildIndexes
		#define GEODE_STATICS_updateChildIndexes
		GEODE_AS_STATIC_FUNCTION(updateChildIndexes) 
	#endif

	#ifndef GEODE_STATICS_getChildrenCount
		#define GEODE_STATICS_getChildrenCount
		GEODE_AS_STATIC_FUNCTION(getChildrenCount) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setZOrder
		#define GEODE_STATICS_setZOrder
		GEODE_AS_STATIC_FUNCTION(setZOrder) 
	#endif

	#ifndef GEODE_STATICS__setZOrder
		#define GEODE_STATICS__setZOrder
		GEODE_AS_STATIC_FUNCTION(_setZOrder) 
	#endif

	#ifndef GEODE_STATICS_getZOrder
		#define GEODE_STATICS_getZOrder
		GEODE_AS_STATIC_FUNCTION(getZOrder) 
	#endif

	#ifndef GEODE_STATICS_setVertexZ
		#define GEODE_STATICS_setVertexZ
		GEODE_AS_STATIC_FUNCTION(setVertexZ) 
	#endif

	#ifndef GEODE_STATICS_getVertexZ
		#define GEODE_STATICS_getVertexZ
		GEODE_AS_STATIC_FUNCTION(getVertexZ) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_getScaleX
		#define GEODE_STATICS_getScaleX
		GEODE_AS_STATIC_FUNCTION(getScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_getScaleY
		#define GEODE_STATICS_getScaleY
		GEODE_AS_STATIC_FUNCTION(getScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_getScale
		#define GEODE_STATICS_getScale
		GEODE_AS_STATIC_FUNCTION(getScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_getPosition
		#define GEODE_STATICS_getPosition
		GEODE_AS_STATIC_FUNCTION(getPosition) 
	#endif

	#ifndef GEODE_STATICS_setPositionX
		#define GEODE_STATICS_setPositionX
		GEODE_AS_STATIC_FUNCTION(setPositionX) 
	#endif

	#ifndef GEODE_STATICS_getPositionX
		#define GEODE_STATICS_getPositionX
		GEODE_AS_STATIC_FUNCTION(getPositionX) 
	#endif

	#ifndef GEODE_STATICS_setPositionY
		#define GEODE_STATICS_setPositionY
		GEODE_AS_STATIC_FUNCTION(setPositionY) 
	#endif

	#ifndef GEODE_STATICS_getPositionY
		#define GEODE_STATICS_getPositionY
		GEODE_AS_STATIC_FUNCTION(getPositionY) 
	#endif

	#ifndef GEODE_STATICS_setSkewX
		#define GEODE_STATICS_setSkewX
		GEODE_AS_STATIC_FUNCTION(setSkewX) 
	#endif

	#ifndef GEODE_STATICS_getSkewX
		#define GEODE_STATICS_getSkewX
		GEODE_AS_STATIC_FUNCTION(getSkewX) 
	#endif

	#ifndef GEODE_STATICS_setSkewY
		#define GEODE_STATICS_setSkewY
		GEODE_AS_STATIC_FUNCTION(setSkewY) 
	#endif

	#ifndef GEODE_STATICS_getSkewY
		#define GEODE_STATICS_getSkewY
		GEODE_AS_STATIC_FUNCTION(getSkewY) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_getAnchorPoint
		#define GEODE_STATICS_getAnchorPoint
		GEODE_AS_STATIC_FUNCTION(getAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_getAnchorPointInPoints
		#define GEODE_STATICS_getAnchorPointInPoints
		GEODE_AS_STATIC_FUNCTION(getAnchorPointInPoints) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_getScaledContentSize
		#define GEODE_STATICS_getScaledContentSize
		GEODE_AS_STATIC_FUNCTION(getScaledContentSize) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_isVisible
		#define GEODE_STATICS_isVisible
		GEODE_AS_STATIC_FUNCTION(isVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_getRotation
		#define GEODE_STATICS_getRotation
		GEODE_AS_STATIC_FUNCTION(getRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_getRotationX
		#define GEODE_STATICS_getRotationX
		GEODE_AS_STATIC_FUNCTION(getRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_getRotationY
		#define GEODE_STATICS_getRotationY
		GEODE_AS_STATIC_FUNCTION(getRotationY) 
	#endif

	#ifndef GEODE_STATICS_setOrderOfArrival
		#define GEODE_STATICS_setOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(setOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_getOrderOfArrival
		#define GEODE_STATICS_getOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(getOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_setGLServerState
		#define GEODE_STATICS_setGLServerState
		GEODE_AS_STATIC_FUNCTION(setGLServerState) 
	#endif

	#ifndef GEODE_STATICS_getGLServerState
		#define GEODE_STATICS_getGLServerState
		GEODE_AS_STATIC_FUNCTION(getGLServerState) 
	#endif

	#ifndef GEODE_STATICS_ignoreAnchorPointForPosition
		#define GEODE_STATICS_ignoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_isIgnoreAnchorPointForPosition
		#define GEODE_STATICS_isIgnoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(isIgnoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_getChildByTag
		#define GEODE_STATICS_getChildByTag
		GEODE_AS_STATIC_FUNCTION(getChildByTag) 
	#endif

	#ifndef GEODE_STATICS_getChildren
		#define GEODE_STATICS_getChildren
		GEODE_AS_STATIC_FUNCTION(getChildren) 
	#endif

	#ifndef GEODE_STATICS_setParent
		#define GEODE_STATICS_setParent
		GEODE_AS_STATIC_FUNCTION(setParent) 
	#endif

	#ifndef GEODE_STATICS_getParent
		#define GEODE_STATICS_getParent
		GEODE_AS_STATIC_FUNCTION(getParent) 
	#endif

	#ifndef GEODE_STATICS_removeFromParent
		#define GEODE_STATICS_removeFromParent
		GEODE_AS_STATIC_FUNCTION(removeFromParent) 
	#endif

	#ifndef GEODE_STATICS_removeFromParentAndCleanup
		#define GEODE_STATICS_removeFromParentAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeFromParentAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_removeMeAndCleanup
		#define GEODE_STATICS_removeMeAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeChildByTag
		#define GEODE_STATICS_removeChildByTag
		GEODE_AS_STATIC_FUNCTION(removeChildByTag) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildren
		#define GEODE_STATICS_removeAllChildren
		GEODE_AS_STATIC_FUNCTION(removeAllChildren) 
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

	#ifndef GEODE_STATICS_getGrid
		#define GEODE_STATICS_getGrid
		GEODE_AS_STATIC_FUNCTION(getGrid) 
	#endif

	#ifndef GEODE_STATICS_setGrid
		#define GEODE_STATICS_setGrid
		GEODE_AS_STATIC_FUNCTION(setGrid) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_getUserObject
		#define GEODE_STATICS_getUserObject
		GEODE_AS_STATIC_FUNCTION(getUserObject) 
	#endif

	#ifndef GEODE_STATICS_setUserObject
		#define GEODE_STATICS_setUserObject
		GEODE_AS_STATIC_FUNCTION(setUserObject) 
	#endif

	#ifndef GEODE_STATICS_getShaderProgram
		#define GEODE_STATICS_getShaderProgram
		GEODE_AS_STATIC_FUNCTION(getShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_setShaderProgram
		#define GEODE_STATICS_setShaderProgram
		GEODE_AS_STATIC_FUNCTION(setShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_getCamera
		#define GEODE_STATICS_getCamera
		GEODE_AS_STATIC_FUNCTION(getCamera) 
	#endif

	#ifndef GEODE_STATICS_isRunning
		#define GEODE_STATICS_isRunning
		GEODE_AS_STATIC_FUNCTION(isRunning) 
	#endif

	#ifndef GEODE_STATICS_registerScriptHandler
		#define GEODE_STATICS_registerScriptHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptHandler
		#define GEODE_STATICS_unregisterScriptHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_onExitTransitionDidStart
		#define GEODE_STATICS_onExitTransitionDidStart
		GEODE_AS_STATIC_FUNCTION(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_STATICS_cleanup
		#define GEODE_STATICS_cleanup
		GEODE_AS_STATIC_FUNCTION(cleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setActionManager
		#define GEODE_STATICS_setActionManager
		GEODE_AS_STATIC_FUNCTION(setActionManager) 
	#endif

	#ifndef GEODE_STATICS_getActionManager
		#define GEODE_STATICS_getActionManager
		GEODE_AS_STATIC_FUNCTION(getActionManager) 
	#endif

	#ifndef GEODE_STATICS_setScheduler
		#define GEODE_STATICS_setScheduler
		GEODE_AS_STATIC_FUNCTION(setScheduler) 
	#endif

	#ifndef GEODE_STATICS_getScheduler
		#define GEODE_STATICS_getScheduler
		GEODE_AS_STATIC_FUNCTION(getScheduler) 
	#endif

	#ifndef GEODE_STATICS_updateTransform
		#define GEODE_STATICS_updateTransform
		GEODE_AS_STATIC_FUNCTION(updateTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToParentTransform
		#define GEODE_STATICS_nodeToParentTransform
		GEODE_AS_STATIC_FUNCTION(nodeToParentTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToParentTransformFast
		#define GEODE_STATICS_nodeToParentTransformFast
		GEODE_AS_STATIC_FUNCTION(nodeToParentTransformFast) 
	#endif

	#ifndef GEODE_STATICS_parentToNodeTransform
		#define GEODE_STATICS_parentToNodeTransform
		GEODE_AS_STATIC_FUNCTION(parentToNodeTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToWorldTransform
		#define GEODE_STATICS_nodeToWorldTransform
		GEODE_AS_STATIC_FUNCTION(nodeToWorldTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToWorldTransformFast
		#define GEODE_STATICS_nodeToWorldTransformFast
		GEODE_AS_STATIC_FUNCTION(nodeToWorldTransformFast) 
	#endif

	#ifndef GEODE_STATICS_worldToNodeTransform
		#define GEODE_STATICS_worldToNodeTransform
		GEODE_AS_STATIC_FUNCTION(worldToNodeTransform) 
	#endif

	#ifndef GEODE_STATICS_addComponent
		#define GEODE_STATICS_addComponent
		GEODE_AS_STATIC_FUNCTION(addComponent) 
	#endif

	#ifndef GEODE_STATICS_removeComponent
		#define GEODE_STATICS_removeComponent
		GEODE_AS_STATIC_FUNCTION(removeComponent) 
	#endif

	#ifndef GEODE_STATICS_removeAllComponents
		#define GEODE_STATICS_removeAllComponents
		GEODE_AS_STATIC_FUNCTION(removeAllComponents) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_updateTweenActionInt
		#define GEODE_STATICS_updateTweenActionInt
		GEODE_AS_STATIC_FUNCTION(updateTweenActionInt) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCNode>>::ModifyBase;
		using Base = cocos2d::CCNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250d20, Default, cocos2d::CCNode, create, )
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x2501f0, Default, cocos2d::CCNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x250390, Default, cocos2d::CCNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252000, Default, cocos2d::CCNode, getActionByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250cb0, Default, cocos2d::CCNode, boundingBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252c70, Default, cocos2d::CCNode, convertToNodeSpace, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252cb0, Default, cocos2d::CCNode, convertToWorldSpace, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252e10, Default, cocos2d::CCNode, convertTouchToNodeSpace, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252020, Default, cocos2d::CCNode, numberOfRunningActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251e80, Default, cocos2d::CCNode, pauseSchedulerAndActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251c40, Default, cocos2d::CCNode, resumeSchedulerAndActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251f90, Default, cocos2d::CCNode, runAction, cocos2d::CCAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2521c0, Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252220, Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2521f0, Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE, float, unsigned int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252250, Default, cocos2d::CCNode, scheduleOnce, cocos2d::SEL_SCHEDULE, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2520a0, Default, cocos2d::CCNode, scheduleUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2520d0, Default, cocos2d::CCNode, scheduleUpdateWithPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252100, Default, cocos2d::CCNode, scheduleUpdateWithPriorityLua, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251fc0, Default, cocos2d::CCNode, stopAction, cocos2d::CCAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251fe0, Default, cocos2d::CCNode, stopActionByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250e10, Default, cocos2d::CCNode, stopAllActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252280, Default, cocos2d::CCNode, unschedule, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250e30, Default, cocos2d::CCNode, unscheduleAllSelectors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252170, Default, cocos2d::CCNode, unscheduleUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250900, Default, cocos2d::CCNode, getChildrenCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250a80, Default, cocos2d::CCNode, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2522a0, Default, cocos2d::CCNode, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250530, Default, cocos2d::CCNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2505c0, Default, cocos2d::CCNode, setZOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2505b0, Default, cocos2d::CCNode, _setZOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2505a0, Default, cocos2d::CCNode, getZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250610, Default, cocos2d::CCNode, setVertexZ, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250600, Default, cocos2d::CCNode, getVertexZ, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250730, Default, cocos2d::CCNode, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250720, Default, cocos2d::CCNode, getScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250760, Default, cocos2d::CCNode, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250750, Default, cocos2d::CCNode, getScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2506e0, Default, cocos2d::CCNode, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2506d0, Default, cocos2d::CCNode, getScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250700, Default, cocos2d::CCNode, setScale, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250790, Default, cocos2d::CCNode, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250780, Default, cocos2d::CCNode, getPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2507d0, Default, cocos2d::CCNode, setPosition, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2507b0, Default, cocos2d::CCNode, getPosition, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250830, Default, cocos2d::CCNode, setPositionX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250810, Default, cocos2d::CCNode, getPositionX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250870, Default, cocos2d::CCNode, setPositionY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250820, Default, cocos2d::CCNode, getPositionY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250550, Default, cocos2d::CCNode, setSkewX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250540, Default, cocos2d::CCNode, getSkewX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250580, Default, cocos2d::CCNode, setSkewY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250570, Default, cocos2d::CCNode, getSkewY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250a00, Default, cocos2d::CCNode, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2509f0, Default, cocos2d::CCNode, getAnchorPoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2509e0, Default, cocos2d::CCNode, getAnchorPointInPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250ac0, Default, cocos2d::CCNode, setContentSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250a90, Default, cocos2d::CCNode, getScaledContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2509d0, Default, cocos2d::CCNode, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2509c0, Default, cocos2d::CCNode, isVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250630, Default, cocos2d::CCNode, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250620, Default, cocos2d::CCNode, getRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250680, Default, cocos2d::CCNode, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250670, Default, cocos2d::CCNode, getRotationX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2506b0, Default, cocos2d::CCNode, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2506a0, Default, cocos2d::CCNode, getRotationY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250be0, Default, cocos2d::CCNode, setOrderOfArrival, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250bd0, Default, cocos2d::CCNode, getOrderOfArrival, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250c20, Default, cocos2d::CCNode, setGLServerState, cocos2d::ccGLServerState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250c10, Default, cocos2d::CCNode, getGLServerState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250b80, Default, cocos2d::CCNode, ignoreAnchorPointForPosition, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250b70, Default, cocos2d::CCNode, isIgnoreAnchorPointForPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251070, Default, cocos2d::CCNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251050, Default, cocos2d::CCNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250f20, Default, cocos2d::CCNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250ea0, Default, cocos2d::CCNode, getChildByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2508b0, Default, cocos2d::CCNode, getChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250b60, Default, cocos2d::CCNode, setParent, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250b50, Default, cocos2d::CCNode, getParent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251090, Default, cocos2d::CCNode, removeFromParent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2510b0, Default, cocos2d::CCNode, removeFromParentAndCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2510e0, Default, cocos2d::CCNode, removeMeAndCleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251100, Default, cocos2d::CCNode, removeChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251120, Default, cocos2d::CCNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251270, Default, cocos2d::CCNode, removeChildByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251290, Default, cocos2d::CCNode, removeChildByTag, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2512d0, Default, cocos2d::CCNode, removeAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2512f0, Default, cocos2d::CCNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251410, Default, cocos2d::CCNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251550, Default, cocos2d::CCNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250970, Default, cocos2d::CCNode, getGrid, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250980, Default, cocos2d::CCNode, setGrid, cocos2d::CCGridBase*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250bb0, Default, cocos2d::CCNode, getUserData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250bc0, Default, cocos2d::CCNode, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250c00, Default, cocos2d::CCNode, getUserObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250c30, Default, cocos2d::CCNode, setUserObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250bf0, Default, cocos2d::CCNode, getShaderProgram, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250c70, Default, cocos2d::CCNode, setShaderProgram, cocos2d::CCGLProgram*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250920, Default, cocos2d::CCNode, getCamera, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250b40, Default, cocos2d::CCNode, isRunning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251ec0, Default, cocos2d::CCNode, registerScriptHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251ef0, Default, cocos2d::CCNode, unregisterScriptHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251b60, Default, cocos2d::CCNode, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251c80, Default, cocos2d::CCNode, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251da0, Default, cocos2d::CCNode, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251d00, Default, cocos2d::CCNode, onExitTransitionDidStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250d80, Default, cocos2d::CCNode, cleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251920, Default, cocos2d::CCNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251930, Default, cocos2d::CCNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251f30, Default, cocos2d::CCNode, setActionManager, cocos2d::CCActionManager*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251f80, Default, cocos2d::CCNode, getActionManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252040, Default, cocos2d::CCNode, setScheduler, cocos2d::CCScheduler*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252090, Default, cocos2d::CCNode, getScheduler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252f00, Default, cocos2d::CCNode, updateTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252310, Default, cocos2d::CCNode, nodeToParentTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252620, Default, cocos2d::CCNode, nodeToParentTransformFast, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252a90, Default, cocos2d::CCNode, parentToNodeTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252b10, Default, cocos2d::CCNode, nodeToWorldTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252ba0, Default, cocos2d::CCNode, nodeToWorldTransformFast, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252c30, Default, cocos2d::CCNode, worldToNodeTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252f70, Default, cocos2d::CCNode, addComponent, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252f90, Default, cocos2d::CCNode, removeComponent, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252fb0, Default, cocos2d::CCNode, removeComponent, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252fd0, Default, cocos2d::CCNode, removeAllComponents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252ee0, Default, cocos2d::CCNode, updateTweenAction, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252ef0, Default, cocos2d::CCNode, updateTweenActionInt, float, int)
		}
	};
}
