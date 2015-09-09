//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVCollectionViewDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/_TVListViewCellDelegate-Protocol.h>

@class IKCollectionElement, IKViewElement, NSIndexPath, NSMutableArray, NSString, UICollectionView, _TVListWrappingView;
@protocol _TVListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewController : UIViewController <TVCollectionViewDelegate, _TVListViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    IKCollectionElement *_collectionElement;
    IKViewElement *_headerElement;
    UIViewController *_headerViewController;
    _TVListWrappingView *_wrappingView;
    _Bool _relatedContentElementValid;
    IKViewElement *_relatedContentElement;
    NSIndexPath *_lastFocusedIndexPath;
    IKViewElement *_previewElement;
    _Bool _previewUpdated;
    UIViewController *_previewController;
    double _cachedCellWidth;
    NSIndexPath *_pendingFocusedIndexPath;
    NSMutableArray *_cachedListChildViewControllers;
    _Bool _defaultListViewRemembersFocus;
    _Bool _didInitialPreview;
    id <_TVListViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_TVListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewControllerForElement:(id)arg1;
- (void)_dispatchEventOfType:(unsigned long long)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateHeaderView;
- (_Bool)_updateListWithoutReloadingWithCollectionElement:(id)arg1;
- (id)_previewControllerWithElement:(id)arg1;
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;
- (id)_relatedContentElementForIndexPath:(id)arg1;
- (_Bool)_relatedElementIsGridAtIndexPath:(id)arg1;
- (void)_delayedUpdatePreview;
- (void)_updateViewLayout;
- (_Bool)listCell:(id)arg1 shouldAppearDimmedForPreviouslyFocusedView:(id)arg2;
- (_Bool)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)updateLastFocusedCellAppearanceFromView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)preferredFocusedView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

