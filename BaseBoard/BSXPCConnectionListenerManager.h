//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BSXPCConnectionListenerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}

+ (void)stopListeningForService:(id)arg1;
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (id)defaultHandlerQueue;
+ (id)sharedInstance;
- (void)_removeService:(id)arg1;
- (void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (id)_defaultHandlerQueue;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

