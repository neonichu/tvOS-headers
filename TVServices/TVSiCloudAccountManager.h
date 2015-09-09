//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSOperationQueue;

@interface TVSiCloudAccountManager : NSObject
{
    ACAccount *_activeAccount;
    ACAccountStore *_accountStore;
    NSOperationQueue *_networkingQueue;
}

@property(retain, nonatomic) NSOperationQueue *networkingQueue; // @synthesize networkingQueue=_networkingQueue;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void).cxx_destruct;
- (void)_handleTOCAgreedForAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadTOCForAccount:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)_performTermsAndConditionsUpdateForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_standardErrorDialogWithHeader:(id)arg1 message:(id)arg2 defaultButton:(id)arg3;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (id)_messageForError:(id)arg1;
- (void)_handleAuthenticationError:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isAccountInLilacMode:(id)arg1;
- (_Bool)_isPasswordRequiredToValidateAccount:(id)arg1;
- (void)_renewCredentialsForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_authenticateAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchFamilyDetailsForActiveAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)signOutActiveAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewCredentialsForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)signInWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInWithAuthenticationContext:(id)arg1 displayingReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

