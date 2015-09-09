//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding>
{
    long long _authenticationPromptStyle;
    _Bool _fetchITunesAccountNames;
}

@property(nonatomic) _Bool fetchITunesAccountNames; // @synthesize fetchITunesAccountNames=_fetchITunesAccountNames;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
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

