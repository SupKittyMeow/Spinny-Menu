#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelCommentDelegate";
    
private:
    [[deprecated("LevelCommentDelegate::loadCommentsFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("LevelCommentDelegate::loadCommentsFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);
public:
    
private:
    [[deprecated("LevelCommentDelegate::updateUserScoreFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();
public:
    
private:
    [[deprecated("LevelCommentDelegate::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);
public:
};
