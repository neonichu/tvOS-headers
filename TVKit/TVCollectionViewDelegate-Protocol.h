//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, TVCollectionView;

@protocol TVCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (void)collectionView:(TVCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(TVCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(TVCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

