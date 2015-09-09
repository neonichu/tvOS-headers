//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSObject, NSString;
@protocol CPLMinglePulledChangesTaskDelegate, OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    _Bool _hasPreparedForMingling;
    unsigned long long _countOfNotifiedBatchesInPullQueue;
}

+ (_Bool)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(_Bool *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLMinglePulledChangesTaskDelegate> delegate; // @dynamic delegate;

@end

