//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFSASLAuthenticator.h>

@interface _MFOAuth2TokenAuthenticator : MFSASLAuthenticator
{
    _Bool _sentResponse;
}

- (id)responseForServerData:(id)arg1;
- (_Bool)justSentPlainTextPassword;
- (_Bool)supportsInitialClientResponse;
- (id)saslName;

@end

