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
#include "FLAlertLayerProtocol.hpp"

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)
    
private:
    [[deprecated("GJScoreCell::onMoreLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onViewProfile not implemented")]]
    /**
     * @note[short] Windows: 0x86f20
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onBan not implemented")]]
    /**
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x228500
     * @note[short] Windows: 0x85eb0
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x2339c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x233c70
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x233bb0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJUserScore* m_score;
};
