//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject
{
    _Bool _pinned;
    _Bool _inTrash;
    _Bool _customSortAscending;
    _Bool _allowsOverwite;
    _Bool _isFolder;
    int _customSortKey;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    NSString *_customKeyAssetUUID;
    NSMutableOrderedSet *_assetUUIDs;
    PLGenericAlbum *_genericAlbum;
    NSURL *_metadataURL;
}

+ (_Bool)isFolderMetadataPath:(id)arg1;
+ (_Bool)isAlbumMetadataPath:(id)arg1;
+ (_Bool)_isFolderMetadataExtension:(id)arg1;
+ (_Bool)_isAlbumMetadataExtension:(id)arg1;
+ (_Bool)isValidPath:(id)arg1;
@property(readonly, nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLGenericAlbum *genericAlbum; // @synthesize genericAlbum=_genericAlbum;
@property(nonatomic) _Bool allowsOverwite; // @synthesize allowsOverwite=_allowsOverwite;
@property(retain, nonatomic) NSMutableOrderedSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(retain, nonatomic) NSString *customKeyAssetUUID; // @synthesize customKeyAssetUUID=_customKeyAssetUUID;
@property(nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(nonatomic) _Bool customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(nonatomic, getter=isInTrash) _Bool inTrash; // @synthesize inTrash=_inTrash;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
@property(retain, nonatomic) NSNumber *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_saveMetadata;
- (void)_readMetadata;
- (id)description;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)removePersistedAlbumData;
- (void)persistAlbumData;
- (id)extensionForKind:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5;
- (id)initWithPersistedDataAtPath:(id)arg1;
- (id)initWithPLGenericAlbum:(id)arg1;
- (void)dealloc;
- (id)init;

@end

