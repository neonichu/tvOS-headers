//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol UIViewControllerContextTransitioning;

@protocol UIViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransition:(id <UIViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <UIViewControllerContextTransitioning>)arg1;

@optional
- (void)animationEnded:(_Bool)arg1;
@end

