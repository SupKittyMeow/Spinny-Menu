#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)
    
private:
    [[deprecated("CCNodeContainer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCNodeContainer* create();
public:

    /**
     * @note[short] MacOS: 0x150e60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x150e70
     * @note[short] Android
     */
    virtual void visit();
};
