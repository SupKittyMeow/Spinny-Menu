#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJOptionsLayer* create(int p0);
public:

    /**
     * @note[short] MacOS: 0x279be0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GJOptionsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJOptionsLayer::addGVToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGVToggle(char const* p0, char const* p1, char const* p2);
public:

    /**
     * @note[short] MacOS: 0x250090
     * @note[short] Android
     */
    TodoReturn didToggleGV(gd::string p0);

    /**
     * @note[short] MacOS: 0x27b230
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::layerForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::nextPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);
public:

    /**
     * @note[short] MacOS: 0x27aea0
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::offsetToNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn offsetToNextPage();
public:

    /**
     * @note[short] MacOS: 0x27a4b0
     * @note[short] Android
     */
    TodoReturn addToggleInternal(char const* p0, int p1, bool p2, char const* p3);

    /**
     * @note[short] MacOS: 0x27ad90
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::infoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::pageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::layerKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::addToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, int p1, bool p2, char const* p3);
public:
    
private:
    [[deprecated("GJOptionsLayer::objectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);
public:

    /**
     * @note[short] MacOS: 0x27a390
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS: 0x2923c0
     * @note[short] Android
     */
    virtual TodoReturn didToggle(int p0);
};
