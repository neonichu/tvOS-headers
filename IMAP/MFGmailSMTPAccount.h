//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/SMTPAccount.h>

#import <IMAP/MFClientTokenAuthProtocol-Protocol.h>
#import <IMAP/MFOAuth2TokenAuthProtocol-Protocol.h>

@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol>
{
    GmailAccount *_account;
}

+ (id)accountTypeIdentifier;
@property(retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount; // @synthesize mailAccount=_account;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (id)_urlFromResponse:(id)arg1;
- (id)displayHostname;
- (id)preferredAuthScheme;
- (id)oauth2Token;
- (id)clientToken;
- (id)password;
- (id)username;
- (unsigned int)portNumber;
- (id)hostname;
- (_Bool)usesSSL;
- (_Bool)shouldUseAuthentication;
- (id)accountForRenewingCredentials;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

