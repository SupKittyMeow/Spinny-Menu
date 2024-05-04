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
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)
    
private:
    [[deprecated("CustomSFXCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:
    
private:
    [[deprecated("CustomSFXCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x83100
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x2237a0
     * @note[short] Windows: 0x83010
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* p0);

    /**
     * @note[short] MacOS: 0x232460
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x232560
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x232480
     * @note[short] Android
     */
    virtual TodoReturn sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS: 0x232500
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();
};
