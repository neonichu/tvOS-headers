//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKViewController.h>

@class GKBubbleFlowAnimator;

@interface GKBubbleFlowRootViewController : GKViewController
{
    GKBubbleFlowAnimator *_animator;
    _Bool _showingInterstitial;
    _Bool _coveringContentUnderneath;
    _Bool _currentlyAnimatingADismiss;
}

+ (id)sharedBubbleFlowRootViewController;
+ (_Bool)_useTwoPartBubbleFlowModalPresentation;
@property(nonatomic, getter=isCurrentlyAnimatingADismiss) _Bool currentlyAnimatingADismiss; // @synthesize currentlyAnimatingADismiss=_currentlyAnimatingADismiss;
@property(readonly, nonatomic, getter=isCoveringContentUnderneath) _Bool coveringContentUnderneath; // @synthesize coveringContentUnderneath=_coveringContentUnderneath;
@property(nonatomic, getter=isShowingInterstitial) _Bool showingInterstitial; // @synthesize showingInterstitial=_showingInterstitial;
@property(retain, nonatomic) GKBubbleFlowAnimator *animator; // @synthesize animator=_animator;
- (void)clearInterstitialViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInterstitialViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateViewAlpha:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popAllModalViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pseudoModalViewController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

