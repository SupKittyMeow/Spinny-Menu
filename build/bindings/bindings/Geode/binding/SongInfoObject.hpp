#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x55fb90
     * @note[short] Android
     */
    static SongInfoObject* create(int p0);

    /**
     * @note[short] MacOS: 0x55d1d0
     * @note[short] Android
     */
    static SongInfoObject* create(int p0, gd::string p1, gd::string p2, int p3, float p4, gd::string p5, gd::string p6, gd::string p7, int p8);

    /**
     * @note[short] MacOS: 0x557250
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS: 0x55fe20
     * @note[short] Android
     */
    bool init(int p0, gd::string p1, gd::string p2, int p3, float p4, gd::string p5, gd::string p6, gd::string p7, int p8);
    
private:
    [[deprecated("SongInfoObject::getTagsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTagsString();
public:
    
private:
    [[deprecated("SongInfoObject::containsTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn containsTag(int p0);
public:

    /**
     * @note[short] MacOS: 0x560020
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("SongInfoObject::addTags not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTags(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x560500
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x560650
     * @note[short] Android
     */
    virtual bool canEncode();
    int m_songID;
    gd::string m_songName;
    gd::string m_artistName;
    gd::string m_youtubeVideo;
    gd::string m_youtubeChannel;
    gd::string m_songUrl;
    gd::string m_artistID;
    float m_fileSize;
    bool m_isUnkownSong;
    int m_priority;
};
