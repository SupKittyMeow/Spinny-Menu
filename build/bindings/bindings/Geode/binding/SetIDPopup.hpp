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

class SetIDPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x2874a0
     * @note[short] Android
     */
    static SetIDPopup* create(int p0, int p1, int p2, gd::string p3, gd::string p4, bool p5, int p6, float p7, bool p8, bool p9);

    /**
     * @note[short] MacOS: 0x2876f0
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, gd::string p3, gd::string p4, bool p5, int p6, float p7, bool p8, bool p9);
    
private:
    [[deprecated("SetIDPopup::onResetValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onItemIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onCancel not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x288130
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();

    /**
     * @note[short] MacOS: 0x288440
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x2883c0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x288260
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x2882a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x2883b0
     * @note[short] Android
     */
    virtual TodoReturn valueChanged();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_unkBool;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
