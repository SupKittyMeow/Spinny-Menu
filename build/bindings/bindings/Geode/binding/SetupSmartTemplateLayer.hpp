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
#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class SetupSmartTemplateLayer : public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x4c3540
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* p0);

    /**
     * @note[short] MacOS: 0x4c36a0
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0);

    /**
     * @note[short] MacOS: 0x4c3f90
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x4c45f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4c4300
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x4c4510
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4c43e0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4c45d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
