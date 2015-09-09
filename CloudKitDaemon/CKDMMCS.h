//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetCache, CKDMMCSEngineContext, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCS : NSObject
{
    NSString *_path;
    CKDAssetCache *_assetCache;
    CKDMMCSEngineContext *_MMCSEngineContext;
}

+ (_Bool)isTrackingItemID:(unsigned long long)arg1;
+ (void)stopTrackingItemIDsForMMCSItems:(id)arg1;
+ (void)startTrackingItemIDsForMMCSItems:(id)arg1;
+ (id)sharedItemIDs;
+ (void)stopTrackingMMCSItemReader:(id)arg1;
+ (void)startTrackingMMCSItemReader:(id)arg1;
+ (id)sharedMMCSItemReaders;
+ (id)MMCSWrapperForApplicationBundleID:(id)arg1 path:(id)arg2 assetDbPath:(id)arg3 fileDownloadPath:(id)arg4 packageDownloadPath:(id)arg5 packageUploadPath:(id)arg6 isUTAccount:(_Bool)arg7 error:(id *)arg8;
+ (void)purgeMMCSDirectoryWithMaxLifetime:(double)arg1 path:(id)arg2 assetsDbPath:(id)arg3;
+ (id)sharedWrappersByPath;
+ (id)_errorWithMMCSError:(id)arg1 description:(id)arg2 isGet:(_Bool)arg3;
+ (id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 isGet:(_Bool)arg4;
+ (long long)_errorCodeWithMMCSPutError:(id)arg1;
+ (long long)_errorCodeWithMMCSGetError:(id)arg1;
+ (long long)_commonErrorCodeWithMMCSError:(id)arg1;
+ (id)_userInfoFromMMCSRetryableError:(id)arg1;
+ (id)protocolVersion;
+ (id)zeroSizeFileSignature;
@property(retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext; // @synthesize MMCSEngineContext=_MMCSEngineContext;
@property(retain, nonatomic) CKDAssetCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)getSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_contextToGetSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)putSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_contextToPutSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)unregisterItemIDs:(id)arg1;
- (id)statusReport;
- (id)putItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_contextToPutItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)getItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_contextToGetItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)registerItemGroupSet:(id)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)registerItemGroupSet:(id)arg1 operation:(id)arg2 shouldChunk:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToRegisterItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_logMMCSOptions:(id)arg1;
- (id)_referenceIdentifierFromAssetKey:(id)arg1;
@property(readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;
@property(readonly, nonatomic, getter=getMMCSEngine) struct _mmcs_engine *MMCSEngine;
- (void)dealloc;
- (id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2;

@end

