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

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)
    
private:
    [[deprecated("StatsCell::getTitleFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTitleFromKey(char const* p0);
public:
    
private:
    [[deprecated("StatsCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x7d0a0
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x225a30
     * @note[short] Windows: 0x81bd0
     * @note[short] Android
     */
    void loadFromObject(StatsObject* p0);

    /**
     * @note[short] MacOS: 0x231150
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x231bf0
     * @note[short] Windows: 0x7d0f0
     * @note[short] Android
     */
    virtual void draw();
};
