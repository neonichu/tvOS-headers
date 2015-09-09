//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/CSSearchableIndexDelegate-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class CSSearchableIndex, MFCoalescer, MFLazyCache, NSMutableArray, NSMutableSet, NSString, _MFLibrarySearchableIndexPendingRemovals;
@protocol MFLibrarySearchableIndexDataSource, OS_dispatch_queue, OS_dispatch_source;

@interface MFLibrarySearchableIndex : NSObject <MFDiagnosticsGenerator, CSSearchableIndexDelegate>
{
    NSString *_indexName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    long long _resumeCount;
    long long _transaction;
    unsigned long long _throttledIndexingBatchSize;
    unsigned long long _throttledDataSourceBatchSize;
    unsigned long long _currentMaximumBatchSize;
    MFCoalescer *_budgetCoalescer;
    double _remainingIndexingBudget;
    long long _remainingIndexingBudgetOverage;
    NSMutableArray *_pendingItems;
    NSMutableSet *_pendingDomainRemovals;
    _MFLibrarySearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    MFLazyCache *_searchResultsCache;
    struct {
        unsigned int isForeground:1;
        unsigned int isActive:1;
        unsigned int needsRefresh:1;
        unsigned int needsVerification:1;
        unsigned int clientStateFetched:1;
        unsigned int coalesceTimerFired:1;
        unsigned int scheduledProcessing:1;
        unsigned int scheduledRefresh:1;
        unsigned int scheduledVerification:1;
    } _state;
    CSSearchableIndex *_index;
    id <MFLibrarySearchableIndexDataSource> _dataSource;
}

+ (void)_saveLocalClientState:(id)arg1;
+ (id)_localClientState;
+ (id)_localClientStateURL;
@property(nonatomic) id <MFLibrarySearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)identifiersMatchingCriterion:(id)arg1;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)_indexItems:(id)arg1 fromRefresh:(_Bool)arg2;
- (void)indexItems:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)_processSpotlightVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processRefreshRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processDomainRemovals:(id)arg1 identifierRemovals:(id)arg2;
- (void)_processIndexingBatch:(id)arg1;
- (void)_getDomainRemovals:(id *)arg1 identifierRemovals:(id *)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItems;
- (void)_queueTransitionActive:(_Bool)arg1;
- (void)_queueRefresh;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_coalescingTimerFired;
- (void)_stopCoalescingTimer;
- (void)_startCoalescingTimer;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceIndexItemsNeedingRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 forItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceScheduleWork:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)resume;
- (void)suspend;
- (void)_invalidateCache;
- (long long)_nextTransaction;
@property(readonly, getter=_transaction) long long transaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_fetchLastClientState;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
@property(nonatomic, getter=_isForeground, setter=_setForeground:) _Bool foreground;
- (double)_throttleRequestedSize:(unsigned long long *)arg1 action:(CDUnknownBlockType)arg2;
- (void)_verifySpotlightIndex;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_scheduleSpotlightVerification;
- (void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(_Bool)arg2;
- (void)_persistRemainingIndexingBudgetValue:(id)arg1;
- (void)_scheduleResetIndexingBudgetTimer;
- (void)_resetIndexingBudgetTimer;
- (double)persistedRemainingIndexingBudget;
- (id)_budgetPersistenceKey;
- (void)_powerStateChanged:(id)arg1;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

