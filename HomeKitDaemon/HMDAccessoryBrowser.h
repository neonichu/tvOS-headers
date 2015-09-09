//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>

@class HMDAccessoryManager, HMMessageDispatcher, NSHashTable, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMMessageDispatcher *_messageDispatcher;
    HMDAccessoryManager *_accessoryManager;
    unsigned long long _generationCounter;
    NSMutableSet *_browsingXPCConnections;
    NSHashTable *_unpairedAccessories;
}

@property(readonly, nonatomic) NSHashTable *unpairedAccessories; // @synthesize unpairedAccessories=_unpairedAccessories;
@property(retain, nonatomic) NSMutableSet *browsingXPCConnections; // @synthesize browsingXPCConnections=_browsingXPCConnections;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_stopDiscoveringAccessories;
- (void)_startDiscoveringAccessories;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)_registerForMessages;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1 accessoryManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

