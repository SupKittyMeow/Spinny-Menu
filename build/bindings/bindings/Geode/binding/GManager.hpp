#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)
    
private:
    [[deprecated("GManager::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getSaveString();
public:
    
private:
    [[deprecated("GManager::getCompressedSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompressedSaveString();
public:
    
private:
    [[deprecated("GManager::tryLoadData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryLoadData(DS_Dictionary* p0, gd::string const& p1);
public:
    
private:
    [[deprecated("GManager::loadFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromString(gd::string& p0);
public:

    /**
     * @note[short] MacOS: 0x488350
     * @note[short] Android
     */
    TodoReturn loadDataFromFile(gd::string const& p0);
    
private:
    [[deprecated("GManager::loadFromCompressedString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromCompressedString(gd::string& p0);
public:
    
private:
    [[deprecated("GManager::load not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn load();
public:

    /**
     * @note[short] Out of line
     */
    void save();

    /**
     * @note[short] MacOS: 0x488290
     * @note[short] Android
     */
    TodoReturn saveData(DS_Dictionary* p0, gd::string p1);

    /**
     * @note[short] MacOS: 0x4881c0
     * @note[short] Windows: 0x472f0
     * @note[short] Android
     */
    void saveGMTo(gd::string p0);
	inline GManager() {}

    /**
     * @note[short] MacOS: 0x487ec0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x487ee0
     * @note[short] Windows: 0x47030
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS: 0x488340
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x488910
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x488920
     * @note[short] Android
     */
    virtual void firstLoad();
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
