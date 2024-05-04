#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)
    
private:
    [[deprecated("SetGroupIDLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x2ef4a0
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetGroupIDLayer::onAddGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onArrowLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onArrowRight not implemented")]]
    /**
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onSmoothEase not implemented")]]
    /**
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onToggleGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onZLayerShift not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onNextGroupID1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onAddGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onToggleSelectedOrder not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onNextFreeEditorLayer1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onNextFreeEditorLayer2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onNextFreeOrderChannel not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onAnim not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onCopy not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onArrow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onArrow(int p0, int p1);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onPaste not implemented")]]
    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onExtra2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::addGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGroupID(int p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateZOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZOrder();
public:
    
private:
    [[deprecated("SetGroupIDLayer::removeGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGroupID(int p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, int p1, int p2, gd::string p3, float p4, int p5);
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorOrder();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateZOrderLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZOrderLabel();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorLabel2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel2();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateGroupIDLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDLabel();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateOrderChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOrderChannel();
public:
    
private:
    [[deprecated("SetGroupIDLayer::callRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn callRemoveFromGroup(float p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorLayerID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLayerID();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetGroupIDLayer::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorLayerID2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLayerID2();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateGroupIDButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDButtons();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateEditorOrderLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorOrderLabel();
public:
    
private:
    [[deprecated("SetGroupIDLayer::updateOrderChannelLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOrderChannelLabel();
public:

    /**
     * @note[short] MacOS: 0x2f43c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2f3c40
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x2f3c80
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_array0;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_unkBool0;
    bool m_hasTargetObjects;
};
