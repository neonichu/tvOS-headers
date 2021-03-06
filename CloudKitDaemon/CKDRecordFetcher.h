//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDRecordFetcher : CKDDatabaseOperation
{
    _Bool _fetchAssetContents;
    _Bool _preserveOrdering;
    NSArray *_recordResponsesToFetch;
    NSSet *_desiredKeys;
    CDUnknownBlockType _recordFetchedBlock;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableDictionary *_fetchedRecordInfoByRecordID;
    NSMutableArray *_recordIDsToFetch;
}

@property(retain, nonatomic) NSMutableArray *recordIDsToFetch; // @synthesize recordIDsToFetch=_recordIDsToFetch;
@property(retain, nonatomic) NSMutableDictionary *fetchedRecordInfoByRecordID; // @synthesize fetchedRecordInfoByRecordID=_fetchedRecordInfoByRecordID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) _Bool preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(nonatomic) _Bool fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property(retain, nonatomic) NSArray *recordResponsesToFetch; // @synthesize recordResponsesToFetch=_recordResponsesToFetch;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_flushFetchedRecordsToConsumer;
- (void)_fetchRecordsFromServer:(id)arg1 fullRecords:(id)arg2;
- (_Bool)shouldCheckAppVersion;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

