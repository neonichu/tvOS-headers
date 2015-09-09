//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ATVLegacyContentKit/TVCollectionViewDelegate-Protocol.h>
#import <ATVLegacyContentKit/TVLPagedGridCollectionViewLayoutDelegate-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDataSource-Protocol.h>

@class NSIndexPath, NSString, TVCollectionView, TVLPagedGridCollectionViewLayout, TVLPagedGridElement, UIPageControl;

@interface TVLStackPagedGridViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDataSource, TVLPagedGridCollectionViewLayoutDelegate>
{
    NSIndexPath *_currentFocusedIndexPath;
    _Bool _isAtEdge;
    TVLPagedGridElement *_pagedGridElement;
    TVCollectionView *_collectionView;
    UIPageControl *_pageControl;
    TVLPagedGridCollectionViewLayout *_gridViewLayout;
}

@property(readonly, nonatomic) TVLPagedGridCollectionViewLayout *gridViewLayout; // @synthesize gridViewLayout=_gridViewLayout;
@property(readonly, nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) __weak TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) TVLPagedGridElement *pagedGridElement; // @synthesize pagedGridElement=_pagedGridElement;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfColumnsForSection:(unsigned long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedItemForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithPagedGridElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

