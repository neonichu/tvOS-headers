//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, NSTimer, UIViewController;

@interface CNFAccountRegistrar : NSObject
{
    CDUnknownBlockType _completionBlock;
    IMAccount *_account;
    NSTimer *_registrationTimer;
    long long _serviceType;
    UIViewController *_presentationViewController;
}

@property(retain) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain) NSTimer *registrationTimer; // @synthesize registrationTimer=_registrationTimer;
@property(retain) IMAccount *account; // @synthesize account=_account;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_registrationTimerFired:(id)arg1;
- (void)registerAccountWithUsername:(id)arg1 password:(id)arg2 service:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)continueRegistrationForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_continueRegisteringAuthenticatedAccount:(id)arg1;
- (void)_configureAliasesForAccount:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1 presentationViewController:(id)arg2;

@end

