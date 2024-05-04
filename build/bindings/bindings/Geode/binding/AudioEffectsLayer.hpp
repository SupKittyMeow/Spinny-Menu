#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS: 0x48afb0
     * @note[short] Android
     */
    static AudioEffectsLayer* create(gd::string p0);

    /**
     * @note[short] MacOS: 0x48b0e0
     * @note[short] Android
     */
    bool init(gd::string p0);
    
private:
    [[deprecated("AudioEffectsLayer::getBGSquare not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBGSquare();
public:

    /**
     * @note[short] MacOS: 0x48b650
     * @note[short] Windows: 0x5bb70
     * @note[short] Android
     */
    TodoReturn triggerEffect(float p0);
    
private:
    [[deprecated("AudioEffectsLayer::resetAudioVars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAudioVars();
public:

    /**
     * @note[short] MacOS: 0x48b580
     * @note[short] Windows: 0x5bad0
     * @note[short] Android
     */
    TodoReturn audioStep(float p0);
    
private:
    [[deprecated("AudioEffectsLayer::goingDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn goingDown();
public:

    /**
     * @note[short] MacOS: 0x48b8e0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS: 0x48b790
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
