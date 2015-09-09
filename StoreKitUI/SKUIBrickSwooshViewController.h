//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableIndexSet, NSString, SKUISwooshView, UICollectionView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_bricks;
    UICollectionView *_collectionView;
    _Bool _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenImageIndexSet;
    CDStruct_0a66a153 _metrics;
    _Bool _showBrickTitles;
    NSString *_swooshTitle;
    SKUISwooshView *_swooshView;
}

@property(copy, nonatomic) NSArray *bricks; // @synthesize bricks=_bricks;
- (void).cxx_destruct;
- (CDStruct_0a66a153)_brickSwooshMetrics;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)unhideImages;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deselectAllItems;
- (void)dealloc;
- (id)initWithSwoosh:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

