//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMHome, HMMessageDispatcher, HMThreadSafeMutableArrayCollection, NSArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMServiceGroup : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    NSString *_name;
    HMHome *_home;
    HMThreadSafeMutableArrayCollection *_currentServices;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *currentServices; // @synthesize currentServices=_currentServices;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_findService:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_handleServiceGroupRenamedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (void)_handleServiceAddedNotification:(id)arg1;
- (void)_removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServices:(id)arg1;
- (void)_invalidate;
- (void)_unconfigure;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)init;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

