//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingRequestInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    NSDictionary *requestDictionary;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigAssetImageGenerator *figImageGenerator;
    struct OpaqueFigAsset *figAsset;
    CDUnknownBlockType streamingKeyRequestCompletionHandler;
}

@end

