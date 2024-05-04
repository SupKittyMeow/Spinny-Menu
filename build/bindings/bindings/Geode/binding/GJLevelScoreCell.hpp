#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)
    
private:
    [[deprecated("GJLevelScoreCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x229660
     * @note[short] Windows: 0x874f0
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJLevelScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x234030
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x234080
     * @note[short] Android
     */
    virtual void draw();
};
