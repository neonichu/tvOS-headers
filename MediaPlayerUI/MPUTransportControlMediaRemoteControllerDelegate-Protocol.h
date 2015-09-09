//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUTransportControlMediaRemoteController, NSDictionary, NSString, UIViewController;

@protocol MPUTransportControlMediaRemoteControllerDelegate <NSObject>
- (void)transportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(NSDictionary *)arg3 shouldLaunchApplication:(_Bool)arg4;
- (UIViewController *)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1;

@optional
- (NSString *)transportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(NSString *)arg2;
@end

