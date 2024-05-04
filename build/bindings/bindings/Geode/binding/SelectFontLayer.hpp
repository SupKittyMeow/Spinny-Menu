#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x277c60
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS: 0x277da0
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS: 0x2783b0
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x278380
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x278450
     * @note[short] Android
     */
    TodoReturn updateFontLabel();

    /**
     * @note[short] MacOS: 0x278560
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
