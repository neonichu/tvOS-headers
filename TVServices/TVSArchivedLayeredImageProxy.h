//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionDownloadTask;

@interface TVSArchivedLayeredImageProxy : NSObject
{
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_archiveURL;
    long long _groupType;
}

@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
- (void).cxx_destruct;
- (id)_assetPathWithAssetKey:(id)arg1;
- (id)_assetKey;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithArchiveURL:(id)arg1 groupType:(long long)arg2;
- (id)initWithArchiveURL:(id)arg1;

@end

