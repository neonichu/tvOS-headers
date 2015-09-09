//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol FBWorkspaceServerDelegate, OS_dispatch_queue, OS_xpc_object;

@interface FBWorkspaceServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_messagesQueuedForSend;
    _Bool _invalidated;
    _Bool _receivedEvent;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    id <FBWorkspaceServerDelegate> _delegate;
    unsigned long long _transactionBlockDepth;
    _Bool _triedToSendMessageInTransaction;
}

- (id)_handlerForSceneID:(id)arg1;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_queue_handleSceneDetachLayer:(id)arg1;
- (void)_queue_handleSceneUpdateLayer:(id)arg1;
- (void)_queue_handleSceneAttachLayer:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (_Bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withMessagePacker:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(CDUnknownBlockType)arg3 ofType:(Class)arg4;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (id)_queue;
- (void)_queue_clientExited;
- (void)_queue_setXPCConnection:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendActionsEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterSceneEventHandlerForSceneID:(id)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (id)auditToken;
@property(nonatomic) id <FBWorkspaceServerDelegate> delegate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

