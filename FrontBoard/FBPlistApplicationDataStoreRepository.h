//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepository-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>
{
    NSURL *_storeURL;
    NSMutableDictionary *_state;
    _Bool _dirty;
    unsigned long long _batchCount;
    int _autoFlushDuration;
    id <FBApplicationDataStoreRepositoryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property(nonatomic) id <FBApplicationDataStoreRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (void)_writeQueue_flushSynchronously;
- (void)_stateQueue_markDirty;
- (void)_stateQueue_removeStoreForIdentifier:(id)arg1;
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1;
- (id)_stateQueue_storeForIdentifier:(id)arg1;
- (id)_stateQueue_objectsForKeys:(id)arg1;
- (id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2;
- (void)_load;
- (_Bool)_isEligibleForSaving:(id)arg1;
- (void)endBatchedUpdate;
- (void)beginBatchedUpdate;
- (void)flushSynchronously;
- (void)removeAllObjectsForApplication:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)objectForKeys:(id)arg1 forAllApplicationsWithResult:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (_Bool)containsKey:(id)arg1 forApplication:(id)arg2;
- (id)keysForApplication:(id)arg1;
- (id)applicationIdentifiersWithState;
- (_Bool)isDirty;
- (id)location;
- (void)dealloc;
- (id)initWithStorePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

