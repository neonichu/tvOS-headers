//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSString, PLAdditionalAssetAttributes, PLCloudMaster;

@interface PLCloudResource : PLManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned long long *)arg2 photoCount:(unsigned long long *)arg3 videoCount:(unsigned long long *)arg4;
+ (long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (id)allCloudResourcesInManagedObjectContext:(id)arg1;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(_Bool)arg4 withCreationDate:(id)arg5;
+ (id)resourceWithFingerprint:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(_Bool)arg2;
- (id)cplResource;
- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (id)description;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *assetUuid; // @dynamic assetUuid;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) _Bool isAlternativeRepresentationAvailable; // @dynamic isAlternativeRepresentationAvailable;
@property(nonatomic) _Bool isAvailable; // @dynamic isAvailable;
@property(nonatomic) _Bool isFlattened; // @dynamic isFlattened;
@property(nonatomic) _Bool isLocallyAvailable; // @dynamic isLocallyAvailable;
@property(retain, nonatomic) NSString *itemIdentifier; // @dynamic itemIdentifier;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate; // @dynamic lastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *prunedAt; // @dynamic prunedAt;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) int width; // @dynamic width;

@end

