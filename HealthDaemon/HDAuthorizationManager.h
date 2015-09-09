//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, _HDAuthorizationRequestGroup;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject>
{
    _Bool _suppressAuthorizationPrompt;
    double _requestSessionTimeout;
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestGroupsByBundleIdentifier;
    NSMutableArray *_pendingRequestGroups;
    _HDAuthorizationRequestGroup *_promptingRequestGroup;
}

@property(retain, nonatomic) _HDAuthorizationRequestGroup *promptingRequestGroup; // @synthesize promptingRequestGroup=_promptingRequestGroup;
@property(retain, nonatomic) NSMutableArray *pendingRequestGroups; // @synthesize pendingRequestGroups=_pendingRequestGroups;
@property(retain, nonatomic) NSMutableDictionary *requestGroupsByBundleIdentifier; // @synthesize requestGroupsByBundleIdentifier=_requestGroupsByBundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(nonatomic) double requestSessionTimeout; // @synthesize requestSessionTimeout=_requestSessionTimeout;
@property(nonatomic) _Bool suppressAuthorizationPrompt; // @synthesize suppressAuthorizationPrompt=_suppressAuthorizationPrompt;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_queue_resetAllAuthorizationRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_finishRequestGroup:(id)arg1 error:(id)arg2;
- (void)_queue_handleNextAuthorizationRequestGroup;
- (_Bool)_needsAuthorizationForRequestGroup:(id)arg1 overwriteAuthorizationStatus:(_Bool)arg2 error:(id *)arg3;
- (void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 writeTypes:(id)arg3 readTypes:(id)arg4 authorizationNeededHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_queue_setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationsUninstalledNotification:(id)arg1;
- (void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetAllAuthorizationRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithHealthDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

