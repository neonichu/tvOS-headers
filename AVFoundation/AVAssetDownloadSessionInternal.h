//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVURLAsset, AVWeakReference, NSError, NSNumber, NSURL;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *player;
    struct OpaqueFigPlaybackItem *playbackItem;
    struct OpaqueFigAsset *figAsset;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    long long status;
    NSError *error;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject *assetDownloader;
}

@end

