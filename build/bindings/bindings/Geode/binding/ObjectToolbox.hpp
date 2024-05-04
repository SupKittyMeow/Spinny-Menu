#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x62daa0
     * @note[short] Windows: 0x286590
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();

    /**
     * @note[short] MacOS: 0x6dda40
     * @note[short] Android
     */
    const char* intKeyToFrame(int objectID);
    
private:
    [[deprecated("ObjectToolbox::gridNodeSizeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    float gridNodeSizeForKey(int p0);
public:
    
private:
    [[deprecated("ObjectToolbox::perspectiveBlockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveBlockFrame(int p0);
public:
    
private:
    [[deprecated("ObjectToolbox::allKeys not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn allKeys();
public:

    /**
     * @note[short] MacOS: 0x62dbe0
     * @note[short] Android
     */
    virtual bool init();
};
