#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)
    
private:
    [[deprecated("EditButtonBar::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);
public:
    
private:
    [[deprecated("EditButtonBar::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);
public:
    
private:
    [[deprecated("EditButtonBar::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage();
public:
    
private:
    [[deprecated("EditButtonBar::onLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditButtonBar::onRight not implemented")]]
    /**
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditButtonBar::reloadItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadItems(int p0, int p1);
public:
    
private:
    [[deprecated("EditButtonBar::loadFromItems not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);
public:
    
private:
    [[deprecated("EditButtonBar::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
};
