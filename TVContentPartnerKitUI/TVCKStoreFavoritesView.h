//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVContentPartnerKitUI/UICollectionViewDataSource-Protocol.h>
#import <TVContentPartnerKitUI/UICollectionViewDelegate-Protocol.h>

@class NSString, UICollectionView, UILabel;
@protocol TVCKStoreFavoritesViewDataSource, TVCKStoreFavoritesViewDelegate;

@interface TVCKStoreFavoritesView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <TVCKStoreFavoritesViewDataSource> _dataSource;
    id <TVCKStoreFavoritesViewDelegate> _delegate;
    NSString *_title;
    UILabel *_headerView;
    UICollectionView *_collectionView;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TVCKStoreFavoritesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVCKStoreFavoritesViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateItemsWithChanges:(id)arg1;
- (void)_didSelectItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfItems;
- (id)_badgeCountForItemAtIndex:(unsigned long long)arg1;
- (id)_imageURLForItemAtIndex:(unsigned long long)arg1;
- (id)_titleForItemAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItemSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

