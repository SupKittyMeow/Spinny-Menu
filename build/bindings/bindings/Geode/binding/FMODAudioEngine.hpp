#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)
    
private:
    [[deprecated("FMODAudioEngine::pauseMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseMusic(int p0);
public:

    /**
     * @note[short] MacOS: 0x3c24f0
     * @note[short] Android
     */
    void playEffect(gd::string p0);

    /**
     * @note[short] MacOS: 0x3c2560
     * @note[short] Windows: 0x355b0
     * @note[short] Android
     */
    void playEffect(gd::string p0, float p1, float p2, float p3);
    
private:
    [[deprecated("FMODAudioEngine::startMusic not implemented")]]
    /**
     * @note[short] Windows: 0x38900
     * @note[short] Android
     */
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
public:
    
private:
    [[deprecated("FMODAudioEngine::fadeInMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInMusic(float p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::pitchForIdx not implemented")]]
    /**
     * @note[short] Windows: 0x35070
     * @note[short] Android
     */
    TodoReturn pitchForIdx(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::printResult not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn printResult(FMOD_RESULT p0);
public:

    /**
     * @note[short] MacOS: 0x3bc1a0
     * @note[short] Android
     */
    TodoReturn resumeAudio();
    
private:
    [[deprecated("FMODAudioEngine::resumeMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Windows: 0x36d00
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Windows: 0x36a60
     * @note[short] Android
     */
    void stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Windows: 0x36d00
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* p0, bool p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::storeEffect not implemented")]]
    /**
     * @note[short] Windows: 0x37970
     * @note[short] Android
     */
    TodoReturn storeEffect(FMOD::Sound* p0, gd::string p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::createStream not implemented")]]
    /**
     * @note[short] Windows: 0x3ac10
     * @note[short] Android
     */
    TodoReturn createStream(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x3c8390
     * @note[short] Android
     */
    TodoReturn fadeOutMusic(float p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::getMusicTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTime(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadMusic(gd::string p0, bool p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeEffect(unsigned int p0);
public:

    /**
     * @note[short] MacOS: 0x3baf40
     * @note[short] Windows: 0x32b80
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS: 0x3bcc30
     * @note[short] Android
     */
    void stopAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::testFunction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testFunction(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::unloadEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unloadEffect(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x3bbca0
     * @note[short] Windows: 0x331b0
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset p0, bool p1);

    /**
     * @note[short] MacOS: 0x3bc380
     * @note[short] Android
     */
    TodoReturn clearAllAudio();
    
private:
    [[deprecated("FMODAudioEngine::getFMODStatus not implemented")]]
    /**
     * @note[short] Windows: 0x3ae60
     * @note[short] Android
     */
    TodoReturn getFMODStatus(int p0);
public:

    /**
     * @note[short] MacOS: 0x3bc2e0
     * @note[short] Android
     */
    TodoReturn pauseAllAudio();

    /**
     * @note[short] MacOS: 0x3c50c0
     * @note[short] Windows: 0x380c0
     * @note[short] Android
     */
    void pauseAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::preloadEffect not implemented")]]
    /**
     * @note[short] Windows: 0x37780
     * @note[short] Android
     */
    void preloadEffect(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateChannel not implemented")]]
    /**
     * @note[short] Windows: 0x36f70
     * @note[short] Android
     */
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelStopped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
public:

    /**
     * @note[short] MacOS: 0x3c1a10
     * @note[short] Android
     */
    void enableMetering();
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusic not implemented")]]
    /**
     * @note[short] Windows: 0x3a6b0
     * @note[short] Android
     */
    TodoReturn getActiveMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicTimeMS not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTimeMS(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isEffectLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEffectLoaded(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x3c5170
     * @note[short] Android
     */
    bool isMusicPlaying(int p0);
    
private:
    [[deprecated("FMODAudioEngine::isMusicPlaying not implemented")]]
    /**
     * @note[short] Android
     */
    bool isMusicPlaying(gd::string p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::lengthForSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lengthForSound(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x3be930
     * @note[short] Windows: 0x33f90
     * @note[short] Android
     */
    TodoReturn loadAudioState(FMODAudioState& p0);

    /**
     * @note[short] MacOS: 0x3bc330
     * @note[short] Android
     */
    TodoReturn resumeAllAudio();

    /**
     * @note[short] MacOS: 0x3c5110
     * @note[short] Windows: 0x38110
     * @note[short] Android
     */
    TodoReturn resumeAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::reverbToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverbToString(FMODReverbPreset p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::saveAudioState not implemented")]]
    /**
     * @note[short] Windows: 0x33b10
     * @note[short] Android
     */
    TodoReturn saveAudioState(FMODAudioState& p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::setMusicTimeMS not implemented")]]
    /**
     * @note[short] Windows: 0x3a160
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int p0, bool p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x3bc450
     * @note[short] Windows: 0x37d00
     * @note[short] Android
     */
    void stopAllEffects();
    
private:
    [[deprecated("FMODAudioEngine::stopAndGetFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::swapMusicIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMusicIndex(int p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateMetering not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMetering();
public:

    /**
     * @note[short] MacOS: 0x3c1a40
     * @note[short] Android
     */
    void disableMetering();
    
private:
    [[deprecated("FMODAudioEngine::getChannelGroup not implemented")]]
    /**
     * @note[short] Windows: 0x351d0
     * @note[short] Android
     */
    TodoReturn getChannelGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseAllEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::playEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playEffectAsync(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::queuePlayEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queuePlayEffect(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);
public:
    
private:
    [[deprecated("FMODAudioEngine::queueStartMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueStartMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
public:
    
private:
    [[deprecated("FMODAudioEngine::registerChannel not implemented")]]
    /**
     * @note[short] Windows: 0x36310
     * @note[short] Android
     */
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);
public:

    /**
     * @note[short] MacOS: 0x3c1700
     * @note[short] Windows: 0x37620
     * @note[short] Android
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);
    
private:
    [[deprecated("FMODAudioEngine::channelLinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveMusic();
public:

    /**
     * @note[short] MacOS: 0x3c5050
     * @note[short] Android
     */
    float getEffectsVolume();

    /**
     * @note[short] MacOS: 0x3c1a50
     * @note[short] Android
     */
    float getMeteringValue();
    
private:
    [[deprecated("FMODAudioEngine::getMusicLengthMS not implemented")]]
    /**
     * @note[short] Windows: 0x3a2e0
     * @note[short] Android
     */
    TodoReturn getMusicLengthMS(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getNextChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextChannelID();
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAndPlayMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAndPlayMusic(gd::string p0, unsigned int p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAllEffects();
public:

    /**
     * @note[short] MacOS: 0x3c18f0
     * @note[short] Windows: 0x37120
     * @note[short] Android
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);
    
private:
    [[deprecated("FMODAudioEngine::setEffectsVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setEffectsVolume(float p0);
public:

    /**
     * @note[short] MacOS: 0x3bb700
     * @note[short] Windows: 0x32f20
     * @note[short] Android
     */
    void setupAudioEngine();
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
public:

    /**
     * @note[short] MacOS: 0x3c4c80
     * @note[short] Windows: 0x37ea0
     * @note[short] Android
     */
    TodoReturn unloadAllEffects();
    
private:
    [[deprecated("FMODAudioEngine::getMusicChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicChannelID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getTweenContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenContainer(AudioTargetType p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isChannelStopping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isChannelStopping(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusicNotInSet not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::unregisterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unregisterChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateQueuedMusic();
public:
    
private:
    [[deprecated("FMODAudioEngine::channelForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelUnlinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelUnlinkSound(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::playEffectAdvanced not implemented")]]
    /**
     * @note[short] Windows: 0x35740
     * @note[short] Android
     */
    void playEffectAdvanced(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, bool p14, int p15, int p16, float p17, int p18);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadEffectAsync(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopAndRemoveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndRemoveMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::triggerQueuedMusic not implemented")]]
    /**
     * @note[short] Windows: 0x39570
     * @note[short] Android
     */
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::activateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateQueuedMusic(int p0);
public:

    /**
     * @note[short] MacOS: 0x3be510
     * @note[short] Windows: 0x369e0
     * @note[short] Android
     */
    TodoReturn channelForChannelID(int p0);

    /**
     * @note[short] MacOS: 0x3c48b0
     * @note[short] Windows: 0x373a0
     * @note[short] Android
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] MacOS: 0x3bdea0
     * @note[short] Windows: 0x34d60
     * @note[short] Android
     */
    void updateChannelTweens(float p0);

    /**
     * @note[short] MacOS: 0x3bd380
     * @note[short] Windows: 0x38e90
     * @note[short] Android
     */
    void updateQueuedEffects();
    
private:
    [[deprecated("FMODAudioEngine::waitUntilSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelIDForUniqueID not implemented")]]
    /**
     * @note[short] Windows: 0x36960
     * @note[short] Android
     */
    TodoReturn channelIDForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::releaseRemovedSounds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn releaseRemovedSounds();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateBackgroundFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBackgroundFade();
public:

    /**
     * @note[short] MacOS: 0x3c4fd0
     * @note[short] Android
     */
    TodoReturn fadeInBackgroundMusic(float p0);
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusicChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveMusicChannel(int p0);
public:

    /**
     * @note[short] MacOS: 0x3bd520
     * @note[short] Android
     */
    void updateTemporaryEffects();

    /**
     * @note[short] MacOS: 0x3c5010
     * @note[short] Android
     */
    float getBackgroundMusicVolume();
    
private:
    [[deprecated("FMODAudioEngine::setBackgroundMusicVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::queuedEffectFinishedLoading not implemented")]]
    /**
     * @note[short] Windows: 0x38f60
     * @note[short] Android
     */
    TodoReturn queuedEffectFinishedLoading(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stop not implemented")]]
    /**
     * @note[short] Windows: 0x5b260
     * @note[short] Android
     */
    virtual void stop();
public:

    /**
     * @note[short] MacOS: 0x3bb2c0
     * @note[short] Windows: 0x32c00
     * @note[short] Android
     */
    TodoReturn setup();
    
private:
    [[deprecated("FMODAudioEngine::start not implemented")]]
    /**
     * @note[short] Windows: 0x337c0
     * @note[short] Android
     */
    TodoReturn start();
public:
    
private:
    [[deprecated("FMODAudioEngine::loadMusic not implemented")]]
    /**
     * @note[short] Windows: 0x38410
     * @note[short] Android
     */
    void loadMusic(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x3bf920
     * @note[short] Windows: 0x384b0
     * @note[short] Android
     */
    void loadMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6);

    /**
     * @note[short] MacOS: 0x3c5500
     * @note[short] Android
     */
    void playMusic(gd::string p0, bool p1, float p2, int p3);
    
private:
    [[deprecated("FMODAudioEngine::stopMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusic(int p0);
public:

    /**
     * @note[short] MacOS: 0x3bcec0
     * @note[short] Windows: 0x33910
     * @note[short] Android
     */
    virtual void update(float p0);
    GEODE_PAD(168);
    FMOD::System* m_system;
};
