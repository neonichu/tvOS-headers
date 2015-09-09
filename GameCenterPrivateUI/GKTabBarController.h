//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

@class GKBubbleFlowRootViewController, NSArray;

@interface GKTabBarController : UITabBarController
{
    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;
    unsigned long long _deferedRotationCount;
}

@property(nonatomic) unsigned long long deferedRotationCount; // @synthesize deferedRotationCount=_deferedRotationCount;
@property(retain, nonatomic) GKBubbleFlowRootViewController *bubbleFlowRootViewController; // @synthesize bubbleFlowRootViewController=_bubbleFlowRootViewController;
- (CDUnknownBlockType)deferRotation;
- (_Bool)shouldAutorotate;
- (void)clearInterstitialViewAnimated:(_Bool)arg1;
- (void)showInterstitialViewAnimated:(_Bool)arg1;
- (void)popAllModalViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;
- (_Bool)_isBeingCoveredByBubbleFlowRootViewController;
- (id)viewControllers;
- (_Bool)_hasBubbleFlowRootViewController;
- (_Bool)_useBubbleFlowRootViewControllerToPresent:(id)arg1;
@property(readonly, nonatomic) _Bool tabBarCovered;
@property(readonly, nonatomic) NSArray *modalChildViewControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)init;

@end

