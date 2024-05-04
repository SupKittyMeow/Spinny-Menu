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

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)
    
private:
    [[deprecated("AchievementCell::loadFromDict not implemented")]]
    /**
     * @note[short] Windows: 0x7c270
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("AchievementCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x7d0a0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x22d070
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x22d110
     * @note[short] Android
     */
    virtual void draw();
};
