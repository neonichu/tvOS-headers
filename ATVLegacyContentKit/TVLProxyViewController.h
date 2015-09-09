//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSTimer, UIActivityIndicatorView, UILabel;

@interface TVLProxyViewController : UIViewController
{
    NSTimer *_spinnerTimer;
    _Bool _loadStarted;
    _Bool _loadPerformed;
    _Bool _loadWithViewAppearance;
    _Bool _animating;
    CDUnknownBlockType _loadHandler;
    CDUnknownBlockType _loadCompletionHandler;
    UILabel *_label;
    UIActivityIndicatorView *_spinnerView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType loadCompletionHandler; // @synthesize loadCompletionHandler=_loadCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool loadWithViewAppearance; // @synthesize loadWithViewAppearance=_loadWithViewAppearance;
@property(readonly, nonatomic) _Bool loadPerformed; // @synthesize loadPerformed=_loadPerformed;
@property(readonly, nonatomic) _Bool loadStarted; // @synthesize loadStarted=_loadStarted;
- (void).cxx_destruct;
- (void)_showSpinnerAction:(id)arg1;
- (void)_invalidateSpinnerTimer;
- (void)loadCompleted;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithLoadHandler:(CDUnknownBlockType)arg1 loadCompletionHandler:(CDUnknownBlockType)arg2;

@end

