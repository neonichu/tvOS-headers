//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVSPlayer, TVSVideoView, TVVideoBorderView, _UIFloatingContentView;
@protocol TVMainVideoViewControllerDelegate;

@interface TVMainVideoViewController : UIViewController
{
    _Bool _acceptsFocus;
    _Bool _videoViewHidden;
    id <TVMainVideoViewControllerDelegate> _delegate;
    TVSPlayer *_player;
    _UIFloatingContentView *_floatingContentView;
    TVSVideoView *_videoView;
    TVVideoBorderView *_borderView;
}

@property(retain, nonatomic) TVVideoBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) TVSVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic, getter=isVideoViewHidden) _Bool videoViewHidden; // @synthesize videoViewHidden=_videoViewHidden;
@property(retain, nonatomic) TVSPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
@property(nonatomic) __weak id <TVMainVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_handleSelectButton:(id)arg1;
- (void)_didSelect;

@end
