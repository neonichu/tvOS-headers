//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIGestureRecognizer, UIInteractionProgress, UIView, UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol UIViewControllerPreviewingDelegate_Private <NSObject>

@optional
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (id <UIViewControllerTransitioningDelegate>)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(UIView *)arg2;
- (void)performCommitTransitionForPreviewViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtPosition:(struct CGPoint)arg2 inSourceView:(UIView *)arg3;
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3 containerView:(UIView *)arg4;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3;
- (UIViewController *)committedViewControllerForPreviewViewController:(UIViewController *)arg1;
@end

