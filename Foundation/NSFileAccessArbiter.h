//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSFileAccessNode *_rootNode;
    NSObject<OS_xpc_object> *_superarbitrationServer;
    NSObject<OS_dispatch_source> *_debugSignalSource;
}

- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;
- (void)_registerForDebugInfoRequests;
- (void)_getDebugInformationIncludingEverything:(_Bool)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)_handleCanceledClient:(id)arg1;
- (void)_handleMessage:(id)arg1 forSubarbitrationClaim:(id)arg2 server:(id)arg3;
- (void)_handleMessage:(id)arg1 fromClient:(id)arg2;
- (_Bool)_handleMessage:(id)arg1 ofKind:(id)arg2 withParameters:(id)arg3 embeddedServer:(id)arg4 fromClient:(id)arg5;
- (void)_sendSubarbitersMessageWithKind:(id)arg1 parameters:(id)arg2;
- (id)rootNode;
- (void)stopArbitrating;
- (void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2;
- (void)_removeReactorForID:(id)arg1;
- (void)_willRemoveReactor:(id)arg1;
- (_Bool)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2;
- (void)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(_Bool)arg3 withLastEventID:(id)arg4;
- (void)_tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)_writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)_cancelAccessClaimForID:(id)arg1;
- (void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)_revokeAccessClaimForID:(id)arg1 fromLocal:(_Bool)arg2;
- (void)_grantAccessClaim:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 isSubarbiter:(_Bool)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

