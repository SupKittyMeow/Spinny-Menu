#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] MacOS: 0x5bd470
     * @note[short] Android
     */
    TodoReturn getCreatedLists(int p0);

    /**
     * @note[short] MacOS: 0x5bd3e0
     * @note[short] Android
     */
    TodoReturn getCreatedLevels(int p0);
    
private:
    [[deprecated("LocalLevelManager::getAllLevelsInDict not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();
public:
    
private:
    [[deprecated("LocalLevelManager::getMainLevelString not implemented")]]
    /**
     * @note[short] Windows: 0x273230
     * @note[short] Android
     */
    gd::string getMainLevelString(int p0);
public:
    
private:
    [[deprecated("LocalLevelManager::getAllLevelsWithName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllLevelsWithName(gd::string p0);
public:
    
private:
    [[deprecated("LocalLevelManager::getLevelsInNameGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLevelsInNameGroups();
public:
	inline static LocalLevelManager* get() {
        return LocalLevelManager::sharedState();
    }

    /**
     * @note[short] MacOS: 0x5bc220
     * @note[short] Windows: 0x272f00
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();
    
private:
    [[deprecated("LocalLevelManager::reorderLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevels();
public:
    
private:
    [[deprecated("LocalLevelManager::moveLevelToTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToTop(GJGameLevel* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::updateLevelOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelOrder();
public:
    
private:
    [[deprecated("LocalLevelManager::updateLevelRevision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelRevision();
public:
    
private:
    [[deprecated("LocalLevelManager::markLevelsAsUnmodified not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelsAsUnmodified();
public:

    /**
     * @note[short] MacOS: 0x5bc400
     * @note[short] Windows: 0x2730a0
     * @note[short] Android
     */
    TodoReturn tryLoadMainLevelString(int p0);

    /**
     * @note[short] MacOS: 0x5bc3c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x5bd590
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x5bd5f0
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x5bd500
     * @note[short] Android
     */
    virtual void firstLoad();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_LLM03;
    gd::map<int, gd::string> m_mainLevels;
};
