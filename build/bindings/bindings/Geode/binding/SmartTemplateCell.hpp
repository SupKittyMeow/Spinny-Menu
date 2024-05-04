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

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)
    
private:
    [[deprecated("SmartTemplateCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SmartTemplateCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x8ab60
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x22bb00
     * @note[short] Windows: 0x8a860
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* p0);

    /**
     * @note[short] MacOS: 0x237000
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2370d0
     * @note[short] Android
     */
    virtual void draw();
};
