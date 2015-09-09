//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionDownloadTask;

@interface TVSLayeredImageProxy : NSObject
{
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_url;
    long long _groupType;
}

@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)_assetPathWithAssetKey:(id)arg1;
- (id)_assetKey;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1 groupType:(long long)arg2;
- (id)initWithURL:(id)arg1;

@end

