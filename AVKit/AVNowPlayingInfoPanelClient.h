//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVNowPlayingInfoPanel.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoPanelClient : AVNowPlayingInfoPanel
{
    struct CGRect _originalBounds;
    UIViewController *_externalViewController;
}

@property(readonly, nonatomic) UIViewController *externalViewController; // @synthesize externalViewController=_externalViewController;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (void)viewDidLayoutSubviews;
- (void)setTitle:(id)arg1;
- (id)title;
- (_Bool)hasContent;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithIdentifier:(id)arg1 externalViewController:(id)arg2;

@end

