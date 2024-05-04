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

class SetTextPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x289fb0
     * @note[short] Android
     */
    static SetTextPopup* create(gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6);

    /**
     * @note[short] MacOS: 0x28a750
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6);

    /**
     * @note[short] MacOS: 0x28afa0
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x28aee0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x28b030
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetTextPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x28b260
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x28b200
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS: 0x28b0d0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x28b110
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    gd::string m_value;
    SetTextPopupDelegate* m_delegate;
};
