#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)
    
private:
    [[deprecated("CommentCell::onUndelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onUndelete();
public:

    /**
     * @note[short] MacOS: 0x233020
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x232ff0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x2331f0
     * @note[short] Windows: 0x85bc0
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CommentCell::onLike not implemented")]]
    /**
     * @note[short] Windows: 0x85a10
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommentCell::onDelete not implemented")]]
    /**
     * @note[short] Windows: 0x85c60
     * @note[short] Android
     */
    TodoReturn onDelete();
public:
    
private:
    [[deprecated("CommentCell::onUnhide not implemented")]]
    /**
     * @note[short] Windows: 0x85d10
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommentCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x85990
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("CommentCell::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] MacOS: 0x2266f0
     * @note[short] Windows: 0x83e20
     * @note[short] Android
     */
    void loadFromComment(GJComment* p0);
    
private:
    [[deprecated("CommentCell::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();
public:
    
private:
    [[deprecated("CommentCell::updateLabelValues not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLabelValues();
public:

    /**
     * @note[short] MacOS: 0x232fc0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x2332e0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x2333b0
     * @note[short] Windows: 0x85af0
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS: 0x233750
     * @note[short] Windows: 0x85cd0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
};
