#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x52d700
     * @note[short] Windows: 0x118c50
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType p0);

    /**
     * @note[short] MacOS: 0x52d830
     * @note[short] Windows: 0x118d40
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x52d460
     * @note[short] Windows: 0x118e40
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, bool p16, bool p17, bool p18, int p19, int p20, int p21);
    
private:
    [[deprecated("GJSearchObject::init not implemented")]]
    /**
     * @note[short] Windows: 0x118ff0
     * @note[short] Android
     */
    bool init(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, bool p16, bool p17, bool p18, int p19, int p20, int p21);
public:
    
private:
    [[deprecated("GJSearchObject::getSearchKey not implemented")]]
    /**
     * @note[short] Windows: 0x1195c0
     * @note[short] Android
     */
    char const* getSearchKey(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, bool p16, bool p17, bool p18, int p19, int p20, int p21);
public:

    /**
     * @note[short] MacOS: 0x52df30
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int p0);
    
private:
    [[deprecated("GJSearchObject::getNextPageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getNextPageKey();
public:

    /**
     * @note[short] MacOS: 0x52df10
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();

    /**
     * @note[short] MacOS: 0x52e160
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();

    /**
     * @note[short] MacOS: 0x5114d0
     * @note[short] Windows: 0x119190
     * @note[short] Android
     */
    char const* getKey();

    /**
     * @note[short] MacOS: 0x50aa20
     * @note[short] Windows: 0x1188a0
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* p0);

    /**
     * @note[short] MacOS: 0x52e180
     * @note[short] Windows: 0x1197a0
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
