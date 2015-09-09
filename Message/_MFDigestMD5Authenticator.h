//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator
{
    unsigned int _maxbuf:16;
    unsigned int _securityLevel:2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}

- (void)setExpectedResponse:(id)arg1;
- (void)setCryptInfo:(void *)arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (int)securityLevel;
- (void)setSecurityLevel:(int)arg1;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (void)dealloc;

@end

