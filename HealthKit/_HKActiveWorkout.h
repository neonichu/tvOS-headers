//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKWorkout.h>

#import <HealthKit/_HKActiveWorkoutClient-Protocol.h>

@class NSData, NSDate, NSDictionary, NSMutableData, NSMutableDictionary, NSObject, NSString;
@protocol NSXPCProxyCreating, OS_dispatch_queue, _HKActiveWorkoutDelegate, _HKActiveWorkoutLifecycleDelegate;

@interface _HKActiveWorkout : HKWorkout <_HKActiveWorkoutClient>
{
    id <_HKActiveWorkoutDelegate> _delegate;
    id <_HKActiveWorkoutLifecycleDelegate> _lifecycleDelegate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _workoutState;
    long long _serverState;
    NSDate *_lastObservedDate;
    NSMutableDictionary *_resumeDataByType;
    id <NSXPCProxyCreating> _serverProxy;
    NSMutableData *_associatedObjectUUIDData;
    _Bool _shouldUseDeviceData;
}

+ (_Bool)supportsSecureCoding;
+ (id)_serverInterface;
+ (id)_clientInterface;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 shouldUseDeviceData:(_Bool)arg11 metadata:(id)arg12;
@property(readonly, getter=_shouldUseDeviceData) _Bool shouldUseDeviceData; // @synthesize shouldUseDeviceData=_shouldUseDeviceData;
@property(readonly) NSDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (void)_queue_setEndDate:(id)arg1;
- (void)_setEndDate:(id)arg1;
- (id)_queue_endDate;
- (id)endDate;
- (void)_setTotalDistance:(id)arg1;
- (id)totalDistance;
- (void)_setTotalEnergyBurned:(id)arg1;
- (id)totalEnergyBurned;
@property(readonly, getter=_associatedObjectUUIDData) NSData *associatedObjectUUIDData;
@property(readonly) long long serverState;
@property(getter=_lifecycleDelegate, setter=_setLifecycleDelegate:) __weak id <_HKActiveWorkoutLifecycleDelegate> lifecycleDelegate;
- (id)_workoutServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)_queue_serverAttached;
- (_Bool)_serverAttached;
- (void)_setServerProxy:(id)arg1;
- (id)_serverProxy;
@property(readonly) long long workoutState;
- (id)metadata;
@property __weak id <_HKActiveWorkoutDelegate> delegate;
- (void)_queue_alertDelegateDidUpdateState:(long long)arg1 date:(id)arg2;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalBasalEnergyBurned;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalActiveEnergyBurned;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalDistance;
- (id)_inactiveCopy;
- (void)_addSamples:(id)arg1;
- (void)_queue_deactivate;
- (void)_queue_addAssociatedObjectUUIDs:(id)arg1;
- (void)_queue_addDistance:(id)arg1;
- (void)_queue_addBasalEnergyBurned:(id)arg1;
- (void)_queue_addActiveEnergyBurned:(id)arg1;
- (void)_queue_updateTotalsWithQuantity:(id)arg1 quantityType:(id)arg2;
- (void)serverFailedWithError:(id)arg1;
- (void)serverStoppedWithDate:(id)arg1;
- (void)serverPausedWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (id)_propertyQueue_serverConfiguration;
- (void)_connectionDidEncounterError:(id)arg1;
- (void)_attachServerWithClientQueue:(id)arg1 lifecycleDelegate:(id)arg2 connection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleWorkoutPausedWithDate:(id)arg1;
- (void)_queue_transitionToServerState:(long long)arg1;
- (void)endWorkoutWithDate:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeWorkoutFromDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_objectCanBeSaved:(id *)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

