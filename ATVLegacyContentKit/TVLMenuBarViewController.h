//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVLFeedControllerJSMessaging-Protocol.h>

@class NSString, TVLJSCallback, TVLViewWithNavigationBarElement, UIViewController;

@interface TVLMenuBarViewController : UITabBarController <ATVUpdatable, TVLFeedControllerJSMessaging>
{
    TVLJSCallback *_lastEvent;
    TVLViewWithNavigationBarElement *_viewWithNavigationBarElement;
}

+ (id)menuBarControllerForViewController:(id)arg1;
- (void).cxx_destruct;
- (_Bool)swapController:(id)arg1 forController:(id)arg2;
- (void)callJavaScriptFunction:(id)arg1 withArguments:(id)arg2;
- (void)_setSelectedViewController:(id)arg1;
- (void)_loadViewControllerForXMLDocument:(id)arg1 sourceURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_loadViewControllerForURLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadViewControllerForNavigationItemElement:(id)arg1 navigationScript:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_proxyViewControllerForNavigationItemElement:(id)arg1 loadCompletion:(CDUnknownBlockType)arg2;
- (void)_buildProxyViewControllers;
- (void)_clearLastEventInContext:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)reloadPage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (void)tvl_saveStateWithCoder:(id)arg1;
- (void)tvl_restoreStateWithCoder:(id)arg1;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
