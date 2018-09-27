/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControllerProxy : NSObject <NACVolumeController> {
    float  _EUVolumeLimit;
    <NACVolumeControllerDelegate> * _delegate;
    NSNumber * _hapticIntensity;
    long long  _hapticState;
    NACEventThrottler * _hapticThrottler;
    bool  _isObserving;
    long long  _lastReceivedHapticState;
    bool  _lastReceivedProminentHapticEnabled;
    float  _lastReceivedVolumeValue;
    float  _lastRecievedHapticIntensity;
    bool  _muted;
    bool  _prominentHapticEnabled;
    NSObject<OS_dispatch_source> * _setHapticStateTimer;
    NSObject<OS_dispatch_source> * _setHapticTimer;
    NSObject<OS_dispatch_source> * _setProminentHapticTimer;
    NSObject<OS_dispatch_source> * _setVolumeTimer;
    bool  _systemMuted;
    NACProxyVolumeControlTarget * _target;
    bool  _volumeControlAvailable;
    NACEventThrottler * _volumeThrottler;
    NSNumber * _volumeValue;
    bool  _volumeWarningEnabled;
    NACXPCClient * _xpcClient;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) long long hapticState;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isProminentHapticEnabled, nonatomic) bool prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) bool systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_EUVolumeLimitDidChange;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_cancelSetHapticStateTimer;
- (void)_cancelSetHapticTimer;
- (void)_cancelSetProminentHapticTimer;
- (void)_cancelSetVolumeTimer;
- (void)_hapticIntensityDidChange;
- (void)_hapticStateDidChange;
- (void)_hapticStateTimeout;
- (void)_hapticTimeout;
- (void)_mutedStateDidChange;
- (void)_notifyDelegateHapticChanged;
- (void)_notifyDelegateHapticStateChanged;
- (void)_notifyDelegateProminentHapticStateChanged;
- (void)_notifyDelegateSystemMutedStateChanged;
- (void)_notifyDelegateVolumeChanged;
- (void)_prominentHapticStateDidChange;
- (void)_prominentHapticTimeout;
- (id)_scheduleTimeoutWithBlock:(id /* block */)arg1;
- (void)_setHapticIntensity:(id)arg1;
- (void)_setVolumeValue:(id)arg1;
- (void)_systemMutedStateDidChange;
- (void)_volumeControlAvailabilityDidChange;
- (void)_volumeTimout;
- (void)_volumeValueDidChange;
- (void)_volumeWarningDidChange;
- (void)beginObservingHaptics;
- (void)beginObservingVolume;
- (void)dealloc;
- (id)delegate;
- (void)endObservingHaptics;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (long long)hapticState;
- (id)initWithVolumeControlTarget:(id)arg1;
- (bool)isMuted;
- (bool)isProminentHapticEnabled;
- (bool)isSystemMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(bool)arg2 overrideEULimit:(bool)arg3;
- (float)volumeValue;

@end
