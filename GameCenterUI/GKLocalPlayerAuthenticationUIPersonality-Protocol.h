//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKLocalPlayer, NSString;

@protocol GKLocalPlayerAuthenticationUIPersonality <NSObject>
- (void)authenticateReturnAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 localPlayer:(GKLocalPlayer *)arg3 withCompletionHandler:(void (^)(GKLocalPlayer *, UIViewController *, NSError *))arg4;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(GKLocalPlayer *)arg1 withCompletionHandler:(void (^)(GKLocalPlayer *, UIViewController *, NSError *))arg2;
- (void)authenticationShowSignInUIForLocalPlayer:(GKLocalPlayer *)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(GKLocalPlayer *)arg1;
@end

