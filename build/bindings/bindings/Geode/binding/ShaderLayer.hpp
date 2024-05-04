#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("ShaderLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x374390
     * @note[short] Android
     */
    static ShaderLayer* create();
public:
    
private:
    [[deprecated("ShaderLayer::tweenValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::setupShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShader(bool p0);
public:
    
private:
    [[deprecated("ShaderLayer::triggerBulge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerBulge(float p0, float p1, float p2, float p3, float p4, int p5, int p6, float p7, bool p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSepia not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSepia(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::updateZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    bool updateZLayer(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("ShaderLayer::triggerGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGlitch(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerPinchX(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerPinchY(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::preBulgeShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::prePinchShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prePinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::preSepiaShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSepiaShader();
public:
    
private:
    [[deprecated("ShaderLayer::tweenValueAuto not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenValueAuto(float p0, int p1, float p2, int p3, float p4);
public:

    /**
     * @note[short] MacOS: 0x3aa510
     * @note[short] Android
     */
    void preCommonShader();

    /**
     * @note[short] MacOS: 0x3ad250
     * @note[short] Android
     */
    void preGlitchShader();
    
private:
    [[deprecated("ShaderLayer::resetAllShaders not implemented")]]
    /**
     * @note[short] Android
     */
    bool resetAllShaders();
public:
    
private:
    [[deprecated("ShaderLayer::toggleAntiAlias not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleAntiAlias(bool p0);
public:
    
private:
    [[deprecated("ShaderLayer::triggerHueShift not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerHueShift(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::setupBulgeShader not implemented")]]
    /**
     * @note[short] Windows: 0x37aa00
     * @note[short] Android
     */
    TodoReturn setupBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupPinchShader not implemented")]]
    /**
     * @note[short] Windows: 0x37af60
     * @note[short] Android
     */
    TodoReturn setupPinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupSepiaShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSepiaShader();
public:
    
private:
    [[deprecated("ShaderLayer::triggerGrayscale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGrayscale(float p0, float p1, bool p2, int p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerPixelateX(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerPixelateY(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockLine not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShockLine(float p0, float p1, bool p2, bool p3, bool p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, int p12, bool p13, bool p14, bool p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockWave not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShockWave(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, float p8, float p9, float p10, int p11, bool p12, bool p13, bool p14, float p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::preHueShiftShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preHueShiftShader();
public:

    /**
     * @note[short] MacOS: 0x3adef0
     * @note[short] Android
     */
    void prePixelateShader();
    
private:
    [[deprecated("ShaderLayer::triggerChromaticX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticX(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticY(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerLensCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerLensCircle(float p0, float p1, float p2, float p3, int p4, int p5, float p6, float p7, int p8, float p9, bool p10);
public:
    
private:
    [[deprecated("ShaderLayer::triggerRadialBlur not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerRadialBlur(float p0, float p1, float p2, float p3, int p4, float p5, float p6, bool p7, int p8, int p9, float p10, bool p11);
public:

    /**
     * @note[short] MacOS: 0x3ad7e0
     * @note[short] Android
     */
    void preChromaticShader();

    /**
     * @note[short] MacOS: 0x3af3e0
     * @note[short] Android
     */
    void preGrayscaleShader();

    /**
     * @note[short] MacOS: 0x3acd30
     * @note[short] Android
     */
    void preShockLineShader();

    /**
     * @note[short] MacOS: 0x3ac670
     * @note[short] Android
     */
    void preShockWaveShader();
    
private:
    [[deprecated("ShaderLayer::triggerColorChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerColorChange(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, float p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerInvertColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerInvertColor(float p0, float p1, float p2, float p3, float p4, bool p5, bool p6, bool p7, int p8, float p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerMotionBlurX(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerMotionBlurY(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:

    /**
     * @note[short] MacOS: 0x3afea0
     * @note[short] Windows: 0x37c330
     * @note[short] Android
     */
    void performCalculations();

    /**
     * @note[short] MacOS: 0x3ae720
     * @note[short] Android
     */
    void preLensCircleShader();

    /**
     * @note[short] MacOS: 0x3aecb0
     * @note[short] Android
     */
    void preMotionBlurShader();

    /**
     * @note[short] MacOS: 0x3ae9f0
     * @note[short] Android
     */
    void preRadialBlurShader();
    
private:
    [[deprecated("ShaderLayer::setupCommonUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    void setupCommonUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupGlitchUniforms not implemented")]]
    /**
     * @note[short] Windows: 0x377e70
     * @note[short] Android
     */
    TodoReturn setupGlitchUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupHueShiftShader not implemented")]]
    /**
     * @note[short] Windows: 0x37b6b0
     * @note[short] Android
     */
    TodoReturn setupHueShiftShader();
public:
    
private:
    [[deprecated("ShaderLayer::updateEffectOffsets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEffectOffsets(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::objectPosToShaderPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectPosToShaderPos(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS: 0x3af900
     * @note[short] Android
     */
    void preColorChangeShader();
    
private:
    [[deprecated("ShaderLayer::preInvertColorShader not implemented")]]
    /**
     * @note[short] Android
     */
    void preInvertColorShader();
public:

    /**
     * @note[short] MacOS: 0x3afb10
     * @note[short] Android
     */
    void preSplitScreenShader();
    
private:
    [[deprecated("ShaderLayer::resetTargetContainer not implemented")]]
    /**
     * @note[short] Android
     */
    void resetTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::setupGrayscaleShader not implemented")]]
    /**
     * @note[short] Windows: 0x37b0a0
     * @note[short] Android
     */
    TodoReturn setupGrayscaleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupLensCircleShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLensCircleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupMotionBlurShader not implemented")]]
    /**
     * @note[short] Windows: 0x37a430
     * @note[short] Android
     */
    TodoReturn setupMotionBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupRadialBlurShader not implemented")]]
    /**
     * @note[short] Windows: 0x379fa0
     * @note[short] Android
     */
    TodoReturn setupRadialBlurShader();
public:

    /**
     * @note[short] MacOS: 0x3accf0
     * @note[short] Android
     */
    void updateShockLineCenter(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS: 0x3ac630
     * @note[short] Android
     */
    void updateShockWaveCenter(cocos2d::CCPoint p0);
    
private:
    [[deprecated("ShaderLayer::prepareTargetContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::setupChromaticUniforms not implemented")]]
    /**
     * @note[short] Windows: 0x378480
     * @note[short] Android
     */
    TodoReturn setupChromaticUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupColorChangeShader not implemented")]]
    /**
     * @note[short] Windows: 0x37bad0
     * @note[short] Android
     */
    TodoReturn setupColorChangeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupInvertColorShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupInvertColorShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupShockLineUniforms not implemented")]]
    /**
     * @note[short] Windows: 0x3776e0
     * @note[short] Android
     */
    TodoReturn setupShockLineUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupShockWaveUniforms not implemented")]]
    /**
     * @note[short] Windows: 0x376b20
     * @note[short] Android
     */
    TodoReturn setupShockWaveUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupSplitScreenShader not implemented")]]
    /**
     * @note[short] Windows: 0x37be40
     * @note[short] Android
     */
    TodoReturn setupSplitScreenShader();
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticGlitch(bool p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenCols not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSplitScreenCols(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenRows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSplitScreenRows(float p0, float p1, int p2, float p3);
public:

    /**
     * @note[short] MacOS: 0x3aef90
     * @note[short] Android
     */
    void updateMotionBlurSpeedX(float p0, float p1);

    /**
     * @note[short] MacOS: 0x3aeff0
     * @note[short] Android
     */
    void updateMotionBlurSpeedY(float p0, float p1);

    /**
     * @note[short] MacOS: 0x3adab0
     * @note[short] Android
     */
    void preChromaticGlitchShader();
    
private:
    [[deprecated("ShaderLayer::setupChromaticGlitchUniforms not implemented")]]
    /**
     * @note[short] Windows: 0x3789c0
     * @note[short] Android
     */
    TodoReturn setupChromaticGlitchUniforms();
public:

    /**
     * @note[short] MacOS: 0x3aa350
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x3a8bb0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x3b01c0
     * @note[short] Windows: 0x37c480
     * @note[short] Android
     */
    virtual void visit();
};
