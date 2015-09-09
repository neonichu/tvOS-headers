//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@class HDHealthDevicePropertyManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDDeviceInformationService : HDHealthService
{
    _Bool _deviceInformationHasBeenLoaded;
    HDHealthDevicePropertyManager *_propertyManager;
    NSMutableDictionary *_characteristics;
    NSMutableDictionary *_propertyValues;
    NSMutableSet *_propertiesLeftToFetch;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingDeviceInformationLoadedBlocks;
}

+ (id)implementedProperties;
+ (id)serviceUUID;
+ (long long)serviceType;
@property(retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks; // @synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks;
@property(nonatomic) _Bool deviceInformationHasBeenLoaded; // @synthesize deviceInformationHasBeenLoaded=_deviceInformationHasBeenLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *propertiesLeftToFetch; // @synthesize propertiesLeftToFetch=_propertiesLeftToFetch;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(retain, nonatomic) NSMutableDictionary *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) __weak HDHealthDevicePropertyManager *propertyManager; // @synthesize propertyManager=_propertyManager;
- (void).cxx_destruct;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_readProperty:(id)arg1;
- (void)readProperty:(id)arg1;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (id)_propertyValueForPropertyName:(id)arg1;
@property(readonly) NSString *softwareRevision;
@property(readonly) NSString *firmwareRevision;
@property(readonly) NSString *hardwareRevision;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *modelNumber;
@property(readonly) NSString *manufacturerName;
- (id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3;

@end

