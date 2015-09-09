//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVCollectionViewDelegate-Protocol.h>
#import <TVKit/UICollectionViewDataSource-Protocol.h>
#import <TVKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, TVCollectionView, TVHeaderView, TVSImageProxy;
@protocol TVStackViewControllerDataSource;

@interface TVStackViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVCollectionViewDelegate>
{
    TVCollectionView *_collectionView;
    _Bool _needsReload;
    NSArray *_viewControllers;
    id <TVStackViewControllerDataSource> _dataSource;
    TVHeaderView *_headerView;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) TVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <TVStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusedItem;
- (void)setHeaderTitle:(id)arg1 maxTitleLines:(long long)arg2 subtitle:(id)arg3 maxSubtitleLines:(long long)arg4 horizontalAlignment:(long long)arg5;
@property(retain, nonatomic) TVSImageProxy *headerImageProxy;
- (id)viewControllers;
- (id)viewControllerForSection:(long long)arg1;
- (void)reloadDataIfNeeded;
- (void)setNeedsReload;
- (void)cancelPendingReload;
- (id)collectionView;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

