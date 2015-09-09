//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFAccount, MFAuthScheme, MFConnection;

@interface MFSASLAuthenticator : NSObject
{
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}

- (void)setMissingPasswordError;
- (_Bool)couldRetry;
- (_Bool)base64EncodeResponseData;
- (_Bool)isUsingSSL;
- (id)securityLayer;
- (_Bool)justSentPlainTextPassword;
- (void)setAuthenticationState:(int)arg1;
- (int)authenticationState;
- (id)responseForServerData:(id)arg1;
- (_Bool)supportsInitialClientResponse;
- (id)saslName;
- (id)account;
- (id)authScheme;
- (void)dealloc;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;

@end

