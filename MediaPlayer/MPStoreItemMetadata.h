//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPStoreArtworkRequestToken, NSArray, NSDate, NSDictionary, NSString;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_downloadAssetDictionary;
    NSDictionary *_downloadMetadataDictionary;
    _Bool _hasOverrideChildStorePlatformDictionaries;
    NSArray *_overrideChildStorePlatformDictionaries;
    MPStoreItemMetadata *_parentStoreItemMetadata;
    NSDictionary *_storePlatformDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_storePlatformDateFormatter;
- (id)_artworkRequestTokenForStorePlatformDictionary:(id)arg1 artworkKey:(id)arg2;
- (id)metadataWithParentMetadata:(id)arg1;
- (id)metadataWithChildStorePlatformDictionaries:(id)arg1;
- (id)metadataByAppendingMetadata:(id)arg1;
- (id)editorNotesWithStyle:(id)arg1;
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;
- (id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1;
- (id)artworkRequestTokenForStorePlatformDictionary:(id)arg1;
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg1;
@property(readonly, nonatomic) unsigned long long trackNumber;
@property(readonly, nonatomic) unsigned long long trackCount;
@property(readonly, copy, nonatomic) id storeID;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSArray *offers;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property(readonly, copy, nonatomic) NSString *itemKind;
@property(readonly, nonatomic) _Bool isPreorder;
- (_Bool)isMasteredForITunes;
- (_Bool)isCompilation;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, copy, nonatomic) NSArray *genreNames;
@property(readonly, copy, nonatomic) NSDictionary *effectiveStorePlatformDictionary;
@property(readonly, copy, nonatomic) NSString *editorNotes;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long discNumber;
@property(readonly, nonatomic) unsigned long long discCount;
@property(readonly, copy, nonatomic) NSString *curatorName;
@property(readonly, copy, nonatomic) NSString *copyrightText;
@property(readonly, copy, nonatomic) id collectionStoreID;
@property(readonly, copy, nonatomic) NSString *collectionName;
@property(readonly, copy, nonatomic) NSArray *childrenStoreIDs;
@property(readonly, copy, nonatomic) NSArray *artworkTrackIDs;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *artworkRequestToken;
@property(readonly, copy, nonatomic) id artistStoreID;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1;
- (id)initWithDownloadAssetDictionary:(id)arg1;

@end

