#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessageListDelegate";
    
private:
    [[deprecated("MessageListDelegate::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("MessageListDelegate::loadMessagesFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("MessageListDelegate::loadMessagesFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("MessageListDelegate::forceReloadMessages not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool p0);
public:
};
