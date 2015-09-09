//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIView, UIViewController;

@protocol UIViewControllerContextTransitioning <NSObject>
- (struct CGRect)finalFrameForViewController:(UIViewController *)arg1;
- (struct CGRect)initialFrameForViewController:(UIViewController *)arg1;
- (struct CGAffineTransform)targetTransform;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (long long)presentationStyle;
- (_Bool)transitionWasCancelled;
- (_Bool)isInteractive;
- (_Bool)isAnimated;
- (UIView *)containerView;
@end

