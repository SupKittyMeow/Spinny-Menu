#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "RingObject.hpp"

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] MacOS: 0x1a5aa0
     * @note[short] Windows: 0x3a0e50
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* p0, bool p1);
    
private:
    [[deprecated("TeleportPortalObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x1a5d60
     * @note[short] Android
     */
    TodoReturn getTeleportXOff(cocos2d::CCNode* p0);
    
private:
    [[deprecated("TeleportPortalObject::setPositionOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setStartPosOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x1a7d10
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1a5e40
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x1a5ef0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x1a5c90
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS: 0x1a6040
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x1a5f80
     * @note[short] Android
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] MacOS: 0x1a5fe0
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS: 0x1a5f50
     * @note[short] Android
     */
    virtual void setRotation2(float p0);

    /**
     * @note[short] MacOS: 0x1a5f60
     * @note[short] Android
     */
    virtual void addToGroup2(int p0);

    /**
     * @note[short] MacOS: 0x1a5f70
     * @note[short] Android
     */
    virtual void removeFromGroup2(int p0);
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    int m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_property443;
    bool m_property464;
    bool m_property510;
    bool m_property591;
    GJBaseGameLayer* m_gameLayer;
};
