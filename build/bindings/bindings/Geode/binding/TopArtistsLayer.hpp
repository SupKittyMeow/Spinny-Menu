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
#include "OnlineListDelegate.hpp"

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)
    
private:
    [[deprecated("TopArtistsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TopArtistsLayer* create();
public:
    
private:
    [[deprecated("TopArtistsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x2ee360
     * @note[short] Android
     */
    void setupPageInfo(gd::string p0, char const* p1);
    
private:
    [[deprecated("TopArtistsLayer::setupLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("TopArtistsLayer::loadPage not implemented")]]
    /**
     * @note[short] Android
     */
    void loadPage(int p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x2ed8a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2ee210
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x2ee1a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2eebf0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x2ee260
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS: 0x2ee320
     * @note[short] Android
     */
    virtual void loadListFailed(char const* p0);
};
