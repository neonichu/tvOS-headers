//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTimerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HAPTimer, HMDAccessoryManager, HMDApplicationRegistry, HMDApplicationVendorIDStore, HMDAssistantGather, HMDClientConnection, HMDCloudDataSyncManager, HMDCloudDataSyncStateFilter, HMDIDSMessageDispatcher, HMDIdentityRegistry, HMDLocation, HMDMessageFilterChain, HMDNameValidator, HMDPendingCloudSyncTransactions, HMDPowerManager, HMMessageDispatcher, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDHomeManager : NSObject <HMMessageReceiver, IDSServiceDelegate, HMDAccessoryManagerDelegate, HAPTimerDelegate>
{
    _Bool _accountActive;
    _Bool _accountStatusFailedDueToNetworkFailure;
    _Bool _backOffOperationInProgress;
    _Bool _uploadToCloudIsPending;
    _Bool _uploadHomeDataToCloud;
    _Bool _lastAnswerForShouldCloudSyncData;
    _Bool _newiCloudAccountAdded;
    _Bool _receivedAccountChangedNotification;
    _Bool _uploadMetadataToCloud;
    _Bool _ignoreFirstTimeReachabilityChanged;
    _Bool _companionReachable;
    _Bool _accountStatusIsAuthenticated;
    int _assetUpdatedNotification;
    int _newAssetInstalledNotification;
    NSUUID *_uuid;
    NSMutableArray *_homes;
    NSMutableDictionary *_homeNames;
    NSMutableArray *_uuidsOfRemovedHomes;
    NSUUID *_primaryHomeUUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_messageDispatcher;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    HMDAccessoryManager *_accessoryManager;
    NSMutableSet *_unassociatedRemotePeers;
    NSMutableDictionary *_associatedRemotePeers;
    NSMutableDictionary *_associatedWatchPeers;
    NSArray *_reachableWatchDeviceAddresses;
    unsigned long long _generationCounter;
    unsigned long long _assistantGenerationCounter;
    HMDNameValidator *_nameValidator;
    NSObject<OS_dispatch_source> *_accessoryFinderTimer;
    NSMutableArray *_pendingResponsesForAccessoryFinder;
    HMDPendingCloudSyncTransactions *_pendingTransactions;
    HMDPowerManager *_powerManager;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    NSUUID *_dataTag;
    struct __SCNetworkReachability *_reachability;
    long long _networkConnectionAvailable;
    NSMutableDictionary *_pendingDataSyncAcks;
    NSMutableDictionary *_pendingRemoteSessions;
    NSMutableSet *_pendingResidentSetupSessions;
    HMDMessageFilterChain *_msgFilterChain;
    NSMutableSet *_dialogCancelationContexts;
    HMDIdentityRegistry *_identityRegistry;
    unsigned long long _cloudOperationRetryCount;
    NSObject<OS_dispatch_source> *_cloudUploadTimer;
    NSObject<OS_dispatch_source> *_cloudOperationRetryTimer;
    unsigned long long _homeDatabaseSize;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    HMDLocation *_locationHandler;
    HMDApplicationRegistry *_appRegistry;
    NSMutableArray *_incomingInvitations;
    HMDClientConnection *_clientConnection;
    HMDAssistantGather *_gatherer;
    HMDApplicationVendorIDStore *_applicationVendorIDStore;
    HAPTimer *_remoteAccessHealthMonitorTimer;
}

+ (id)getCurrentUserID;
+ (id)activeAccountIdentifier;
+ (id)remotePeerDeviceAddress:(id)arg1;
+ (id)saltForDeviceSpecificIdentifier;
+ (id)createIdentifierSalt:(id)arg1;
+ (id)getUniqueDeviceIdSalt;
+ (_Bool)doesSaveReasonAffectOnlyLocalData:(id)arg1;
@property(retain, nonatomic) HAPTimer *remoteAccessHealthMonitorTimer; // @synthesize remoteAccessHealthMonitorTimer=_remoteAccessHealthMonitorTimer;
@property(nonatomic) _Bool accountStatusIsAuthenticated; // @synthesize accountStatusIsAuthenticated=_accountStatusIsAuthenticated;
@property(retain, nonatomic) HMDApplicationVendorIDStore *applicationVendorIDStore; // @synthesize applicationVendorIDStore=_applicationVendorIDStore;
@property(retain, nonatomic) HMDAssistantGather *gatherer; // @synthesize gatherer=_gatherer;
@property(retain, nonatomic) HMDClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) _Bool companionReachable; // @synthesize companionReachable=_companionReachable;
@property(nonatomic) _Bool ignoreFirstTimeReachabilityChanged; // @synthesize ignoreFirstTimeReachabilityChanged=_ignoreFirstTimeReachabilityChanged;
@property(retain, nonatomic) NSMutableArray *incomingInvitations; // @synthesize incomingInvitations=_incomingInvitations;
@property(retain, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(retain, nonatomic) HMDLocation *locationHandler; // @synthesize locationHandler=_locationHandler;
@property(nonatomic) int newAssetInstalledNotification; // @synthesize newAssetInstalledNotification=_newAssetInstalledNotification;
@property(nonatomic) int assetUpdatedNotification; // @synthesize assetUpdatedNotification=_assetUpdatedNotification;
@property(nonatomic) _Bool uploadMetadataToCloud; // @synthesize uploadMetadataToCloud=_uploadMetadataToCloud;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(nonatomic) unsigned long long homeDatabaseSize; // @synthesize homeDatabaseSize=_homeDatabaseSize;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cloudOperationRetryTimer; // @synthesize cloudOperationRetryTimer=_cloudOperationRetryTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cloudUploadTimer; // @synthesize cloudUploadTimer=_cloudUploadTimer;
@property(nonatomic) _Bool receivedAccountChangedNotification; // @synthesize receivedAccountChangedNotification=_receivedAccountChangedNotification;
@property(nonatomic) _Bool newiCloudAccountAdded; // @synthesize newiCloudAccountAdded=_newiCloudAccountAdded;
@property(nonatomic) _Bool lastAnswerForShouldCloudSyncData; // @synthesize lastAnswerForShouldCloudSyncData=_lastAnswerForShouldCloudSyncData;
@property(nonatomic) _Bool uploadHomeDataToCloud; // @synthesize uploadHomeDataToCloud=_uploadHomeDataToCloud;
@property(nonatomic) _Bool uploadToCloudIsPending; // @synthesize uploadToCloudIsPending=_uploadToCloudIsPending;
@property(nonatomic) unsigned long long cloudOperationRetryCount; // @synthesize cloudOperationRetryCount=_cloudOperationRetryCount;
@property(nonatomic) _Bool backOffOperationInProgress; // @synthesize backOffOperationInProgress=_backOffOperationInProgress;
@property(nonatomic) _Bool accountStatusFailedDueToNetworkFailure; // @synthesize accountStatusFailedDueToNetworkFailure=_accountStatusFailedDueToNetworkFailure;
@property(nonatomic) _Bool accountActive; // @synthesize accountActive=_accountActive;
@property(retain, nonatomic) HMDIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) NSMutableSet *dialogCancelationContexts; // @synthesize dialogCancelationContexts=_dialogCancelationContexts;
@property(retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property(retain, nonatomic) NSMutableSet *pendingResidentSetupSessions; // @synthesize pendingResidentSetupSessions=_pendingResidentSetupSessions;
@property(retain, nonatomic) NSMutableDictionary *pendingRemoteSessions; // @synthesize pendingRemoteSessions=_pendingRemoteSessions;
@property(retain, nonatomic) NSMutableDictionary *pendingDataSyncAcks; // @synthesize pendingDataSyncAcks=_pendingDataSyncAcks;
@property(nonatomic) long long networkConnectionAvailable; // @synthesize networkConnectionAvailable=_networkConnectionAvailable;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSUUID *dataTag; // @synthesize dataTag=_dataTag;
@property(retain, nonatomic) HMDCloudDataSyncManager *cloudDataSyncManager; // @synthesize cloudDataSyncManager=_cloudDataSyncManager;
@property(retain, nonatomic) HMDPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(retain, nonatomic) HMDPendingCloudSyncTransactions *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(retain, nonatomic) NSMutableArray *pendingResponsesForAccessoryFinder; // @synthesize pendingResponsesForAccessoryFinder=_pendingResponsesForAccessoryFinder;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *accessoryFinderTimer; // @synthesize accessoryFinderTimer=_accessoryFinderTimer;
@property(retain, nonatomic) HMDNameValidator *nameValidator; // @synthesize nameValidator=_nameValidator;
@property(nonatomic) unsigned long long assistantGenerationCounter; // @synthesize assistantGenerationCounter=_assistantGenerationCounter;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) NSArray *reachableWatchDeviceAddresses; // @synthesize reachableWatchDeviceAddresses=_reachableWatchDeviceAddresses;
@property(retain, nonatomic) NSMutableDictionary *associatedWatchPeers; // @synthesize associatedWatchPeers=_associatedWatchPeers;
@property(retain, nonatomic) NSMutableDictionary *associatedRemotePeers; // @synthesize associatedRemotePeers=_associatedRemotePeers;
@property(retain, nonatomic) NSMutableSet *unassociatedRemotePeers; // @synthesize unassociatedRemotePeers=_unassociatedRemotePeers;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMDIDSMessageDispatcher *idsMessageDispatcher; // @synthesize idsMessageDispatcher=_idsMessageDispatcher;
@property(retain, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSUUID *primaryHomeUUID; // @synthesize primaryHomeUUID=_primaryHomeUUID;
@property(retain, nonatomic) NSMutableArray *uuidsOfRemovedHomes; // @synthesize uuidsOfRemovedHomes=_uuidsOfRemovedHomes;
@property(retain, nonatomic) NSMutableDictionary *homeNames; // @synthesize homeNames=_homeNames;
@property(retain, nonatomic) NSMutableArray *homes; // @synthesize homes=_homes;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_remoteAccessHealthMonitorTimerDidFire:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)_postiCloudSigninState:(_Bool)arg1;
- (void)_teardownRemoteAccessForHomeCommon:(id)arg1;
- (void)_teardownRemoteAccessForHomeThroughCompanion:(id)arg1;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)teardownRemoteAccessForHome:(id)arg1;
- (void)_sendUpdateRequestToAdminForInvitation:(id)arg1 homeUUID:(id)arg2 invitationState:(long long)arg3;
- (_Bool)_getControllerKey:(id *)arg1 controllerUsername:(id *)arg2 error:(id *)arg3;
- (void)_handleRequestToUpdateHomeInvitationFromLocalUser:(id)arg1;
- (void)_handleRequestToUpdateHomeInvitationFromInviter:(id)arg1;
- (void)_handleDumpState:(id)arg1;
- (void)_handleQueryVersionInformation:(id)arg1;
- (void)_handleMetadataAssetUpdated;
- (void)_handleMetadataSync:(id)arg1;
- (void)_handleSetMetadata:(id)arg1;
- (void)_loadMetadataFromURL:(id)arg1 identifier:(id)arg2 remoteSource:(_Bool)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (_Bool)_acceptMetadataVersion:(id)arg1 schemaVersion:(id)arg2 error:(id *)arg3;
- (void)_handleQueryMetadata:(id)arg1;
- (void)_saveMetadata:(id)arg1 pushChangesToCloud:(_Bool)arg2;
- (void)saveMetadata:(id)arg1 pushChangesToCloud:(_Bool)arg2;
- (void)pushMetadataToCloud;
- (void)eraseLocalHomeData;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handleAccountAvailabilityChanged;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_electCompanionForRemoteAccess:(id)arg1;
- (void)_electRemoteAccessDeviceForHome:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_electRemoteAccessPeerForHome:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_electRemoteAccessPeerForHome:(id)arg1;
- (void)electRemoteAccessPeerForHome:(id)arg1;
- (void)_electRemoteGatewayForHomesAfterReachabilityChanges;
- (void)_updateHomesAboutNetworkConnectivity:(_Bool)arg1;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(_Bool)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_removeFromUnassociatedPeers:(id)arg1 home:(id)arg2;
- (void)_checkForRemotePeers;
- (void)checkForRemotePeers;
- (void)_handleReachableCompanionDevicesChanged:(id)arg1;
- (void)_checkAndInformCompanionDevices:(id)arg1;
- (void)_sendHomeDataToWatch:(id)arg1 performVersionCheck:(_Bool)arg2;
- (void)_sendHomeDataToAllWatches;
- (_Bool)_addWatch:(id)arg1 toAssociatedList:(id)arg2;
- (void)_sendKeysToWatch:(id)arg1;
- (void)_addWatch:(id)arg1;
- (void)_checkAndAddWatchDevices:(id)arg1 resend:(_Bool)arg2;
- (void)_checkAndAddWatchDevicesWithResend:(_Bool)arg1;
- (void)_handleReachableWatchDevicesChanged:(id)arg1;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleQueryAddressesOfControllersOnYourAccount:(id)arg1;
- (id)transientDeviceAddresses;
- (void)_handleControllerKeyAvailable;
- (void)_eraseLocalMetadata;
- (void)resetMessageFilterChain;
- (void)_eraseLocalHomeConfigurationAndDeleteMetadata:(_Bool)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_eraseLocalHomeConfiguration;
- (void)_eraseLocalHomeConfigurationCommon;
- (void)_eraseConfiguration:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleRetrieveVendorIdentifier:(id)arg1;
- (void)_handleRequestForCompanionKeysSync:(id)arg1;
- (_Bool)_removeAndAddKeyPair:(id)arg1 userName:(id)arg2;
- (void)_handleCompanionKeysSync:(id)arg1;
- (void)_handleHomesConfigSync:(id)arg1;
- (id)_prepareHomesVersionDict;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_removeAllUsersOfHome:(id)arg1;
- (_Bool)isThisDeviceAdminOfHome:(id)arg1;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_acceptHomeInviteFromUser:(id)arg1 message:(id)arg2 trackInvite:(_Bool)arg3;
- (void)_postIncomingInvitationStateChangedNotification:(id)arg1 newInvitationState:(long long)arg2;
- (id)_trackIncomingInvitationFromUser:(id)arg1 message:(id)arg2 invitationState:(long long)arg3 error:(id *)arg4;
- (void)_handleDismissDialogRequest:(id)arg1;
- (void)dismissDialogOnAllMyTransientDevicesWithContext:(id)arg1 selection:(_Bool)arg2;
- (void)_handleDismissBulletinRequest:(id)arg1;
- (void)dismissBulletinOnAllMyTransientDevicesWithContext:(id)arg1;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (_Bool)_findAnyAccessoryWithIdentities:(id)arg1 inAccessoryServers:(id)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_processAnyPendingRequestsForRemoteAccess:(_Bool)arg1;
- (void)_cancelAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startAccessoryFinderTimer;
- (void)_sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(_Bool)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2 saveToStore:(_Bool)arg3 removedByLocalUser:(_Bool)arg4;
- (void)_handleRequestAddHome:(id)arg1;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (void)_extractVendorIdentifierFor:(id)arg1 andRun:(CDUnknownBlockType)arg2;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_retryCloudOperationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startTimerToResetCloudOperationRetryCounter;
- (void)_monitorReachability;
- (void)_registerForMessages;
- (void)_postHomesDidUpdateNotification;
- (void)postHomesDidUpdateNotification;
- (void)_detectGuestHomesAddedAndRemovedWithCloudHomes:(id)arg1;
- (_Bool)_setPrimaryHome:(id)arg1 idsDataSync:(_Bool)arg2;
- (void)_updateTransportInformationInstances:(id)arg1 remoteAccessories:(id)arg2;
- (void)_handleDisabledResidentDevices;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(_Bool)arg4 idsDataSync:(_Bool)arg5 idsSyncUser:(id)arg6 dataVersion:(long long)arg7;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(_Bool)arg4 idsDataSync:(_Bool)arg5 idsSyncUser:(id)arg6 dataVersion:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_handleMergeWithCloudHomeData1:(id)arg1 cloudHomeData2:(id)arg2 needConflictResolution:(_Bool)arg3 homeDataFetechedTransaction:(id)arg4;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withIdentifiers:(id)arg2;
- (id)identifiersOfAccessories:(id)arg1;
- (void)_updateCloudDataSyncWithAccountState:(_Bool)arg1;
- (void)_fetchDataFromCloud;
- (void)_postMergeDataFromCloud;
- (void)_checkForAccountChanged;
- (_Bool)_configureHomesImpl:(id)arg1;
- (_Bool)_configureHomes:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)updateGenerationCounter;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (void)checkTimerTriggersForHomes;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(_Bool)arg1 forHome:(id)arg2;
- (void)_notifySyncDataChanged;
- (void)_setUniqueDeviceIdSalt:(id)arg1;
- (void)_setHomekitAssistantConfigurationVersion:(unsigned long long)arg1;
- (void)setHomeConfigurationVersion:(unsigned long long)arg1;
- (void)_updateHomeKitInUsePreferences;
- (void)updateIncomingInvitesPresent;
- (void)updateHomesConfigured;
- (void)_setHomeConfigurationKey:(struct __CFString *)arg1 value:(void *)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)_homeWithUUID:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (void)sendUnsecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 responseQueue:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(_Bool)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_postCloudSyncNotificationWithSuccess:(_Bool)arg1;
- (void)_handleAccountStatusDeterminedWithError:(id)arg1 homeDataRecordExists:(_Bool)arg2 metadataRecordExists:(_Bool)arg3;
- (void)_stopUploadTimer;
- (void)_startUploadTimer;
- (void)_resetCloudOperationRetryCounters;
- (void)_stopCloudOperationRetryTimer;
- (void)_startCloudOperationRetryWithTimeout:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadHomeConfigToCloud;
- (void)_pushChangesToCloud;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_pushMetadataChangesToUsers;
- (void)checkAndPushMetadataToUser:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2 electDestinationDevice:(_Bool)arg3;
- (void)_pushChangesToWatch:(id)arg1 paylod:(id)arg2 group:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_prepareDataForDevicesOnSameAccountForHome:(id)arg1 remoteGateway:(_Bool)arg2;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2 addedUser:(id)arg3;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_pushChangesToAllUsersOfAllHomes;
- (void)_saveMetadata:(_Bool)arg1;
- (void)_pushMetadataToCloud;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (void)saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(_Bool)arg2;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(_Bool)arg3;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(_Bool)arg3;
- (void)_handleSaveRequest:(id)arg1;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHome:(id)arg4;
- (id)_getHomeConfiguration;
- (void)_saveToPersistentStore;
- (void)__registerIncomingInvitations:(id)arg1;
- (void)dealloc;
- (void)accountAvailabilityChanged:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 identityRegistry:(id)arg6 appRegistry:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

