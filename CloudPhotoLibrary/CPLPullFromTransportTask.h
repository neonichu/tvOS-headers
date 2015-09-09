//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSData, NSObject, NSString;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportGetAssetCountsTask, CPLPullFromTransportTaskDelegate, OS_dispatch_queue;

@interface CPLPullFromTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_initialSyncAnchor;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportGetAssetCountsTask> _getAssetCountsTask;
    _Bool _signaledTaskEnd;
    NSString *_clientCacheIdentifier;
    _Bool _resetSyncAnchor;
    _Bool _didGetSomeChanges;
    _Bool _shouldGetAssetCounts;
    _Bool _isPostPushPhase;
}

@property(nonatomic) _Bool isPostPushPhase; // @synthesize isPostPushPhase=_isPostPushPhase;
@property(nonatomic) _Bool shouldGetAssetCounts; // @synthesize shouldGetAssetCounts=_shouldGetAssetCounts;
@property(readonly, nonatomic) _Bool didGetSomeChanges; // @synthesize didGetSomeChanges=_didGetSomeChanges;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_checkServerFeatureVersion:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_launchPullTasks;
- (void)_handleNewBatch:(id)arg1 newSyncAnchor:(id)arg2;
- (void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPullFromTransportTaskDelegate> delegate; // @dynamic delegate;

@end

