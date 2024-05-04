#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";
    
private:
    [[deprecated("GameToolbox::bounceTime not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn bounceTime(float p0);
public:
    
private:
    [[deprecated("GameToolbox::easeToText not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn easeToText(int p0);
public:

    /**
     * @note[short] MacOS: 0x4ccc30
     * @note[short] Android
     */
    static void fast_srand(unsigned long p0);
    
private:
    [[deprecated("GameToolbox::gen_random not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn gen_random(int p0);
public:

    /**
     * @note[short] MacOS: 0x4c9fa0
     * @note[short] Android
     */
    static TodoReturn getResponse(cocos2d::extension::CCHttpResponse* p0);

    /**
     * @note[short] MacOS: 0x4d2190
     * @note[short] Windows: 0x45060
     * @note[short] Android
     */
    static TodoReturn intToString(int p0);
    
private:
    [[deprecated("GameToolbox::openAppPage not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("GameToolbox::openRateURL not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS: 0x4cc700
     * @note[short] Android
     */
    static TodoReturn strongColor(cocos2d::_ccColor3B p0);
    
private:
    [[deprecated("GameToolbox::colorToSepia not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn colorToSepia(cocos2d::_ccColor3B p0, float p1);
public:
    
private:
    [[deprecated("GameToolbox::isRateEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isRateEasing(int p0);
public:

    /**
     * @note[short] MacOS: 0x4cae40
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] MacOS: 0x4ccc80
     * @note[short] Android
     */
    static float fast_rand_0_1();
    
private:
    [[deprecated("GameToolbox::getEasedValue not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getEasedValue(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::getfast_srand not implemented")]]
    /**
     * @note[short] Android
     */
    static int getfast_srand();
public:

    /**
     * @note[short] MacOS: 0x4cc860
     * @note[short] Android
     */
    static gd::string getTimeString(int p0);

    /**
     * @note[short] MacOS: 0x4cb5e0
     * @note[short] Android
     */
    static TodoReturn hsvFromString(gd::string const& p0, char const* p1);
    
private:
    [[deprecated("GameToolbox::postClipVisit not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn postClipVisit();
public:
    
private:
    [[deprecated("GameToolbox::stringFromHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn stringFromHSV(cocos2d::_ccHSVValue p0, char const* p1);
public:
    
private:
    [[deprecated("GameToolbox::getEasedAction not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::msToTimeString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn msToTimeString(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x4d2c60
     * @note[short] Android
     */
    static TodoReturn pointsToString(int p0);

    /**
     * @note[short] MacOS: 0x4cb0a0
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::_ccColor3B const& p0, float p1, float p2, float p3);

    /**
     * @note[short] MacOS: 0x4cb0d0
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::_ccColor3B const& p0, cocos2d::_ccHSVValue p1);
    
private:
    [[deprecated("GameToolbox::createHashString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn createHashString(gd::string const& p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x4c9d70
     * @note[short] Android
     */
    static TodoReturn doWeHaveInternet();
    
private:
    [[deprecated("GameToolbox::getMultipliedHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getMultipliedHSV(cocos2d::_ccHSVValue const& p0, float p1);
public:

    /**
     * @note[short] MacOS: 0x4d2490
     * @note[short] Android
     */
    static TodoReturn intToShortString(int p0);
    
private:
    [[deprecated("GameToolbox::saveStringToFile not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveStringToFile(gd::string const& p0, gd::string const& p1);
public:

    /**
     * @note[short] MacOS: 0x4cbfa0
     * @note[short] Android
     */
    static TodoReturn stringSetupToMap(gd::string const& p0, char const* p1, gd::map<gd::string, gd::string>& p2);
    
private:
    [[deprecated("GameToolbox::getDropActionWEnd not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);
public:
    
private:
    [[deprecated("GameToolbox::getInvertedEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getInvertedEasing(int p0);
public:

    /**
     * @note[short] MacOS: 0x4cc230
     * @note[short] Android
     */
    static TodoReturn stringSetupToDict(gd::string const& p0, char const* p1);

    /**
     * @note[short] MacOS: 0x4ca4a0
     * @note[short] Windows: 0x40d40
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14);

    /**
     * @note[short] MacOS: 0x4ca390
     * @note[short] Windows: 0x40c40
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, cocos2d::CCArray* p7);
    
private:
    [[deprecated("GameToolbox::fast_rand_minus1_1 not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand_minus1_1();
public:

    /**
     * @note[short] MacOS: 0x4d1130
     * @note[short] Android
     */
    static TodoReturn particleFromString(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
    
private:
    [[deprecated("GameToolbox::particleFromStruct not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWDelay not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);
public:
    
private:
    [[deprecated("GameToolbox::alignItemsVertically not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("GameToolbox::contentScaleClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);
public:
    
private:
    [[deprecated("GameToolbox::multipliedColorValue not implemented")]]
    /**
     * @note[short] Windows: 0x41a40
     * @note[short] Android
     */
    static TodoReturn multipliedColorValue(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::preVisitWithClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameToolbox::saveParticleToString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveParticleToString(cocos2d::CCParticleSystemQuad* p0);
public:

    /**
     * @note[short] MacOS: 0x4caf10
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);

    /**
     * @note[short] MacOS: 0x4c9860
     * @note[short] Android
     */
    static TodoReturn alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);
    
private:
    [[deprecated("GameToolbox::mergeDictsSkipConflict not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:

    /**
     * @note[short] MacOS: 0x4d01d0
     * @note[short] Android
     */
    static TodoReturn particleStringToStruct(gd::string const& p0, cocos2d::ParticleStruct& p1);
    
private:
    [[deprecated("GameToolbox::getLargestMergedIntDicts not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:

    /**
     * @note[short] MacOS: 0x4ca980
     * @note[short] Android
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
    
private:
    [[deprecated("GameToolbox::preVisitWithClippingRect not implemented")]]
    /**
     * @note[short] Windows: 0x40bc0
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
public:
    
private:
    [[deprecated("GameToolbox::timestampToHumanReadable not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn timestampToHumanReadable(long p0);
public:
    
private:
    [[deprecated("GameToolbox::isIOS not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isIOS();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand();
public:
};
