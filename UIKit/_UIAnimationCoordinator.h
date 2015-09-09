//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController, _UIViewControllerOneToOneTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    double _duration;
    CDUnknownBlockType _preperation;
    CDUnknownBlockType _animator;
    CDUnknownBlockType _completion;
    UIView *_containerView;
    UIViewController *_viewController;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animator; // @synthesize animator=_animator;
@property(copy, nonatomic) CDUnknownBlockType preperation; // @synthesize preperation=_preperation;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)finishInteractiveAnimation;
- (void)cancelInteractiveAnimation;
- (void)updateInteractiveProgress:(double)arg1;
- (void)animateInteractively;
- (void)animate;
- (void)_updateTransitionContext;
@property(readonly, retain, nonatomic) NSMutableDictionary *stash;
@property(readonly, retain, nonatomic) _UIViewControllerOneToOneTransitionContext *transitionContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

