//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SPXPCServer : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    CDUnknownBlockType _disconnectHandler;
    CDUnknownBlockType _defaultMessageHandler;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _idleTimerInterval;
    _Bool _shutdown;
}

@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType defaultMessageHandler; // @synthesize defaultMessageHandler=_defaultMessageHandler;
- (void).cxx_destruct;
- (void)setHandlerForMessageName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initListenerWithServiceName:(id)arg1;
- (void)startListening;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)_handleNewConnection:(id)arg1;
- (CDUnknownBlockType)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (_Bool)shutdown;

@end

