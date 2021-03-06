//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollectionManagerDelegate-Protocol.h>
#import <HealthDaemon/HDDatabaseMigrationDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemon-Protocol.h>
#import <HealthDaemon/NSXPCListenerDelegate-Protocol.h>

@class HDAchievementDoctorManager, HDAppLauncher, HDAppSubscriptionManager, HDAuthorizationManager, HDBackgroundTaskScheduler, HDCoachingDiagnosticManager, HDContentProtectionManager, HDDaemonSyncEngine, HDDataCollectionManager, HDDataManager, HDDataProvenanceManager, HDDatabase, HDDatabasePruningManager, HDDeviceManager, HDHealthDeviceManager, HDMetadataManager, HDMigrationManager, HDNanoSyncManager, HDPluginManager, HDProcessStateManager, HDSourceManager, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutManager, NSMutableArray, NSMutableSet, NSString, NSXPCListener;
@protocol HDDaemonDeviceManager, HDHealthDataCollectionManager, HDHealthDataManager, HDHealthDatabase, HDHealthMetadataManager, HDPairedWatchBundleIdentifierProvider, HDSyncEngine, HDViewOnWakeService, OS_dispatch_queue;

@interface HDDaemon : NSObject <HDDataCollectionManagerDelegate, HDDiagnosticObject, HDDatabaseMigrationDelegate, NSXPCListenerDelegate, HDHealthDaemon>
{
    NSString *_homeDirectoryPath;
    NSMutableSet *_servers;
    NSObject<OS_dispatch_queue> *_queue;
    HDDaemonSyncEngine *_syncEngine;
    HDContentProtectionManager *_contentProtectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDProcessStateManager *_processStateManager;
    HDPluginManager *_pluginManager;
    HDDataProvenanceManager *_dataProvenanceManager;
    HDAchievementDoctorManager *_achievementDoctorManager;
    HDDatabasePruningManager *_databasePruningManager;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    NSXPCListener *_serviceListener;
    NSMutableArray *_daemonLaunchObservers;
    _Bool _daemonReady;
    HDAppLauncher *_appLauncher;
    HDAuthorizationManager *_authorizationManager;
    HDDatabase *_database;
    HDDataCollectionManager *_dataCollectMgr;
    HDDataManager *_dataMgr;
    HDHealthDeviceManager *_deviceManager;
    HDSourceManager *_sourceManager;
    HDDeviceManager *_sourceDeviceManager;
    HDMetadataManager *_metadataManager;
    HDAppSubscriptionManager *_subscriptionManager;
    HDMigrationManager *_migrationManager;
    HDUnitPreferencesManager *_unitPreferencesManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDWorkoutManager *_workoutManager;
    id <HDViewOnWakeService> _viewOnWakeService;
    HDCoachingDiagnosticManager *_coachingDiagnosticManager;
    id <HDPairedWatchBundleIdentifierProvider> _pairedWatchBundleIDProvider;
}

+ (_Bool)_shouldInitializeDaemon;
@property(nonatomic) __weak id <HDPairedWatchBundleIdentifierProvider> pairedWatchBundleIDProvider; // @synthesize pairedWatchBundleIDProvider=_pairedWatchBundleIDProvider;
@property(retain, nonatomic) HDDatabasePruningManager *databasePruningManager; // @synthesize databasePruningManager=_databasePruningManager;
@property(retain, nonatomic) HDCoachingDiagnosticManager *coachingDiagnosticManager; // @synthesize coachingDiagnosticManager=_coachingDiagnosticManager;
@property(retain, nonatomic) id <HDViewOnWakeService> viewOnWakeService; // @synthesize viewOnWakeService=_viewOnWakeService;
@property(retain, nonatomic) HDWorkoutManager *workoutManager; // @synthesize workoutManager=_workoutManager;
@property(retain, nonatomic) HDNanoSyncManager *nanoSyncManager; // @synthesize nanoSyncManager=_nanoSyncManager;
@property(retain, nonatomic) HDUnitPreferencesManager *unitPreferencesManager; // @synthesize unitPreferencesManager=_unitPreferencesManager;
@property(retain, nonatomic) HDMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(retain, nonatomic) HDAppSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(retain, nonatomic) HDMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property(retain, nonatomic) HDDeviceManager *sourceDeviceManager; // @synthesize sourceDeviceManager=_sourceDeviceManager;
@property(retain, nonatomic) HDSourceManager *sourceManager; // @synthesize sourceManager=_sourceManager;
@property(retain, nonatomic) HDHealthDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) HDDataManager *dataMgr; // @synthesize dataMgr=_dataMgr;
@property(retain, nonatomic) HDDataCollectionManager *dataCollectMgr; // @synthesize dataCollectMgr=_dataCollectMgr;
@property(retain, nonatomic) HDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) HDAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) HDAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
- (void).cxx_destruct;
- (void)runDaemon;
- (id)diagnosticDescription;
- (void)syncImmediatelyWithReason:(id)arg1;
@property(readonly) _Bool isAppleWatch;
- (void)endTransaction:(id)arg1;
- (void)beginTransaction:(id)arg1;
@property(readonly) HDDataProvenanceManager *dataProvenanceManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property(readonly) HDContentProtectionManager *contentProtectionManager;
@property(readonly) id <HDHealthMetadataManager> healthMetadataManager;
@property(readonly) HDDeviceManager *healthSourceDeviceManager;
@property(readonly) HDSourceManager *healthSourceManager;
@property(readonly) id <HDSyncEngine> syncEngine;
@property(readonly) id <HDDaemonDeviceManager> healthDeviceManager;
@property(readonly) id <HDHealthDataManager> healthDataManager;
@property(readonly) id <HDHealthDataCollectionManager> healthDataCollectionManager;
@property(readonly) id <HDHealthDatabase> healthDatabase;
@property(readonly) NSString *homeDirectoryPath;
- (void)nukeAllWorkoutServers;
- (void)pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)didUpdateActiveWorkoutServers;
- (_Bool)hasAnyActiveWorkouts;
- (id)currentlyPairedWatchIdentifier;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_persistDataAndNotify:(id)arg1 provenance:(id)arg2 error:(id *)arg3;
- (void)_resetPrivacySettings;
- (void)_registerForDeviceNameChanges;
- (_Bool)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (_Bool)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (void)updateActivityCacheForNewWorkoutSamples;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3;
- (id)pluginDataCollectorsForCollectionManager:(id)arg1;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (_Bool)healthDataReceived:(id)arg1 provenance:(id)arg2 error:(id *)arg3;
- (id)newClientWithConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)databaseMigratorWithDatabase:(id)arg1;
- (void)_notifyDaemonLaunchObservers;
- (void)registerForDaemonReady:(id)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id)arg1;
- (void)_terminating;
- (void)_terminationCleanup;
- (void)_periodicUpdates;
- (_Bool)_motionTrackingAvailable;
- (void)_setUpLaunchEventHandler;
- (void)_setUpLaunchEventHandlerCompanion;
- (void)_setupMemoryWarningHandler;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpNotifydEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_setUpSignalHandlers;
- (void)_localeChanged:(id)arg1;
- (void)terminate;
- (void)invalidateAndWait;
- (id)_newUserCharacteristicsManager;
- (id)_newProcessStateManager;
- (void)dealloc;
- (id)initWithHomeDirectoryPath:(id)arg1 contentProtectionManager:(id)arg2 queue:(id)arg3;
- (id)initWithHomeDirectoryPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

