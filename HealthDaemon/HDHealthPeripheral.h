//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CBPeripheralDelegate-Protocol.h>

@class CBPeripheral, NSMutableArray, NSString, NSUUID;

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate>
{
    CBPeripheral *_cbPeripheral;
    NSMutableArray *_delegates;
}

@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) CBPeripheral *cbPeripheral; // @synthesize cbPeripheral=_cbPeripheral;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly) NSString *name;
@property(readonly) long long state;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCBPeripheral:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

