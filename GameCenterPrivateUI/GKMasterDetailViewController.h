//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

@class GKMasterDetailNavigationController, NSMutableArray, UIColor, UIView, UIViewController;
@protocol GKMasterDetailViewControllerDelegate;

@interface GKMasterDetailViewController : UISplitViewController
{
    id <GKMasterDetailViewControllerDelegate> _masterDetailDelegate;
    _Bool _shouldCollapseToDetail;
    _Bool _covered;
    UIColor *_separatorLineColor;
    GKMasterDetailNavigationController *_masterNavigationController;
    UIView *_separatorWrapperView;
    UIView *_separatorLineView;
    UIView *_separatorBarView;
    UIView *_separatorBarMaskView;
    CDUnknownBlockType _presentationDelayHandler;
    NSMutableArray *_controllersDelayingPresentation;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) NSMutableArray *controllersDelayingPresentation; // @synthesize controllersDelayingPresentation=_controllersDelayingPresentation;
@property(copy, nonatomic) CDUnknownBlockType presentationDelayHandler; // @synthesize presentationDelayHandler=_presentationDelayHandler;
@property(retain, nonatomic) UIView *separatorBarMaskView; // @synthesize separatorBarMaskView=_separatorBarMaskView;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIView *separatorWrapperView; // @synthesize separatorWrapperView=_separatorWrapperView;
@property(retain, nonatomic) GKMasterDetailNavigationController *masterNavigationController; // @synthesize masterNavigationController=_masterNavigationController;
@property(nonatomic, getter=isCovered) _Bool covered; // @synthesize covered=_covered;
@property(nonatomic) _Bool shouldCollapseToDetail; // @synthesize shouldCollapseToDetail=_shouldCollapseToDetail;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)viewDidDisappearAnimated:(_Bool)arg1 bubbleFlow:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_setSeparatorBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animateSlidingDoorTransitionFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 duration:(double)arg3 appearing:(_Bool)arg4;
- (void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(id)arg4;
- (void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(id)arg4;
- (id)_viewForSlidingInDetailView;
- (id)_viewForSlidingInMasterView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)delayAppearingWithBubbleFlowUntil:(CDUnknownBlockType)arg1;
- (_Bool)readyToAppearWithBubbleFlow;
- (double)bubbleFlowAnimateOutDuration;
- (double)bubbleFlowAnimateInDuration;
- (id)_gkTargetViewControllerForAction:(SEL)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupSeparatorViews;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceMethods;
- (_Bool)shouldUnhidePrimaryViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_gkViewControllersForRestoringPopover;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)dismissMasterOverlayViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popToRootDetailViewControllerAnimated:(_Bool)arg1;
@property(readonly, retain, nonatomic) UIViewController *rootDetailViewController;
@property(readonly, retain, nonatomic) UIViewController *topDetailViewController;
@property(readonly, retain, nonatomic) UIViewController *topMasterViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)notifyViewControllersOfNavigationController:(id)arg1 transitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewsForCurrentAppSize;
- (_Bool)isUsingPrimaryViewOverlay;
- (void)updateCoveredColumnWidth;
- (_Bool)statusShouldCoverSplitViewFor:(id)arg1;
- (void)pushMasterViewController:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
@property(nonatomic) id <GKMasterDetailViewControllerDelegate> masterDetailDelegate;
- (void)dealloc;
- (id)init;

@end

