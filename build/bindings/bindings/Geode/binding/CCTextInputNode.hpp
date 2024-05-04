#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] Out of line
     */
     CCTextInputNode();
	inline static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath) {
		return CCTextInputNode::create(width, height, placeholder, 0x18, fontPath);
	}
	inline static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath) {
		return CCTextInputNode::create(width, height, placeholder, "Thonburi", fontSize, fontPath);
	}

    /**
     * @note[short] Out of line
     */
    void setDelegate(TextInputDelegate* delegate);
	inline void setMaxLabelScale(float v) {
		m_maxLabelScale = v;
		this->refreshLabel();
	}

    /**
     * @note[short] Out of line
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] Out of line
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] Out of line
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS: 0x97e10
     * @note[short] Windows: 0x2e440
     * @note[short] Android
     */
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS: 0x97fc0
     * @note[short] Windows: 0x2e500
     * @note[short] Android
     */
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS: 0x97d40
     * @note[short] Android
     */
     ~CCTextInputNode();

    /**
     * @note[short] MacOS: 0x98980
     * @note[short] Windows: 0x2ea50
     * @note[short] Android
     */
    gd::string getString();

    /**
     * @note[short] MacOS: 0x98860
     * @note[short] Windows: 0x2e8c0
     * @note[short] Android
     */
    void setAllowedChars(gd::string p0);
    
private:
    [[deprecated("CCTextInputNode::setLabelNormalColor not implemented")]]
    /**
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::_ccColor3B p0);
public:

    /**
     * @note[short] MacOS: 0x988e0
     * @note[short] Windows: 0x2e9a0
     * @note[short] Android
     */
    void setString(gd::string p0);

    /**
     * @note[short] MacOS: 0x98350
     * @note[short] Android
     */
    TodoReturn addTextArea(TextArea* p0);

    /**
     * @note[short] MacOS: 0x9a490
     * @note[short] Android
     */
    TodoReturn forceOffset();

    /**
     * @note[short] MacOS: 0x98560
     * @note[short] Windows: 0x2eac0
     * @note[short] Android
     */
    void updateLabel(gd::string p0);

    /**
     * @note[short] MacOS: 0x98a20
     * @note[short] Windows: 0x2ede0
     * @note[short] Android
     */
    void refreshLabel();
    
private:
    [[deprecated("CCTextInputNode::updateBlinkLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBlinkLabel();
public:

    /**
     * @note[short] MacOS: 0x9a4a0
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1);
    
private:
    [[deprecated("CCTextInputNode::updateBlinkLabelToChar not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int p0);
public:
    
private:
    [[deprecated("CCTextInputNode::updateDefaultFontValues not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDefaultFontValues(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x98880
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS: 0x9a9d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x9ac00
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x9abc0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x9abe0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x9ac20
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x993a0
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS: 0x99380
     * @note[short] Windows: 0x2f600
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool p0);

    /**
     * @note[short] MacOS: 0x99120
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS: 0x99270
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS: 0x994b0
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2, cocos2d::enumKeyCodes p3);

    /**
     * @note[short] MacOS: 0x99a30
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0);

    /**
     * @note[short] MacOS: 0x99d50
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0);
    bool m_numberInput;
    gd::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    gd::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    GEODE_PAD(16);
};
