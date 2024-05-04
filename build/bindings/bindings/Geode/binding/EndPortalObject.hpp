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

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] MacOS: 0x379e40
     * @note[short] Android
     */
    static EndPortalObject* create();
    
private:
    [[deprecated("EndPortalObject::getSpawnPos not implemented")]]
    /**
     * @note[short] Windows: 0xeaa80
     * @note[short] Android
     */
    TodoReturn getSpawnPos();
public:

    /**
     * @note[short] MacOS: 0x37a210
     * @note[short] Windows: 0xea8f0
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::_ccColor3B p0);
    
private:
    [[deprecated("EndPortalObject::updateEndPos not implemented")]]
    /**
     * @note[short] Windows: 0xeac60
     * @note[short] Android
     */
    TodoReturn updateEndPos(bool p0);
public:

    /**
     * @note[short] MacOS: 0x37a2d0
     * @note[short] Windows: 0xeaa00
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x379ee0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x37a3e0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x37a4f0
     * @note[short] Android
     */
    virtual void setVisible(bool p0);
};
