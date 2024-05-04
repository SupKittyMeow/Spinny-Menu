#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)
    
private:
    [[deprecated("TextGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TextGameObject* create(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("TextGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCTexture2D* p0);
public:

    /**
     * @note[short] MacOS: 0x596ef0
     * @note[short] Android
     */
    void updateTextObject(gd::string p0, bool p1);

    /**
     * @note[short] MacOS: 0x597170
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS: 0x597280
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x596ee0
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);

    /**
     * @note[short] MacOS: 0x597b00
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();
    gd::string m_text;
    int m_kerning;
};
