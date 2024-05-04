#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CustomSongCell.hpp"

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)
    
private:
    [[deprecated("CustomMusicCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x82d40
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("CustomMusicCell::loadFromObject not implemented")]]
    /**
     * @note[short] Windows: 0x83240
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);
public:
};
