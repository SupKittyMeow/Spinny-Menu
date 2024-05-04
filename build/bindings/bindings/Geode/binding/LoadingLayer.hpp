#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LoadingLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);
public:

    /**
     * @note[short] MacOS: 0x380170
     * @note[short] Windows: 0x271a90
     * @note[short] Android
     */
    static LoadingLayer* create(bool fromReload);

    /**
     * @note[short] MacOS: 0x380350
     * @note[short] Windows: 0x271b30
     * @note[short] Android
     */
    bool init(bool fromReload);
    
private:
    [[deprecated("LoadingLayer::getLoadingString not implemented")]]
    /**
     * @note[short] Windows: 0x272a20
     * @note[short] Android
     */
    const char* getLoadingString();
public:

    /**
     * @note[short] MacOS: 0x380ba0
     * @note[short] Windows: 0x272390
     * @note[short] Android
     */
    void loadAssets();
    
private:
    [[deprecated("LoadingLayer::updateProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateProgress(int p0);
public:

    /**
     * @note[short] MacOS: 0x381310
     * @note[short] Windows: 0x2722a0
     * @note[short] Android
     */
    void loadingFinished();
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
