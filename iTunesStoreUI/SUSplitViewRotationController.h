//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SURotationController.h>

@class UIViewController;

@interface SUSplitViewRotationController : SURotationController
{
    SURotationController *_firstRotationController;
    UIViewController *_firstViewController;
    SURotationController *_secondRotationController;
    UIViewController *_secondViewController;
}

- (id)_secondRotationController;
- (id)_firstRotationController;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;

@end

