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

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)
    
private:
    [[deprecated("LevelListCell::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelListCell* create(float p0, float p1);
public:
    
private:
    [[deprecated("LevelListCell::onListInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x224660
     * @note[short] Windows: 0x8adb0
     * @note[short] Android
     */
    void loadFromList(GJLevelList* p0);
    
private:
    [[deprecated("LevelListCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x237590
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2376d0
     * @note[short] Android
     */
    virtual void draw();
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
