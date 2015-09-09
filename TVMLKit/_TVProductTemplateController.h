//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/TVCollectionViewDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IKAudioElement, IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, TVCollectionView, UIImage, UIImageView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVCollectionViewDelegate>
{
    IKViewElement *_templateElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImageElement;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    UIView *_backdropView;
    UIView *_backdropTintView;
    UIImageView *_vignetteView;
    UIImageView *_tvVignetteView;
    IKAudioElement *_bgAudioElement;
    IKViewElement *_productBannerElement;
    IKViewElement *_infoListElement;
    TVCollectionView *_collectionView;
    UIViewController *_bannerViewController;
    UIView *_titleView;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    double _productBannerHeight;
    _Bool _isPartialScrollingTemplate;
    NSString *_autoHighlightIdentifier;
    NSIndexPath *_autoHighlightIndexPath;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets *)arg2;
- (id)_spacingMetricsForViewControllers:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)_backgroundImageProxy;
- (long long)_backdropStyle;
- (void)_configureWithBannerElement:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (id)_relatedSectionHeaderView;
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;
- (id)preferredFocusedView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateWithProductTemplate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

