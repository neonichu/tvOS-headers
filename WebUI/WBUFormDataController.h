//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSFormDataController.h>

#import <WebUI/UIActionSheetDelegate-Protocol.h>

@class NSString;

@interface WBUFormDataController : WBSFormDataController <UIActionSheetDelegate>
{
    _Bool _savePending;
}

+ (_Bool)_isDevicePasscodeSet;
+ (_Bool)keychainSyncEnabled;
- (void)prepareMeCard;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (_Bool)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1;
- (_Bool)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(_Bool)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(_Bool)arg3 fromFrame:(id)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(_Bool)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 submissionHandler:(CDUnknownBlockType)arg8;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id *)arg3 matchesForCurrentHost:(id *)arg4;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(_Bool)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (_Bool)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_webView:(id)arg1 formSubmission:(_Bool)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(_Bool)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (void)_didFillFieldWithGeneratedPassword:(id)arg1 inFrame:(id)arg2 webView:(id)arg3;
- (void)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg4;
- (_Bool)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 formType:(unsigned long long)arg4 promptingPolicy:(long long)arg5 webView:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(_Bool)arg7 confirmOverwritingCurrentPassword:(_Bool)arg8 submissionHandler:(CDUnknownBlockType)arg9;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (_Bool)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(_Bool)arg3;
- (void)clearAllFormCredentials;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_credentialForLoginForm:(id)arg1 inFrame:(id)arg2 completingPartialUser:(_Bool)arg3 matches:(id *)arg4 potentialMatches:(id *)arg5;
- (id)credentialForLoginForm:(id)arg1 inFrame:(id)arg2;
- (id)credentialFromMatches:(id)arg1 completingPartialUserInLoginForm:(id)arg2;
- (void)_autoFillPreferencesDidChange;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)mayPreFillInFrame:(id)arg1 ancestorFrames:(id)arg2;
- (_Bool)mayFillCreditCardDataInFrame:(id)arg1;
- (_Bool)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
@property(nonatomic) _Bool shouldAutoFillFromAddressBook;
@property(nonatomic) _Bool shouldAutoFillFromCreditCardData;
@property(nonatomic) _Bool shouldAutoFillPasswords;
- (_Bool)shouldAutoFillFromPreviousData;
- (_Bool)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (_Bool)_shouldSaveUsernamesAndPasswordsInWebView:(id)arg1;
- (_Bool)shouldAutoGeneratePasswordsInWebView:(id)arg1;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)_addressBookMatchesForProxyProperty:(id)arg1;
- (id)_meCard;
- (void)saveCompletionDBSoon;
- (id)completionDBPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

