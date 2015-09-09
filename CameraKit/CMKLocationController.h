//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSMutableArray, NSString;

@interface CMKLocationController : NSObject <CLLocationManagerDelegate>
{
    _Bool _enabled;
    _Bool _headingEnabled;
    _Bool __monitoringLocation;
    CLLocation *_currentLocation;
    CLLocationManager *__locationManager;
    NSMutableArray *__assetsWaitingForLocation;
}

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (void)setUsesEffectiveBundleIdentifier:(_Bool)arg1;
+ (_Bool)usesEffectiveBundleIdentifier;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *_assetsWaitingForLocation; // @synthesize _assetsWaitingForLocation=__assetsWaitingForLocation;
@property(readonly, nonatomic) CLLocationManager *_locationManager; // @synthesize _locationManager=__locationManager;
@property(readonly, nonatomic, getter=_isMonitoringLocation) _Bool _monitoringLocation; // @synthesize _monitoringLocation=__monitoringLocation;
@property(readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic, getter=isHeadingEnabled) _Bool headingEnabled; // @synthesize headingEnabled=_headingEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_applicationStateChanged:(id)arg1;
- (void)addLocationToAssetWhenAvailable:(id)arg1;
- (_Bool)_updateLocationMetadataForAsset:(id)arg1;
- (_Bool)addLocationToMetadata:(id)arg1 withOrientation:(long long)arg2 device:(long long)arg3;
- (id)_currentLocationMetadataWithDeviceOrientation:(long long)arg1 forDevice:(long long)arg2;
- (void)_updateAssetsWaitingOnLocation;
- (void)_updateLocationMonitoring;
- (void)_stopMonitoringLocationUpdates;
- (void)_authorizeOrStartLocationManager;
- (void)_startMonitoringLocationUpdates;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
