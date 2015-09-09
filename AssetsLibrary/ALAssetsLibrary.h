//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibraryPrivate;

@interface ALAssetsLibrary : NSObject
{
    id _internal;
}

+ (_Bool)_linkedBefore7;
+ (void)disableSharedPhotoStreamsSupport;
+ (long long)authorizationStatus;
+ (id)_library;
+ (struct CGImage *)_aspectRatioThumbnailForAssetURL:(id)arg1;
+ (struct CGImage *)_thumbnailForAssetURL:(id)arg1;
+ (id)_playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)_playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2;
+ (id)_exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3;
+ (id)_exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3;
+ (long long)_estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (long long)_estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (id)_filePathForVideoURL:(id)arg1 outMetadata:(id *)arg2;
@property(retain, nonatomic) ALAssetsLibraryPrivate *internal; // @synthesize internal=_internal;
- (_Bool)hasCompletedRestorePostProcessing;
- (id)assetsGroupsRelatedToAssetsGroup:(id)arg1;
- (void)deleteAssetForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)groupForURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)_copyGroupForURL:(id)arg1;
- (void)assetForURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(long long)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_addGroupListForContainerList:(id)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (void)_addGroupForAlbum:(struct NSObject *)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
- (id)publicErrorFromPrivateError:(id)arg1;
- (_Bool)_libraryIsAvailable;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)registerAlbum:(struct NSObject *)arg1 assetGroupPrivate:(id)arg2;
- (_Bool)isValid;
- (void)dealloc;
- (id)init;

@end

