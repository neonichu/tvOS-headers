//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverPresentationController.h>

#import <UIKit/_UISearchControllerPresenting-Protocol.h>

@class NSString, UIPresentationController, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    struct CGRect finalFrameForContainerView;
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (long long)adaptivePresentationStyle;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)presentationTransitionWillBegin;
- (id)_popoverHostingWindow;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

