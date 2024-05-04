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

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x5efc80
     * @note[short] Windows: 0x260c80
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS: 0x5f2b30
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onFollowed not implemented")]]
    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x5f2950
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2c30
     * @note[short] Windows: 0x262300
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2910
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2bb0
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f29d0
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2a10
     * @note[short] Windows: 0x262050
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f28d0
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2b70
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x5f25d0
     * @note[short] Windows: 0x262790
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2990
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2bf0
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f2af0
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onFriends not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::selectSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::audioPrevious not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioPrevious(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::toggleSongNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSongNodes(bool p0, bool p1);
public:
    
private:
    [[deprecated("MoreSearchLayer::updateAudioLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAudioLabel();
public:

    /**
     * @note[short] MacOS: 0x5f26b0
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    
private:
    [[deprecated("MoreSearchLayer::audioNext not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioNext(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS: 0x5f11e0
     * @note[short] Windows: 0x260d20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x5f33b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5f3240
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x5f3300
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
};
