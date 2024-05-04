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

class ArtistCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ArtistCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtistCell, TableViewCell)
    
private:
    [[deprecated("ArtistCell::onNewgrounds not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ArtistCell::onYouTube not implemented")]]
    /**
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ArtistCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x226170
     * @note[short] Windows: 0x83840
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);

    /**
     * @note[short] MacOS: 0x2329c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x232b20
     * @note[short] Android
     */
    virtual void draw();
};
