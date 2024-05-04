#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)
    
private:
    [[deprecated("ParticleGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ParticleGameObject* create();
public:
    
private:
    [[deprecated("ParticleGameObject::setParticleString not implemented")]]
    /**
     * @note[short] Android
     */
    void setParticleString(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x19b470
     * @note[short] Android
     */
    void updateParticle();

    /**
     * @note[short] MacOS: 0x19a850
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x19b0d0
     * @note[short] Android
     */
    TodoReturn updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);
    
private:
    [[deprecated("ParticleGameObject::updateParticleScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleScale(float p0);
public:

    /**
     * @note[short] MacOS: 0x19ac10
     * @note[short] Android
     */
    void updateParticleStruct();
    
private:
    [[deprecated("ParticleGameObject::applyParticleSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticleGameObject::createParticlePreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticlePreviewArt();
public:
    
private:
    [[deprecated("ParticleGameObject::createAndAddCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndAddCustomParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticlePreviewArtOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticlePreviewArtOpacity(float p0);
public:

    /**
     * @note[short] MacOS: 0x19a820
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x19b8a0
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS: 0x19b910
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS: 0x19b980
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x19b7e0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x19b820
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS: 0x19b860
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS: 0x19bae0
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x19aa90
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x19ab60
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS: 0x19bcd0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x19bc90
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS: 0x19bed0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x19ac40
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();

    /**
     * @note[short] MacOS: 0x19b1f0
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();

    /**
     * @note[short] MacOS: 0x19b270
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();

    /**
     * @note[short] MacOS: 0x19b9f0
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x19ab20
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();

    /**
     * @note[short] MacOS: 0x1d2bf0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x1d2c00
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x19bbd0
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x19bc30
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x19bd30
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] MacOS: 0x19be80
     * @note[short] Android
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
    gd::string m_particleData;
    bool m_updatedParticleData;
    GEODE_PAD(271);
    bool m_hasUniformObjectColor;
    GEODE_PAD(7);
    bool m_shouldQuickStart;
    GEODE_PAD(15);
};
