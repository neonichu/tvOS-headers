//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreUI/FMViewController.h>

@class SlidingPaneViewState, UIView, UIViewController, UIVisualEffect;
@protocol FMSlidingPaneViewControllerDelegate;

@interface FMSlidingPaneViewController : FMViewController
{
    _Bool _didHideToolbar;
    UIVisualEffect *_paneVisualEffect;
    id <FMSlidingPaneViewControllerDelegate> _delegate;
    double _animationDuration;
    double _animationSpringDamping;
    double _animationInitialVelocity;
    unsigned long long _animationOptions;
    SlidingPaneViewState *_paneState;
    struct UIEdgeInsets _paneInsets;
    struct UIEdgeInsets _paneContentInsets;
}

@property(nonatomic) _Bool didHideToolbar; // @synthesize didHideToolbar=_didHideToolbar;
@property(retain, nonatomic) SlidingPaneViewState *paneState; // @synthesize paneState=_paneState;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) double animationInitialVelocity; // @synthesize animationInitialVelocity=_animationInitialVelocity;
@property(nonatomic) double animationSpringDamping; // @synthesize animationSpringDamping=_animationSpringDamping;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) struct UIEdgeInsets paneContentInsets; // @synthesize paneContentInsets=_paneContentInsets;
@property(nonatomic) struct UIEdgeInsets paneInsets; // @synthesize paneInsets=_paneInsets;
@property(nonatomic) __weak id <FMSlidingPaneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPaneShowing) _Bool paneShowing;
- (void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissPaneState:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentPaneState:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removeChildViewControllerForState:(id)arg1;
- (void)_createPaneContentConstraintsForState:(id)arg1;
- (void)_createPaneViewForState:(id)arg1;
- (struct CGSize)_preferredSizeForPaneState:(id)arg1;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct CGSize)_normalizeSize:(struct CGSize)arg1;
- (id)_paneParentView;
- (void)_paneFrameChanged:(struct CGRect)arg1;
- (void)dismiss:(id)arg1;
- (void)dismiss:(id)arg1 forEvent:(id)arg2;
- (void)dismissSegue:(id)arg1;
- (void)paneSizeChanged:(struct CGRect)arg1 forViewController:(id)arg2;
- (void)didDismissPane:(id)arg1 animated:(_Bool)arg2;
- (void)willDismissPane:(id)arg1 animated:(_Bool)arg2;
- (void)didPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)willPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)setPresentingConstraintConstant:(double)arg1;
- (void)dismissPaneViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 withPercent:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) UIVisualEffect *paneVisualEffect; // @synthesize paneVisualEffect=_paneVisualEffect;
@property(readonly, nonatomic) UIViewController *paneViewController;
@property(readonly, nonatomic) UIView *paneView;
- (id)traitCollectionForChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)commonConfiguration;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

