//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKCharacteristicType, HKDevice, HKHealthService, HKObjectType, HKQuantity, HKQuantityType, HKSource, HKUnit, HKWorkout, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSPredicate, NSSet, NSString, NSUUID, _HKActiveWorkoutServerConfiguration, _HKMedicalIDData, _HKQueryServerDataObject, _HKWorkoutSession;

@protocol HDServerInterface <NSObject>
- (void)splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(void (^)(double, NSError *))arg3;
- (void)weeklySummaryInfoForDate:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchUnitPreferencesForTypes:(NSSet *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setPreferredUnit:(HKUnit *)arg1 forType:(HKQuantityType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)unregisterKeepAliveWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)registerKeepAliveWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)restoreEntitlement:(NSString *)arg1;
- (void)dropEntitlement:(NSString *)arg1;
- (void)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSPredicate *)arg3 groupBy:(NSArray *)arg4 orderBy:(NSArray *)arg5 limit:(long long)arg6 completion:(void (^)(NSArray *, NSArray *, _Bool, NSError *))arg7;
- (void)saveDataObjects:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 sourceVersion:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)createBluetoothSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)fetchDiagnosticsWithKey:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)stopRecordingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startRecordingDataToFile:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)stopReplayingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startReplayingDataFromFile:(NSString *)arg1 repeat:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)stopFakingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(HKQuantity *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)submitMetricsIgnoringAnchor:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)performMigrationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getDatabaseSizeInBytesWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)resetNanoSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)forceNanoSyncWithPullRequest:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeDefaultForKey:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)setDefaultValue:(id)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)getDefaultForKey:(NSString *)arg1 withHandler:(void (^)(id, NSError *))arg2;
- (void)setEnabledStatus:(_Bool)arg1 forPeripheral:(NSUUID *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)getEnabledStatusForPeripheral:(NSUUID *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)removePeripheral:(NSUUID *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addPeripheral:(NSUUID *)arg1 name:(NSString *)arg2 forServices:(NSArray *)arg3 withCompletion:(void (^)(_Bool, NSError *))arg4;
- (void)performHealthServiceOperation:(NSString *)arg1 onSession:(unsigned long long)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(NSString *, _Bool, NSError *))arg4;
- (void)getHealthServiceProperty:(NSString *)arg1 forSession:(unsigned long long)arg2 withHandler:(void (^)(id, NSError *))arg3;
- (void)removePairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addPairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)getHealthServicePairingsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)endHealthServiceSession:(unsigned long long)arg1;
- (void)startHealthServiceSession:(HKHealthService *)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)endBluetoothStatusUpdates;
- (void)beginBluetoothStatusUpdates:(void (^)(long long, NSError *))arg1;
- (void)setCharacteristic:(id)arg1 forDataType:(HKCharacteristicType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)fetchCharacteristicWithDataType:(HKObjectType *)arg1 handler:(void (^)(id, NSError *))arg2;
- (void)deleteMedicalIDDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)medicalIDDataCreateIfNecessary:(_Bool)arg1 completion:(void (^)(_HKMedicalIDData *, NSError *))arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)deleteSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteAllSamplesWithTypes:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)_remote_fetchDevicesMatchingProperty:(NSString *)arg1 values:(NSSet *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)_remote_fetchDataTypesForDevice:(HKDevice *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)_remote_fetchDataTypesForSource:(HKSource *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)currentlyPairedWatchIdentifierWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)setOrderedSources:(NSArray *)arg1 forObjectType:(HKObjectType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)orderedSourcesForObjectType:(HKObjectType *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)allSourcesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)addSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(HKSource *, NSError *))arg3;
- (void)hasSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)closeTransactionWithDataType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(HKObjectType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)stopWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)startWorkoutSession:(_HKWorkoutSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)associateSamplesWithUUIDs:(NSData *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)pauseAllActiveWorkoutsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(_HKActiveWorkoutServerConfiguration *)arg2 handler:(void (^)(id, _Bool, NSError *))arg3;
- (void)addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)hasAnyActiveWorkouts:(void (^)(_Bool, NSError *))arg1;
- (void)_remote_fetchAllDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)deleteDataObjectsOfType:(HKObjectType *)arg1 matchingPredicate:(NSPredicate *)arg2 handler:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)deleteDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)saveDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)startQueryWithUUID:(NSUUID *)arg1 serverDataObject:(_HKQueryServerDataObject *)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(void (^)(id, _Bool, NSError *))arg5;
- (void)endAuthorizationDelegateTransactionWithError:(NSError *)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 handler:(void (^)(HKSource *, NSError *))arg2;
- (void)resetAuthorizationStatusForBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setRequestedAuthorizationForBundleIdentifier:(NSString *)arg1 shareTypes:(NSSet *)arg2 readTypes:(NSSet *)arg3 prompt:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)setAuthorizationStatuses:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)allAuthorizationRecordsForType:(HKObjectType *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)allAuthorizationRecordsForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)handleAuthorizationForExtensionWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)requestAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 shouldPrompt:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)authorizationStatusForType:(HKObjectType *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)setIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

