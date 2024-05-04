#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS: 0x382bc0
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2);

    /**
     * @note[short] MacOS: 0x3827d0
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] MacOS: 0x382860
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] MacOS: 0x383740
     * @note[short] Android
     */
    TodoReturn getTotalPages();
    
private:
    [[deprecated("BoomScrollLayer::getRelativePageForNum not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativePageForNum(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePosForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativePosForPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x383ae0
     * @note[short] Android
     */
    TodoReturn getPage(int p0);
    
private:
    [[deprecated("BoomScrollLayer::setDotScale not implemented")]]
    /**
     * @note[short] Android
     */
    void setDotScale(float p0);
public:

    /**
     * @note[short] MacOS: 0x382d00
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);
    
private:
    [[deprecated("BoomScrollLayer::claimTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::selectPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectPage(int p0);
public:

    /**
     * @note[short] MacOS: 0x383770
     * @note[short] Android
     */
    TodoReturn updateDots(float p0);
    
private:
    [[deprecated("BoomScrollLayer::quickUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdate();
public:

    /**
     * @note[short] MacOS: 0x382d30
     * @note[short] Android
     */
    TodoReturn updatePages();

    /**
     * @note[short] MacOS: 0x384070
     * @note[short] Android
     */
    TodoReturn moveToPageEnded();

    /**
     * @note[short] MacOS: 0x384200
     * @note[short] Android
     */
    TodoReturn instantMoveToPage(int p0);
    
private:
    [[deprecated("BoomScrollLayer::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePageWithNumber(int p0);
public:

    /**
     * @note[short] MacOS: 0x383fa0
     * @note[short] Android
     */
    TodoReturn togglePageIndicators(bool p0);
    
private:
    [[deprecated("BoomScrollLayer::pageNumberForPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageNumberForPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x382e50
     * @note[short] Android
     */
    TodoReturn repositionPagesLooped();

    /**
     * @note[short] MacOS: 0x3834f0
     * @note[short] Android
     */
    TodoReturn setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);
    
private:
    [[deprecated("BoomScrollLayer::positionForPageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionForPageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x384010
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS: 0x384b40
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x384c30
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x384f50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x384980
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x3847f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
};
