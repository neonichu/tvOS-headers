//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKDataAccessor.h>

@class NSObject, NSURL, PKRemoteAssetManager;
@protocol OS_dispatch_queue;

@interface PKFileDataAccessor : PKDataAccessor
{
    PKRemoteAssetManager *_remoteAssetManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_fileURL;
}

@property(readonly, retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (id)displayProfileOfType:(long long)arg1;
- (id)remoteAssetManager;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)remoteAssetsDownloaded;
- (id)bundle;
- (id)serializedFileWrapper;
- (id)archiveData;
- (id)manifestHash;
- (id)resourceValueForKey:(id)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 processingQueue:(id)arg3;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;

@end

