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

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)
    
private:
    [[deprecated("SpecialAnimGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x19c940
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x19c920
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x19c9a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x19c8e0
     * @note[short] Android
     */
    virtual TodoReturn updateMainColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x19c900
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x23ba50
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
};
