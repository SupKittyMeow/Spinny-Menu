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
#include "TextInputDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"
#include "MusicBrowserDelegate.hpp"

class CustomSongLayer : public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)
    
private:
    [[deprecated("CustomSongLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::onCreateLines not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSongBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onMusicBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onNewgroundsBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::showNewgroundsMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void showNewgroundsMessage();
public:

    /**
     * @note[short] MacOS: 0x1f50c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x1f51a0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x1f4c90
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1f4c30
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1f4bd0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1f4cb0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x1f4d70
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x1f4f60
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

    /**
     * @note[short] MacOS: 0x1f5010
     * @note[short] Android
     */
    virtual void musicBrowserClosed(MusicBrowser* p0);
};
