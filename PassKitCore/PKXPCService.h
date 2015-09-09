//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface, PKWeakReference, PKXPCForwarder;
@protocol NSObject, PKXPCServiceDelegate;

@interface PKXPCService : NSObject
{
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    PKWeakReference *_exportedObject;
    PKWeakReference *_delegate;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_exportedProxy;
    _Bool _suspendCallbacks;
    id <NSObject> _foregroundListener;
    id <NSObject> _backgroundListener;
    int _serviceResumedToken;
    NSString *_machServiceName;
}

+ (void)setCallbacksSuspendedEvaluator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (CDUnknownBlockType)_newErrorHandlerWithSemaphore:(id)arg1;
- (CDUnknownBlockType)_newWrappedErrorHandlerForHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool connectionEstablished;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(nonatomic) id <PKXPCServiceDelegate> delegate;
- (void)_unregisterForServiceListenerResumedNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_sendSuspended;
- (void)_sendResumed;
- (void)_createConnectionIfPossible:(_Bool)arg1;
- (void)_invalidateConnectionIfPossible;
- (id)_connection;
- (void)_establishServiceConnection;
- (id)existingRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingRemoteObjectProxy;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)init;

@end

