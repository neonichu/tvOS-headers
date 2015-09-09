//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDOAuthSignerProtocol-Protocol.h>

@class ACDClient, ACDClientAuthorizationManager, ACDDatabase, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDDatabase *_database;
    ACDClient *_client;
    ACDClientAuthorizationManager *_authorizationManager;
    _Bool _shouldIncludeAppIdInRequest;
}

- (void).cxx_destruct;
- (id)csForAccountType:(id)arg1;
- (id)ckForAccountType:(id)arg1;
- (_Bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setShouldIncludeAppIdInRequest:(_Bool)arg1;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

