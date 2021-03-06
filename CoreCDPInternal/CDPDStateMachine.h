//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleDelegate-Protocol.h>
#import <CoreCDPInternal/CDPDRemoteDeviceSecretValidatorDelegate-Protocol.h>
#import <CoreCDPInternal/CDPDSecureBackupDelegate-Protocol.h>

@class CDPContext, CDPDCircleController, CDPDPCSController, CDPDSecureBackupController, NSString;
@protocol CDPStateUIProviderInternal;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate, CDPDRemoteDeviceSecretValidatorDelegate>
{
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    CDPDPCSController *_pcsController;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    _Bool _attemptedCDPEnable;
}

- (void).cxx_destruct;
- (void)remoteSecretValidator:(id)arg1 recoverSecureBackupWithSecret:(id)arg2 device:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)remoteSecretValidator:(id)arg1 applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg2;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;
- (void)joinCircleAfterRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareCircleStateForRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)synchronizeCircleViewsForSecureBackupController:(id)arg1;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (void)_resetAccountCDPStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_recoverSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_confirmCDPEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAllowCDPEnrollment;
- (void)_handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

