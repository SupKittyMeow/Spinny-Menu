#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x5af5b0
     * @note[short] Android
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] MacOS: 0x5af6c0
     * @note[short] Android
     */
    bool init(int p0, int p1);
    
private:
    [[deprecated("GJGroundLayer::getGroundY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundY();
public:
    
private:
    [[deprecated("GJGroundLayer::createLine not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createLine(int p0);
public:
    
private:
    [[deprecated("GJGroundLayer::hideShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideShadows();
public:

    /**
     * @note[short] MacOS: 0x5b0190
     * @note[short] Android
     */
    void scaleGround(float p0);

    /**
     * @note[short] MacOS: 0x5b0420
     * @note[short] Android
     */
    void updateShadows();
    
private:
    [[deprecated("GJGroundLayer::fadeInFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInFinished();
public:

    /**
     * @note[short] MacOS: 0x5b06f0
     * @note[short] Android
     */
    void positionGround(float p0);

    /**
     * @note[short] MacOS: 0x5b0040
     * @note[short] Android
     */
    void toggleVisible01(bool p0);

    /**
     * @note[short] MacOS: 0x5b0080
     * @note[short] Android
     */
    void toggleVisible02(bool p0);
    
private:
    [[deprecated("GJGroundLayer::updateGroundPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x5b04b0
     * @note[short] Android
     */
    void updateLineBlend(bool p0);
    
private:
    [[deprecated("GJGroundLayer::deactivateGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateGround();
public:

    /**
     * @note[short] MacOS: 0x5b05f0
     * @note[short] Android
     */
    void updateShadowXPos(float p0, float p1);
    
private:
    [[deprecated("GJGroundLayer::loadGroundSprites not implemented")]]
    /**
     * @note[short] Android
     */
    void loadGroundSprites(int p0, bool p1);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGroundWidth not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGroundWidth(bool p0);
public:

    /**
     * @note[short] MacOS: 0x5affc0
     * @note[short] Windows: 0x1f3220
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x5b0110
     * @note[short] Windows: 0x1f3280
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::_ccColor3B p0);

    /**
     * @note[short] MacOS: 0x5b06e0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x5b0500
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS: 0x5b0510
     * @note[short] Android
     */
    virtual TodoReturn fadeInGround(float p0);

    /**
     * @note[short] MacOS: 0x5b06b0
     * @note[short] Android
     */
    virtual TodoReturn fadeOutGround(float p0);
};
