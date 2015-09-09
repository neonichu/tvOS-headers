//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, _AKAppleIDAuthenticationContextManager;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface AKAppleIDAuthenticationController : NSObject
{
    NSString *_serviceID;
    NSXPCConnection *_authenticationServiceConnection;
    _AKAppleIDAuthenticationContextManager *_contextManager;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
    NSLock *_connectionLock;
}

- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <AKAppleIDAuthenticationDelegate> delegate;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

