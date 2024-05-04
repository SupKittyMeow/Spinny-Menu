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
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] MacOS: 0x232080
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomSongCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:
    
private:
    [[deprecated("CustomSongCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x82d40
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x222fa0
     * @note[short] Windows: 0x82b40
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);

    /**
     * @note[short] MacOS: 0x232060
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x232270
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x232150
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);

    /**
     * @note[short] MacOS: 0x2321d0
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();

    /**
     * @note[short] MacOS: 0x232230
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();

    /**
     * @note[short] MacOS: 0x232250
     * @note[short] Android
     */
    virtual TodoReturn getLevelSettings();
    SongInfoObject* m_songInfoObject;
    bool m_unkBool;
};
