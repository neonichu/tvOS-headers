//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity
{
    unsigned long long _containedMediaTypes;
    _Bool _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)collectionWithItems:(id)arg1;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)multiverseIdentifier;
@property(readonly, nonatomic) long long groupingType;
@property(readonly, nonatomic) unsigned long long mediaTypes;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) NSArray *items;
- (id)itemsQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)artistArtworkCatalog;
- (id)albumArtistArtworkCatalog;
- (id)artworkCatalog;
- (_Bool)MPSD_hasDownloadingItem;
- (_Bool)MPSD_hasDownloadableItem;

@end

