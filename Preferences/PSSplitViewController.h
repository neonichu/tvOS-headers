//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController
{
    PSRootController *_containerNavigationController;
    id <PSSplitViewControllerNavigationDelegate> _navigationDelegate;
}

@property(nonatomic) __weak id <PSSplitViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) PSRootController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
- (void).cxx_destruct;
- (void)setupControllerForToolbar:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)showInitialViewController:(id)arg1;
- (void)popRecursivelyToRootController;
- (unsigned long long)supportedInterfaceOrientations;

@end

