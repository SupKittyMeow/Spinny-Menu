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

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)
    
private:
    [[deprecated("SongCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x225d30
     * @note[short] Windows: 0x82650
     * @note[short] Android
     */
    void loadFromObject(SongObject* p0);

    /**
     * @note[short] MacOS: 0x231e40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x231e80
     * @note[short] Android
     */
    virtual void draw();
};
