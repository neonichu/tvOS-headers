//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

#import <SiriTVUI/SiriTVUICollectionViewCellDelegate-Protocol.h>
#import <SiriTVUI/UICollectionViewDataSource-Protocol.h>
#import <SiriTVUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSString, SiriTVUICollectionViewTemplateItem, SiriTVUITemplateCollectionView;

@interface SiriTVUITemplateCollectionViewController : SiriTVUITemplateItemViewController <UICollectionViewDataSource, UICollectionViewDelegate, SiriTVUICollectionViewCellDelegate>
{
    NSMutableDictionary *_imageCache;
    NSIndexPath *_focusedIndexPath;
    double _highlightItemDelegateDelay;
}

+ (id)_defaultFullscreenCellFont;
+ (id)_defaultPartialCellFont;
- (void).cxx_destruct;
- (void)_updateDelegateForCurrentFocusAndHasStopped:(id)arg1;
- (struct CGPoint)_contentOffsetAdjustmentForNewItemSize:(struct CGSize)arg1 shelfViewLayout:(id)arg2;
- (void)_invalidateShelfViewLayout:(id)arg1 forNewItemSize:(struct CGSize)arg2 newFontSize:(double)arg3;
- (double)_fontSizeForFullScreenFraction:(double)arg1;
- (struct CGSize)_itemSizeForFullScreenFraction:(double)arg1;
- (double)_valueForFraction:(double)arg1 initialValue:(double)arg2 finalValue:(double)arg3;
- (struct CGRect)highlightedTemplateItemFrame;
- (_Bool)prefersFocus;
- (void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(struct CGPoint)arg3;
- (void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionViewCellDidReceiveClick:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)_focusedIndexPath;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadView;
- (id)initWithTemplateItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriTVUICollectionViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateCollectionView *view; // @dynamic view;

@end

