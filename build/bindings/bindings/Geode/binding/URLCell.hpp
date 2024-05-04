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

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)
    
private:
    [[deprecated("URLCell::onURL not implemented")]]
    /**
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("URLCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x2264c0
     * @note[short] Windows: 0x8c190
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* p0);

    /**
     * @note[short] MacOS: 0x237810
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x237880
     * @note[short] Android
     */
    virtual void draw();
};
