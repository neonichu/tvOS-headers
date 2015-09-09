//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneAction.h>

#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class FBSSceneSnapshotRequestHandle, NSMutableArray, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate>
{
    NSMutableArray *_requests;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _completionHandler;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
- (Class)fallbackXPCEncodableClass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;
- (void)_executeNextRequest;
- (void)_finishAllRequests;
- (_Bool)_remainsActionable;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double expirationInterval; // @dynamic expirationInterval;
- (void)executeRequestsWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (void)setExpired:(_Bool)arg1;
@property(readonly, getter=isExpired) _Bool expired; // @dynamic expired;
- (void)dealloc;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

