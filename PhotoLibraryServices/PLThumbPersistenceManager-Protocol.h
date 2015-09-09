//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPreheatItemSource-Protocol.h>

@class NSIndexSet, NSNumber, NSString, PLManagedAsset, PLMappedImageData, UIImage;

@protocol PLThumbPersistenceManager <PLPreheatItemSource>
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, nonatomic) int imageLength;
@property(readonly, nonatomic) int imageRowBytes;
@property(readonly, nonatomic) int imageHeight;
@property(readonly, nonatomic) int imageWidth;
@property(readonly, nonatomic) int imageFormat;
@property(readonly, nonatomic) NSString *path;
- (NSString *)_debugDescription;
- (_Bool)usesThumbIdentifiers;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(PLManagedAsset *)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(PLManagedAsset *)arg1;
- (_Bool)copyEntryFromOriginalAsset:(PLManagedAsset *)arg1 toAsset:(PLManagedAsset *)arg2;
- (PLMappedImageData *)imageDataWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)setImageDataForEntry:(const void *)arg1 withIdentifier:(NSString *)arg2 orIndex:(unsigned long long)arg3 asset:(PLManagedAsset *)arg4;
- (void)setImageForEntry:(UIImage *)arg1 withIdentifier:(NSString *)arg2 orIndex:(unsigned long long)arg3 videoDuration:(NSNumber *)arg4 photoUUID:(NSString *)arg5;

@optional
- (long long)entryCount;
- (void)preheatImageDataAtIndexes:(NSIndexSet *)arg1 completionHandler:(void (^)(UIImage *, _Bool))arg2;
- (void)preheatImageDataAtIndex:(unsigned long long)arg1 completionHandler:(void (^)(UIImage *, _Bool))arg2;
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg1;
- (UIImage *)imageWithIdentifier:(NSString *)arg1;
- (void)deleteEntryWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 uuid:(NSString *)arg3;
@end

