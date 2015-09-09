//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSError, UIView, UIViewController;

@protocol ADAdRecipient <NSObject>
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIView *adSpaceView;
@property(readonly, nonatomic) long long options;
@property(readonly, nonatomic) int internalAdType;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
@end

