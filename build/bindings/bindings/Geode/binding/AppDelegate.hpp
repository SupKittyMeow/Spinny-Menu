#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] Out of line
     */
    static AppDelegate* get();
    
private:
    [[deprecated("AppDelegate::setIdleTimerDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool p0);
public:
    
private:
    [[deprecated("AppDelegate::checkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSound();
public:
    
private:
    [[deprecated("AppDelegate::pauseSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseSound();
public:
    
private:
    [[deprecated("AppDelegate::resumeSound not implemented")]]
    /**
     * @note[short] Windows: 0x5b2e0
     * @note[short] Android
     */
    TodoReturn resumeSound();
public:
    
private:
    [[deprecated("AppDelegate::hideLoadingCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingCircle();
public:

    /**
     * @note[short] MacOS: 0x61f6f0
     * @note[short] Android
     */
    void loadingIsFinished();
    
private:
    [[deprecated("AppDelegate::showLoadingCircle not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingCircle(bool p0, bool p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x61f6c0
     * @note[short] Android
     */
    TodoReturn bgScale();
    
private:
    [[deprecated("AppDelegate::musicTest not implemented")]]
    /**
     * @note[short] Windows: 0x5b330
     * @note[short] Android
     */
    TodoReturn musicTest();
public:
    
private:
    [[deprecated("AppDelegate::pauseGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseGame();
public:
    
private:
    [[deprecated("AppDelegate::setupGLView not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setupGLView();
public:
    
private:
    [[deprecated("AppDelegate::platformShutdown not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void platformShutdown();
public:

    /**
     * @note[short] MacOS: 0x61f560
     * @note[short] Windows: 0x5af40
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] MacOS: 0x61f800
     * @note[short] Windows: 0x5b110
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] MacOS: 0x61f940
     * @note[short] Windows: 0x5b150
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] MacOS: 0x61f700
     * @note[short] Windows: 0x5b0f0
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] MacOS: 0x61f720
     * @note[short] Windows: 0x5b200
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] MacOS: 0x61fbd0
     * @note[short] Windows: 0x5b3b0
     * @note[short] Android
     */
    virtual void trySaveGame(bool p0);

    /**
     * @note[short] MacOS: 0x61fcb0
     * @note[short] Windows: 0x5b550
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* p0);
    GEODE_PAD(24);
    cocos2d::CCScene* m_runningScene;
};
