#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)
	inline GJDropDownLayer() {
		m_endPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_startPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_buttonMenu = nullptr;
		m_listLayer = nullptr;
		m_mainLayer = nullptr;
		m_hidden = false;
		m_delegate = nullptr;
	}
    
private:
    [[deprecated("GJDropDownLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJDropDownLayer* create(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x5acc30
     * @note[short] Android
     */
    static GJDropDownLayer* create(char const* p0, float p1);

    /**
     * @note[short] Out of line
     */
    bool init(char const* title);

    /**
     * @note[short] MacOS: 0x5acd70
     * @note[short] Windows: 0x1d2340
     * @note[short] Android
     */
    bool init(const char* title, float height);

    /**
     * @note[short] MacOS: 0x5ac980
     * @note[short] Android
     */
     ~GJDropDownLayer();

    /**
     * @note[short] Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    /**
     * @note[short] MacOS: 0x5ad550
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x5ad240
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x5ad280
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5ad1c0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x5ad210
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS: 0x5ad2c0
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS: 0x5ad300
     * @note[short] Windows: 0x1d27c0
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS: 0x5ad3f0
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS: 0x5ad4f0
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS: 0x5ad510
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0x5ad4e0
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] MacOS: 0x5ad1d0
     * @note[short] Android
     */
    virtual TodoReturn disableUI();

    /**
     * @note[short] MacOS: 0x5ad1f0
     * @note[short] Android
     */
    virtual TodoReturn enableUI();
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    GJDropDownLayerDelegate* m_delegate;
    bool m_unknown;
};
