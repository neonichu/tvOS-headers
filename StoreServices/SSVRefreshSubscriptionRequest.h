//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSAuthenticationContext;

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    _Bool _requestingOfflineSlot;
}

@property(nonatomic, getter=isRequestingOfflineSlot) _Bool requestingOfflineSlot; // @synthesize requestingOfflineSlot=_requestingOfflineSlot;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

