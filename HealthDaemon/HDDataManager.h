//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDataManager-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDDataManager : NSObject <HDDiagnosticObject, HDHealthDataManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observersByDataType;
    unsigned long long _openTransactions;
    unsigned long long _sourceObserverCount;
    NSMutableDictionary *_pendingObjectsBySampleType;
    NSMutableDictionary *_pendingObjectsBySource;
    NSMutableSet *_pendingSources;
    NSNumber *_lastAnchor;
    id <HDHealthDaemon> _daemon;
}

@property(nonatomic) __weak id <HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_medicalIDURL;
- (_Bool)deleteMedicalIDData:(id *)arg1;
- (_Bool)updateMedicalIDData:(id)arg1 error:(id *)arg2;
- (id)medicalIDDataCreateIfNecessary:(_Bool)arg1;
- (void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)closeObserverTransaction;
- (void)openObserverTransaction;
- (id)_queue_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2 createIfNil:(_Bool)arg3;
- (id)_queue_observersForDataType:(id)arg1 createIfNil:(_Bool)arg2;
- (id)_queue_observersForKey:(id)arg1 createIfNil:(_Bool)arg2;
- (id)_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2;
- (id)_observersForDataType:(id)arg1;
- (id)_queue_observersAllTypesCreateIfNil:(_Bool)arg1;
- (id)_observersForAllTypes;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3;
- (void)addObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2;
- (void)addObserver:(id)arg1 forDataType:(id)arg2;
- (void)removeObserverForAllTypes:(id)arg1;
- (void)addObserverForAllTypes:(id)arg1;
- (_Bool)containsDataObject:(id)arg1;
- (_Bool)containsAnyDataObjectInArray:(id)arg1;
- (void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (_Bool)_deleteObjectsWithTypes:(id)arg1 sourceIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSamplesWithSourceIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteSamplesWithTypes:(id)arg1 sourceID:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)deleteDataObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletedSampleCount:(unsigned long long *)arg3 notifyObservers:(_Bool)arg4 generateDeletedObjects:(_Bool)arg5 error:(id *)arg6;
- (_Bool)deleteDataObjects:(id)arg1 restrictedSourceEntity:(id)arg2 failIfNotFound:(_Bool)arg3 error:(id *)arg4;
- (_Bool)deleteDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 error:(id *)arg3;
- (void)_callObservers:(id)arg1 withObjects:(id)arg2 type:(id)arg3 anchor:(id)arg4;
- (void)_callObservers:(id)arg1 forType:(id)arg2 source:(id)arg3 withAnchor:(id)arg4;
- (void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 objectsBySource:(id)arg2 pendingSources:(id)arg3 lastAnchor:(id)arg4;
- (void)_callObserversIfPossible;
- (_Bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(_Bool)arg4 error:(id *)arg5;
- (_Bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id *)arg4;
- (_Bool)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id *)arg6;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

