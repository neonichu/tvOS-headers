//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMMessageDispatcher, NSArray, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDActionSet : NSObject <HMMessageReceiver, NSSecureCoding>
{
    _Bool _executionInProgress;
    NSString *_name;
    NSString *_type;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSMutableArray *_currentActions;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool executionInProgress; // @synthesize executionInProgress=_executionInProgress;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)containsAccessoryWithUUID:(id)arg1;
- (void)_execute:(CDUnknownBlockType)arg1 writeRequestTuples:(id)arg2;
- (id)_generateOverallError:(id)arg1;
- (void)_handleReplaceActionValueRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_registerForMessages;
- (id)actionWithUUID:(id)arg1;
- (void)fixupActionsForReplacementAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)configure:(id)arg1 queue:(id)arg2;
- (id)allCharacteristicsInActionsForServices:(id)arg1;
- (void)removeActionForCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)executeWithTriggerSource:(id)arg1;
- (void)execute:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;
- (id)url;
- (id)assistantUniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

