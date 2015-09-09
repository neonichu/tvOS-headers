//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDProgressTracker, CKRecord, NSError, NSMutableArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDRecordDownloadTask : NSObject
{
    CKRecord *_record;
    NSError *_error;
    NSMutableArray *_assetsToDownload;
    NSMutableArray *_packageIndexSets;
    NSObject<OS_dispatch_group> *_group;
    CKDProgressTracker *_progressTracker;
}

@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSMutableArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (void)didCompleteTaskWithError:(id)arg1;
- (void)didDownloadAsset:(id)arg1 error:(id)arg2;
- (id)initWithRecord:(id)arg1 trackProgress:(_Bool)arg2 assetsToDownload:(id)arg3 packageIndexSets:(id)arg4;

@end

