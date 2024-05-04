#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";
    
private:
    [[deprecated("LevelTools::posForTime not implemented")]]
    /**
     * @note[short] Android
     */
    float posForTime(float p0, cocos2d::CCArray* p1, int p2, bool p3, int& p4);
public:
    
private:
    [[deprecated("LevelTools::timeForPos not implemented")]]
    /**
     * @note[short] Windows: 0x26fba0
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint p0, cocos2d::CCArray* p1, int p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9);
public:
    
private:
    [[deprecated("LevelTools::getAudioBPM not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAudioBPM(int p0);
public:
    
private:
    [[deprecated("LevelTools::urlForAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn urlForAudio(int p0);
public:
    
private:
    [[deprecated("LevelTools::getLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLevelList();
public:

    /**
     * @note[short] MacOS: 0x4d8da0
     * @note[short] Windows: 0x26e860
     * @note[short] Android
     */
    static gd::string getAudioTitle(int p0);

    /**
     * @note[short] MacOS: 0x4dc4f0
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int p0);
    
private:
    [[deprecated("LevelTools::nameForArtist not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nameForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::artistForAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn artistForAudio(int p0);
public:
    
private:
    [[deprecated("LevelTools::fbURLForArtist not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fbURLForArtist(int p0);
public:

    /**
     * @note[short] MacOS: 0x4dafa0
     * @note[short] Android
     */
    static gd::string getAudioString(int p0);
    
private:
    [[deprecated("LevelTools::ngURLForArtist not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ngURLForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::ytURLForArtist not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ytURLForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::getLastTimewarp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastTimewarp();
public:
    
private:
    [[deprecated("LevelTools::getAudioFileName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAudioFileName(int p0);
public:

    /**
     * @note[short] MacOS: 0x4dd230
     * @note[short] Windows: 0x270fe0
     * @note[short] Android
     */
    TodoReturn sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);
    
private:
    [[deprecated("LevelTools::valueForSpeedMod not implemented")]]
    /**
     * @note[short] Windows: 0x26fb50
     * @note[short] Android
     */
    TodoReturn valueForSpeedMod(int p0);
public:
    
private:
    [[deprecated("LevelTools::offsetBPMForTrack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn offsetBPMForTrack(int p0);
public:

    /**
     * @note[short] MacOS: 0x4dcac0
     * @note[short] Windows: 0x270ba0
     * @note[short] Android
     */
    static gd::string base64DecodeString(gd::string p0);
    
private:
    [[deprecated("LevelTools::base64EncodeString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn base64EncodeString(gd::string p0);
public:
    
private:
    [[deprecated("LevelTools::createStarPackDict not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStarPackDict();
public:
    
private:
    [[deprecated("LevelTools::posForTimeInternal not implemented")]]
    /**
     * @note[short] Windows: 0x270220
     * @note[short] Android
     */
    float posForTimeInternal(float p0, cocos2d::CCArray* p1, int p2, bool p3, bool p4, bool p5, int& p6, int p7);
public:
    
private:
    [[deprecated("LevelTools::toggleDebugLogging not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDebugLogging(bool p0);
public:
    
private:
    [[deprecated("LevelTools::verifyLevelIntegrity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyLevelIntegrity(gd::string p0, int p1);
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayRotated not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastGameplayRotated();
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayReversed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastGameplayReversed();
public:
    
private:
    [[deprecated("LevelTools::sortChannelOrderObjects not implemented")]]
    /**
     * @note[short] Windows: 0x270dc0
     * @note[short] Android
     */
    TodoReturn sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);
public:
    
private:
    [[deprecated("LevelTools::moveTriggerObjectsToArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x4d6840
     * @note[short] Windows: 0x26dda0
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int p0, bool p1);
};
