#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)
    
private:
    [[deprecated("GJActionManager::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJActionManager* create();
public:
    
private:
    [[deprecated("GJActionManager::getInternalAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getInternalAction(int p0);
public:

    /**
     * @note[short] MacOS: 0x5cdf00
     * @note[short] Android
     */
    void runInternalAction(cocos2d::CCAction* p0, cocos2d::CCNode* p1);

    /**
     * @note[short] MacOS: 0x5cdf50
     * @note[short] Android
     */
    void stopInternalAction(int p0);
    
private:
    [[deprecated("GJActionManager::updateInternalActions not implemented")]]
    /**
     * @note[short] Windows: 0x189e70
     * @note[short] Android
     */
    void updateInternalActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJActionManager::stopAllInternalActions not implemented")]]
    /**
     * @note[short] Android
     */
    void stopAllInternalActions();
public:

    /**
     * @note[short] MacOS: 0x5cded0
     * @note[short] Android
     */
    virtual bool init();
};
