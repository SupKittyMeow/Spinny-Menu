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

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] MacOS: 0x22d270
     * @note[short] Android
     */
    static LevelCell* create(float p0, float p1);

    /**
     * @note[short] MacOS: 0x230550
     * @note[short] Windows: 0x80910
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2303f0
     * @note[short] Windows: 0x80820
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelCell::onToggle not implemented")]]
    /**
     * @note[short] Windows: 0x7d580
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:

    /**
     * @note[short] MacOS: 0x223890
     * @note[short] Windows: 0x7d3f0
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* p0);
    
private:
    [[deprecated("LevelCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x22cde0
     * @note[short] Android
     */
    TodoReturn updateCellMode(int p0);

    /**
     * @note[short] MacOS: 0x22d440
     * @note[short] Windows: 0x7fe70
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] MacOS: 0x22dcd0
     * @note[short] Windows: 0x7d5a0
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS: 0x22d410
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x230580
     * @note[short] Android
     */
    virtual void draw();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
