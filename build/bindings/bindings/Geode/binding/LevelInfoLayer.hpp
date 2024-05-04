#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x297220
     * @note[short] Windows: 0x24ccd0
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS: 0x2973f0
     * @note[short] Windows: 0x24cd80
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS: 0x29c320
     * @note[short] Windows: 0x24efc0
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x29c620
     * @note[short] Windows: 0x24eda0
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29c030
     * @note[short] Windows: 0x2521e0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29ba30
     * @note[short] Windows: 0x251e00
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29b8d0
     * @note[short] Windows: 0x251cd0
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29c580
     * @note[short] Windows: 0x24eee0
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onPlayReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onOwnerDelete not implemented")]]
    /**
     * @note[short] Windows: 0x251b50
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x299740
     * @note[short] Windows: 0x252180
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29bc30
     * @note[short] Windows: 0x251db0
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Windows: 0x252150
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x29b7e0
     * @note[short] Windows: 0x24f030
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29bfb0
     * @note[short] Windows: 0x2533e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29b7b0
     * @note[short] Windows: 0x2516c0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29b850
     * @note[short] Windows: 0x251e40
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2997c0
     * @note[short] Windows: 0x250da0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onRate not implemented")]]
    /**
     * @note[short] Windows: 0x251cd0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onClone not implemented")]]
    /**
     * @note[short] Windows: 0x2516f0
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onDelete not implemented")]]
    /**
     * @note[short] Windows: 0x251aa0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x29c2c0
     * @note[short] Windows: 0x24f090
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29b6e0
     * @note[short] Windows: 0x252090
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x29bd60
     * @note[short] Windows: 0x2518d0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x29b5f0
     * @note[short] Android
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x299f40
     * @note[short] Windows: 0x1b950
     * @note[short] Android
     */
    void downloadLevel();

    /**
     * @note[short] MacOS: 0x29deb0
     * @note[short] Android
     */
    TodoReturn loadLevelStep();

    /**
     * @note[short] MacOS: 0x29be90
     * @note[short] Windows: 0x2516f0
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] MacOS: 0x29a030
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS: 0x29dc90
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] MacOS: 0x29d7f0
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] MacOS: 0x29c3a0
     * @note[short] Android
     */
    TodoReturn confirmMoveToTop(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();
public:

    /**
     * @note[short] MacOS: 0x29aec0
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS: 0x29c920
     * @note[short] Windows: 0x252490
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS: 0x29ba90
     * @note[short] Android
     */
    TodoReturn updateSideButtons();

    /**
     * @note[short] MacOS: 0x29bc80
     * @note[short] Android
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x29c480
     * @note[short] Android
     */
    TodoReturn confirmMoveToBottom(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::shouldDownloadLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldDownloadLevel();
public:

    /**
     * @note[short] MacOS: 0x29ab80
     * @note[short] Android
     */
    void setupPlatformerStats();
    
private:
    [[deprecated("LevelInfoLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(GJGameLevel* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x29dd60
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] MacOS: 0x29de20
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] MacOS: 0x29df60
     * @note[short] Android
     */
    TodoReturn playStep4();
    
private:
    [[deprecated("LevelInfoLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] MacOS: 0x29e8f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x29e920
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS: 0x29e130
     * @note[short] Android
     */
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);

    /**
     * @note[short] MacOS: 0x29c680
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS: 0x29d300
     * @note[short] Windows: 0x250750
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS: 0x29d690
     * @note[short] Windows: 0x250750
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);

    /**
     * @note[short] MacOS: 0x29d780
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] MacOS: 0x29d970
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int p0);

    /**
     * @note[short] MacOS: 0x29da70
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int p0);

    /**
     * @note[short] MacOS: 0x29db80
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int p0);

    /**
     * @note[short] MacOS: 0x29e5e0
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS: 0x29e610
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS: 0x29e720
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x29c7b0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    void* m_unk0;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    CCMenuItemToggler* m_ldmToggler;
    cocos2d::CCLabelBMFont* m_ldmLabel;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    int m_unk6;
    int m_unk7;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    GEODE_PAD(16);
    bool m_challenge;
    GEODE_PAD(8);
    cocos2d::CCSprite* m_playSprite;
    void* m_unk11;
    CustomSongWidget* m_songWidget;
};
