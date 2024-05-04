#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "AdvancedFollowTriggerObject.hpp"

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)
    
private:
    [[deprecated("AdvancedFollowEditObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AdvancedFollowEditObject* create(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowEditObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x198350
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1977d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
