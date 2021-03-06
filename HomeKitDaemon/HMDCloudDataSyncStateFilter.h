//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>

@class HMMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMMessageReceiver>
{
    _Bool _keychainSyncEnabled;
    _Bool _keychainSyncRequiredPopShown;
    _Bool _iCloudAccountActive;
    _Bool _cloudDataSyncCompleted;
    _Bool _serverTokenAvailable;
    _Bool _decryptionFailed;
    _Bool _networkConnectivityAvailable;
    int _circleNotificationToken;
    NSUUID *_uuid;
    HMMessageDispatcher *_msgDispatcher;
    long long _totalTransientPeerDevices;
    NSObject<OS_dispatch_source> *_popupTimer;
    long long _totalHomes;
}

+ (_Bool)isWhitelistedRemoteTransportMessage:(id)arg1;
@property(nonatomic) _Bool networkConnectivityAvailable; // @synthesize networkConnectivityAvailable=_networkConnectivityAvailable;
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property(nonatomic) long long totalHomes; // @synthesize totalHomes=_totalHomes;
@property(nonatomic) _Bool serverTokenAvailable; // @synthesize serverTokenAvailable=_serverTokenAvailable;
@property(nonatomic) _Bool cloudDataSyncCompleted; // @synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted;
@property(nonatomic) _Bool iCloudAccountActive; // @synthesize iCloudAccountActive=_iCloudAccountActive;
@property(nonatomic) _Bool keychainSyncRequiredPopShown; // @synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *popupTimer; // @synthesize popupTimer=_popupTimer;
@property(nonatomic) long long totalTransientPeerDevices; // @synthesize totalTransientPeerDevices=_totalTransientPeerDevices;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(nonatomic) int circleNotificationToken; // @synthesize circleNotificationToken=_circleNotificationToken;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)shouldCloudSyncData;
- (void)resetConfiguration;
- (void)updateServerTokenAvailable:(_Bool)arg1;
- (void)_updateCloudDataSyncState:(_Bool)arg1;
- (void)updateCloudDataSyncState:(_Bool)arg1;
- (_Bool)_cloudSyncinProgressCheck;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (void)updateTotalHomes:(long long)arg1;
- (void)_stopPopupTimer;
- (void)_startPopupTimer;
- (void)_handleAccountStatusChanged:(id)arg1;
- (void)updateNetworkConnectivity:(_Bool)arg1;
- (void)updateDecryptionFailed:(_Bool)arg1;
- (void)_handleCircleChangedNotification;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)dealloc;
- (void)_registerForCircleChangeNotifications;
- (id)initWithName:(id)arg1 messageDispatcher:(id)arg2 totalTransientPeerDevices:(unsigned long long)arg3 serverTokenAvailable:(_Bool)arg4 totalHomes:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

