//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPUExtrasContext, NSLayoutConstraint, UIView;
@protocol MPUExtrasVideoPlaybackViewController;

@interface MPUExtrasFeatureContainerViewController : UIViewController
{
    UIViewController<MPUExtrasVideoPlaybackViewController> *_videoPlaybackViewController;
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
    MPUExtrasContext *_context;
    UIView *_menuBarView;
    double _collectionViewHeight;
}

@property(nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(nonatomic) __weak UIView *menuBarView; // @synthesize menuBarView=_menuBarView;
@property(retain, nonatomic) UIViewController *videoPlaybackViewController; // @synthesize videoPlaybackViewController=_videoPlaybackViewController;
@property(readonly, nonatomic) __weak MPUExtrasContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_menuBarHeightChange:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

