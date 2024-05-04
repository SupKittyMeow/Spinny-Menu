#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)
    
private:
    [[deprecated("EnhancedGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x591c40
     * @note[short] Android
     */
    bool init(char const* p0);
    
private:
    [[deprecated("EnhancedGameObject::updateState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateState(int p0);
public:

    /**
     * @note[short] MacOS: 0x588e40
     * @note[short] Windows: 0x145220
     * @note[short] Android
     */
    TodoReturn updateUserCoin();
    
private:
    [[deprecated("EnhancedGameObject::triggerAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAnimation();
public:

    /**
     * @note[short] MacOS: 0x592260
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("EnhancedGameObject::createRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRotateAction(float p0, int p1);
public:
    
private:
    [[deprecated("EnhancedGameObject::updateRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRotateAction(float p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::refreshRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshRotateAction();
public:
    
private:
    [[deprecated("EnhancedGameObject::resetSyncedAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSyncedAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::previewAnimateOnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn previewAnimateOnTrigger();
public:
    
private:
    [[deprecated("EnhancedGameObject::setupAnimationVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupAnimationVariables();
public:
    
private:
    [[deprecated("EnhancedGameObject::waitForAnimationTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitForAnimationTrigger();
public:

    /**
     * @note[short] MacOS: 0x592740
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x591f80
     * @note[short] Windows: 0x143380
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x595600
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS: 0x595660
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x5920f0
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS: 0x592020
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS: 0x5921c0
     * @note[short] Android
     */
    virtual TodoReturn animationTriggered();

    /**
     * @note[short] MacOS: 0x592100
     * @note[short] Android
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS: 0x592150
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS: 0x5921a0
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivated();

    /**
     * @note[short] MacOS: 0x5921e0
     * @note[short] Android
     */
    virtual TodoReturn saveActiveColors();

    /**
     * @note[short] MacOS: 0x591c80
     * @note[short] Android
     */
    virtual TodoReturn canAllowMultiActivate();

    /**
     * @note[short] MacOS: 0x1d2c10
     * @note[short] Android
     */
    virtual TodoReturn getHasSyncedAnimation();

    /**
     * @note[short] MacOS: 0x1d2c20
     * @note[short] Android
     */
    virtual TodoReturn getHasRotateAction();

    /**
     * @note[short] MacOS: 0x5920d0
     * @note[short] Android
     */
    virtual TodoReturn canMultiActivate(bool p0);

    /**
     * @note[short] MacOS: 0x592060
     * @note[short] Android
     */
    virtual TodoReturn powerOnObject(int p0);

    /**
     * @note[short] MacOS: 0x592080
     * @note[short] Android
     */
    virtual TodoReturn powerOffObject();

    /**
     * @note[short] MacOS: 0x1a38c0
     * @note[short] Android
     */
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x239c80
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] MacOS: 0x23bba0
     * @note[short] Android
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
    GEODE_PAD(37);
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    GEODE_PAD(3);
    float m_rotationSpeed;
    GEODE_PAD(12);
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    GEODE_PAD(15);
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    GEODE_PAD(4);
};
