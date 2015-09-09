//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class NSIndexPath, TVStackViewController, UICollectionView, UICollectionViewCell, UICollectionViewLayout;

@protocol TVStackViewSectionController <NSObject>
- (_Bool)stackViewController:(TVStackViewController *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)stackViewController:(TVStackViewController *)arg1 didReceivePhysicalLongPressEventForCellAtIndexPath:(NSIndexPath *)arg2;
- (void)stackViewController:(TVStackViewController *)arg1 didReceivePhysicalPlayPauseEventForCellAtIndexPath:(NSIndexPath *)arg2;
- (void)stackViewController:(TVStackViewController *)arg1 didReceivePhysicalSelectionEventForCellAtIndexPath:(NSIndexPath *)arg2;
- (UICollectionViewCell *)stackViewController:(TVStackViewController *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets)stackViewController:(TVStackViewController *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)stackViewController:(TVStackViewController *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)stackViewController:(TVStackViewController *)arg1 numberOfItemsInSection:(long long)arg2;
- (void)stackViewController:(TVStackViewController *)arg1 prepareWithCollectionView:(UICollectionView *)arg2;

@optional
- (void)stackViewController:(TVStackViewController *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)stackViewController:(TVStackViewController *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
@end

