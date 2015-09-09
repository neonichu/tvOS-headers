//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface UIDevice : NSObject
{
    long long _numDeviceOrientationObservers;
    float _batteryLevel;
    struct {
        unsigned int batteryMonitoringEnabled:1;
        unsigned int proximityMonitoringEnabled:1;
        unsigned int expectsFaceContactInLandscape:1;
        unsigned int orientation:3;
        unsigned int batteryState:2;
        unsigned int proximityState:1;
        unsigned int hasTouchPadOverride:1;
        unsigned int hasTouchPad:1;
    } _deviceFlags;
}

+ (id)currentDevice;
+ (_Bool)_isWatchCompanion;
+ (_Bool)_isWatch;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(_Bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (_Bool)_isLowEnd;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned int)arg1;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_registerForSystemSounds:(id)arg1;
- (_Bool)_isSystemSoundEnabled;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)_softwareDimmingAlpha;
@property(nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
- (void)playInputClick;
@property(readonly, nonatomic) long long userInterfaceIdiom;
@property(readonly, nonatomic, getter=isMultitaskingSupported) _Bool multitaskingSupported;
@property(readonly, nonatomic) _Bool proximityState;
- (void)_setExpectsFaceContactInLandscape:(_Bool)arg1;
@property(nonatomic, getter=isProximityMonitoringEnabled) _Bool proximityMonitoringEnabled;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) long long batteryState;
@property(nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)beginGeneratingDeviceOrientationNotifications;
@property(readonly, nonatomic) long long orientation;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSUUID *identifierForVendor;
@property(readonly, retain, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)_enableDeviceOrientationEvents:(_Bool)arg1;
- (_Bool)_supportsForceTouch;
- (_Bool)_hasGraphicsQualityOverride;
- (void)_clearGraphicsQualityOverride;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (long long)_graphicsQuality;
- (void)_setHasTouchPad:(_Bool)arg1;
- (_Bool)_hasTouchPad;
- (_Bool)_isTTYEnabled;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setProximityState:(_Bool)arg1;
- (long long)_predictionGraphicsQuality;
- (long long)_keyboardGraphicsQuality;
- (id)_tapticEngine;
- (_Bool)_supportsHapticFeedback;

@end

