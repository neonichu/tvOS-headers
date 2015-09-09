//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSRemoteAlertClientHandle-Protocol.h>

@class BSMachPortSendRight, NSHashTable, NSString, SBSRemoteAlertClient;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle>
{
    SBSRemoteAlertClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    BSMachPortSendRight *_token;
    _Bool _active;
    NSHashTable *_observers;
}

+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;
- (void)queue_noteInvalidWithError:(id)arg1;
- (void)queue_setActive:(_Bool)arg1;
- (id)queue_token;
- (void)_queue_callObserversWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)activateWithOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_initWithHandleToken:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

