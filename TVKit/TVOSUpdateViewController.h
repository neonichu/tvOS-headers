//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVOSUpdateSlowRebootView, TVOSUpdateView;

@interface TVOSUpdateViewController : UIViewController
{
    TVOSUpdateSlowRebootView *_rebootView;
    TVOSUpdateView *_progressView;
}

- (void).cxx_destruct;
- (id)preferredFocusView;
- (void)showSlowUpdateViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgressPercent:(float)arg1;
- (void)showProgressView;
- (void)loadView;

@end

