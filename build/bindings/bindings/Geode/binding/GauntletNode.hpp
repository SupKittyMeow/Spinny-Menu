#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)
    
private:
    [[deprecated("GauntletNode::create not implemented")]]
    /**
     * @note[short] Windows: 0x185160
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* p0);
public:

    /**
     * @note[short] MacOS: 0x53ed50
     * @note[short] Windows: 0x185220
     * @note[short] Android
     */
    bool init(GJMapPack* p0);
    
private:
    [[deprecated("GauntletNode::onClaimReward not implemented")]]
    /**
     * @note[short] Windows: 0x1865e0
     * @note[short] Android
     */
    void onClaimReward();
public:

    /**
     * @note[short] MacOS: 0x5403e0
     * @note[short] Windows: 0x186a70
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType p0);

    /**
     * @note[short] MacOS: 0x5408a0
     * @note[short] Windows: 0x186610
     * @note[short] Android
     */
    gd::string frameForType(GauntletType p0);
};
