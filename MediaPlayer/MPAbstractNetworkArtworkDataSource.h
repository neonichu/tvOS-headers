//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>
#import <MediaPlayer/NSURLSessionDataDelegate-Protocol.h>

@class NSCache, NSMapTable, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSCache *_artworkRepresentationCache;
    NSMapTable *_catalogTaskMap;
    NSURLSession *_URLSession;
}

@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMapTable *catalogTaskMap; // @synthesize catalogTaskMap=_catalogTaskMap;
@property(retain, nonatomic) NSCache *artworkRepresentationCache; // @synthesize artworkRepresentationCache=_artworkRepresentationCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (void)_performSyncBlock:(CDUnknownBlockType)arg1;
- (void)_performAsyncBarrierBlock:(CDUnknownBlockType)arg1;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_isRepresentationSize:(struct CGSize)arg1 validForCatalog:(id)arg2;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(_Bool)arg2;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize)arg3 immediateImageDecompressionAllowed:(_Bool)arg4;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)wantsBackgroundImageDecompression;
- (_Bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
@property(readonly, nonatomic) NSURLSessionConfiguration *URLSessionConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

