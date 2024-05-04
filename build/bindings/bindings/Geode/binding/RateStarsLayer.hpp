#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x2697f0
     * @note[short] Windows: 0x2ed3c0
     * @note[short] Android
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS: 0x269980
     * @note[short] Windows: 0x2ed470
     * @note[short] Android
     */
    bool init(int p0, bool p1, bool p2);
    
private:
    [[deprecated("RateStarsLayer::getStarsButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:

    /**
     * @note[short] MacOS: 0x26a1f0
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x26a2c0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x26a270
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x26a240
     * @note[short] Windows: 0x2edae0
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x26a0a0
     * @note[short] Windows: 0x2edbc0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x26a730
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x26a3f0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS: 0x26a4e0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS: 0x26a650
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
