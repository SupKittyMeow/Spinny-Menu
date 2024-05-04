#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)
    
private:
    [[deprecated("LabelGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LabelGameObject* create();
public:
    
private:
    [[deprecated("LabelGameObject::createLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::removeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLabel();
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(float p0);
public:

    /**
     * @note[short] MacOS: 0x1a8d10
     * @note[short] Android
     */
    void updateLabel(gd::string p0);
    
private:
    [[deprecated("LabelGameObject::queueUpdateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueUpdateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::unlockLabelColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLabelColor();
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelAlign not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelAlign(int p0);
public:

    /**
     * @note[short] MacOS: 0x1a8eb0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x1a8490
     * @note[short] Windows: 0x14bc10
     * @note[short] Android
     */
    void setupCustomSprites(gd::string p0);
    
private:
    [[deprecated("LabelGameObject::updateLabelIfDirty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelIfDirty();
public:
    
private:
    [[deprecated("LabelGameObject::updatePreviewLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePreviewLabel();
public:

    /**
     * @note[short] MacOS: 0x1a8460
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x1a8840
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1a9120
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS: 0x1a9d40
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS: 0x1a9180
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x1a90d0
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::_ccColor3B const& p0);

    /**
     * @note[short] MacOS: 0x1a88c0
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);

    /**
     * @note[short] MacOS: 0x1d2e30
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();
private:
    int m_alignment;
public:
private:
    bool m_showSecondsOnly;
public:
private:
    int m_shownSpecial;
public:
private:
    bool m_isTimeCounter;
public:
private:
    int m_kerning;
public:
};
