//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICPropertyListSerializable-Protocol.h>

@class ICSearchIndexTransactionInfo, ICSearchIndexableMutableIdentifiers, ICSelectorDelayer, NSCountedSet, NSMutableArray, NSOperationQueue;
@protocol ICSearchIndexingBatchQueueDelegate;

@interface ICSearchIndexingBatchQueue : NSObject <ICPropertyListSerializable>
{
    _Bool _shouldAddAllObjects;
    id <ICSearchIndexingBatchQueueDelegate> _delegate;
    ICSearchIndexableMutableIdentifiers *_unprocessedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_immediateProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_currentProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_additionalProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_failedIdentifiers;
    NSMutableArray *_documentActionsQueue;
    NSMutableArray *_immediateDocumentActionsQueue;
    NSMutableArray *_batchHistory;
    NSCountedSet *_identifierRetryCounts;
    ICSearchIndexTransactionInfo *_currentTransactionInfo;
    ICSelectorDelayer *_saveSelectorDelayer;
    NSOperationQueue *_saveOperationQueue;
}

+ (id)loadFromData;
+ (id)userDefaults;
@property(retain, nonatomic) NSOperationQueue *saveOperationQueue; // @synthesize saveOperationQueue=_saveOperationQueue;
@property(retain, nonatomic) ICSelectorDelayer *saveSelectorDelayer; // @synthesize saveSelectorDelayer=_saveSelectorDelayer;
@property(copy, nonatomic) ICSearchIndexTransactionInfo *currentTransactionInfo; // @synthesize currentTransactionInfo=_currentTransactionInfo;
@property(retain, nonatomic) NSCountedSet *identifierRetryCounts; // @synthesize identifierRetryCounts=_identifierRetryCounts;
@property(retain, nonatomic) NSMutableArray *batchHistory; // @synthesize batchHistory=_batchHistory;
@property(retain, nonatomic) NSMutableArray *immediateDocumentActionsQueue; // @synthesize immediateDocumentActionsQueue=_immediateDocumentActionsQueue;
@property(retain, nonatomic) NSMutableArray *documentActionsQueue; // @synthesize documentActionsQueue=_documentActionsQueue;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *failedIdentifiers; // @synthesize failedIdentifiers=_failedIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *additionalProcessingIdentifiers; // @synthesize additionalProcessingIdentifiers=_additionalProcessingIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *currentProcessingIdentifiers; // @synthesize currentProcessingIdentifiers=_currentProcessingIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *immediateProcessingIdentifiers; // @synthesize immediateProcessingIdentifiers=_immediateProcessingIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *unprocessedIdentifiers; // @synthesize unprocessedIdentifiers=_unprocessedIdentifiers;
@property(nonatomic) __weak id <ICSearchIndexingBatchQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAddAllObjects; // @synthesize shouldAddAllObjects=_shouldAddAllObjects;
- (void).cxx_destruct;
- (void)endBatchWithTransactionInfo:(id)arg1;
- (void)beginBatch;
- (void)addSearchIndexableIdentifiers:(id)arg1;
- (void)batchDidIndexWithTransactionID:(id)arg1 name:(id)arg2;
- (void)reprocessIdentifiersFromBatchWithTransactionID:(id)arg1 name:(id)arg2;
- (id)batchForTransactionID:(id)arg1 name:(id)arg2;
- (void)reprocessAllAdditionalProcessingIdentifiers;
- (_Bool)hasRemainingIdentifiers;
- (id)nextDocumentAction;
- (void)addDocumentAction:(id)arg1;
- (unsigned long long)documentActionsQueueCount;
- (_Bool)additionalProcessingIdentifierCount;
- (void)removeAdditionalProcessingIdentifier:(id)arg1;
- (void)addAdditionalProcessingIdentifier:(id)arg1;
- (void)addCurrentProcessingIdentifiers:(id)arg1;
- (void)addImmediateProcessingIdentifiers:(id)arg1;
- (id)nextSearchIndexableIdentifier;
- (unsigned long long)unprocessedIdentifierCount;
- (unsigned long long)immediateIdentifiersCount;
- (_Bool)hasIdentifiersForProcessing;
- (_Bool)restoreWithIndexPersistedTransactionInfo:(id)arg1;
- (_Bool)canRestoreWithIndexPersisttedTransactionInfo:(id)arg1;
- (id)earliestTransactionInfo;
- (id)firstBatchTransactionInfo;
- (void)delete;
- (void)cancelAllOperations;
- (void)wrapUpSave;
- (void)scheduleSave;
- (_Bool)shouldSaveBatchQueue;
- (void)savePropertyListObjectRepresentation:(id)arg1 forKey:(id)arg2;
- (void)save;
- (id)propertyListObjectRepresentation;
- (void)dealloc;
- (void)commonInit;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)init;

@end

