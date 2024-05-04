#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS: 0x27b7d0
     * @note[short] Android
     */
    static EditorOptionsLayer* create();
    
private:
    [[deprecated("EditorOptionsLayer::onButtonRows not implemented")]]
    /**
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonsPerRow not implemented")]]
    /**
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x27c3f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x27ba30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x27ba60
     * @note[short] Android
     */
    virtual void setupOptions();
};
