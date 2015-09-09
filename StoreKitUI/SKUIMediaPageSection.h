//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate-Protocol.h>

@class NSString, SKUIArtwork, SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate>
{
    SKUIArtwork *_artwork;
    unsigned long long _artworkRequestID;
    struct CGSize _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

- (void).cxx_destruct;
- (void)_loadImageWithReason:(long long)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (long long)defaultItemPinningStyle;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIMediaComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

