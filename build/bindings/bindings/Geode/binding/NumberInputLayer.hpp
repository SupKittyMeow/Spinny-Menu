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

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] MacOS: 0x46e490
     * @note[short] Android
     */
    static NumberInputLayer* create();
    
private:
    [[deprecated("NumberInputLayer::onDone not implemented")]]
    /**
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::onNumber not implemented")]]
    /**
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NumberInputLayer::deleteLast not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLast();
public:
    
private:
    [[deprecated("NumberInputLayer::inputNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn inputNumber(int p0);
public:
    
private:
    [[deprecated("NumberInputLayer::updateNumberState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateNumberState();
public:

    /**
     * @note[short] MacOS: 0x46e5f0
     * @note[short] Windows: 0x285e60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x46efc0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS: 0x46ef50
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
