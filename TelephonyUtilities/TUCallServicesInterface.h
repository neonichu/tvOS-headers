//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/TUCallServicesClient-Protocol.h>
#import <TelephonyUtilities/TUCallServicesProtocol-Protocol.h>
#import <TelephonyUtilities/TUVideoProxyCallManagerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, NSXPCConnection, TUCallNotificationManager, TUProxyCallModel, TUVideoProxyCallManager;
@protocol OS_dispatch_semaphore, TUCallServicesDaemonDelegate;

@interface TUCallServicesInterface : NSObject <TUVideoProxyCallManagerDelegate, TUCallServicesClient, TUCallServicesProtocol>
{
    _Bool _hasRequestedInitialState;
    int _connectionRequestNotificationToken;
    NSArray *_currentCalls;
    id <TUCallServicesDaemonDelegate> _daemonDelegate;
    TUProxyCallModel *_proxyCallModel;
    NSArray *_localProxyCalls;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
    TUCallNotificationManager *_callNotificationManager;
    TUVideoProxyCallManager *_videoProxyCallManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TUVideoProxyCallManager *videoProxyCallManager; // @synthesize videoProxyCallManager=_videoProxyCallManager;
@property(retain, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uniqueProxyIdentifierToProxyCallSemaphore; // @synthesize uniqueProxyIdentifierToProxyCallSemaphore=_uniqueProxyIdentifierToProxyCallSemaphore;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property(nonatomic) _Bool hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *initialStateSemaphore; // @synthesize initialStateSemaphore=_initialStateSemaphore;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
@property(copy, nonatomic) NSArray *localProxyCalls; // @synthesize localProxyCalls=_localProxyCalls;
@property(retain, nonatomic) TUProxyCallModel *proxyCallModel; // @synthesize proxyCallModel=_proxyCallModel;
@property(nonatomic) id <TUCallServicesDaemonDelegate> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
- (void).cxx_destruct;
- (void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)handleCallModelStateChanged:(id)arg1;
- (void)handleCallControlFailureWithUserInfo:(id)arg1;
- (void)handleConversationReceivedData:(id)arg1 forCallWithUUID:(id)arg2;
- (void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
- (void)handleCurrentCallsChanged:(id)arg1;
- (void)handleRemoteFrequencyChangedTo:(id)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2;
- (void)handleLocalFrequencyChangedTo:(id)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2;
- (void)setClientCapabilities:(id)arg1;
- (void)setCurrentOutputDeviceToDeviceWithUID:(id)arg1;
- (void)setCurrentInputDeviceToDeviceWithUID:(id)arg1;
- (void)sendConversationData:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)videoProxyCallFiltered:(id)arg1;
- (void)updateCallWithProxy:(id)arg1;
- (void)sendTelephonyDigits:(id)arg1;
- (void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pullThumperCallFromClientUsingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)pullRelayingCallsFromClient;
- (void)disconnectAllCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)endHeldAndAnswerCallWithUniqueProxyIdentifier:(id)arg1;
- (void)endActiveAndAnswerCallWithUniqueProxyIdentifier:(id)arg1;
- (void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (void)swapCalls;
- (void)unconferenceCallWithUniqueProxyIdentifier:(id)arg1;
- (void)conferenceCallWithUniqueProxyIdentifier:(id)arg1;
- (void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (void)answerCallWithUniqueProxyIdentifier:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)setProxyCall:(id)arg1 forUniqueProxyIdentifier:(id)arg2;
- (id)proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (id)proxyCallWithCall:(id)arg1;
- (id)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateLocalProxyCallsWithCalls:(id)arg1;
@property(copy, nonatomic) NSArray *currentCalls; // @synthesize currentCalls=_currentCalls;
- (void)_updateCallModelState:(id)arg1 shouldSendNotifications:(_Bool)arg2;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
- (void)requestInitialStateIfNecessaryAndWait;
- (void)requestInitialStateIfNecessary;
- (void)requestInitialStateIfNecessaryAndSendNotifications:(_Bool)arg1;
- (void)notifyCallServicesDaemonOfNewCall;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (id)daemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool daemonDelegateIsLocal;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

