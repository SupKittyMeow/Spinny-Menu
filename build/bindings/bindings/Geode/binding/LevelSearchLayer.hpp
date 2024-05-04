#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x5ebb80
     * @note[short] Windows: 0x25c4e0
     * @note[short] Android
     */
    static LevelSearchLayer* create(int p0);

    /**
     * @note[short] MacOS: 0x5eba40
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS: 0x5ebc90
     * @note[short] Windows: 0x25c580
     * @note[short] Android
     */
    bool init(int p0);
	inline char const* getDiffKey(int diff) {
		return cocos2d::CCString::createWithFormat("D%i", diff)->getCString();
	}
	inline char const* getTimeKey(int time) {
		return cocos2d::CCString::createWithFormat("T%i", time)->getCString();
	}
	inline gd::string getLevelLenKey() {
		return GameLevelManager::sharedState()->getLengthStr(checkTime(0), checkTime(1), checkTime(2), checkTime(3), checkTime(4), checkTime(5));
	}

    /**
     * @note[short] MacOS: 0x5f0380
     * @note[short] Windows: 0x25f210
     * @note[short] Android
     */
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x5f0710
     * @note[short] Android
     */
    gd::string getSearchDiffKey();

    /**
     * @note[short] MacOS: 0x5eee90
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eec10
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eead0
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5f08c0
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eeb70
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eecb0
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ee380
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ee800
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eedf0
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ee360
     * @note[short] Windows: 0x25e040
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ef490
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eea30
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ee920
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ef6d0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
	inline void onClose(cocos2d::CCObject* sender) {
		m_searchInput->onClickTrackNode(false);
	}

    /**
     * @note[short] MacOS: 0x5eed50
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ee6f0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5eef30
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x5ef650
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x5ef4d0
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x5efdc0
     * @note[short] Android
     */
    void clearFilters();

    /**
     * @note[short] MacOS: 0x5ef890
     * @note[short] Android
     */
    void toggleTimeNum(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x5eefd0
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x5ee3d0
     * @note[short] Windows: 0x25ef40
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);

    /**
     * @note[short] MacOS: 0x5ee280
     * @note[short] Windows: 0x25dfc0
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x5ef720
     * @note[short] Android
     */
    void toggleDifficultyNum(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x5f0960
     * @note[short] Android
     */
    bool checkDiff(int p0);

    /**
     * @note[short] MacOS: 0x5f0a50
     * @note[short] Android
     */
    bool checkTime(int p0);

    /**
     * @note[short] MacOS: 0x5f0b60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5f0100
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5f01c0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5f0290
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5f0090
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x5efb80
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int p0);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
