//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKServiceViewControllerDelegate-Protocol.h>

@class GKChallengeInternal, GKTurnBasedMatchInternal, NSNumber, NSString;

@protocol GKGameCenterDashboardHostProtocol <GKServiceViewControllerDelegate>
- (void)requestImagesForLeaderboardsInSet:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(void (^)(NSError *))arg1;
- (void)requestDashboardLogoImageWithHandler:(void (^)(NSError *))arg1;
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(void (^)(NSArray *, NSError *))arg1;
- (void)playPressedForChallenge:(GKChallengeInternal *)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(NSNumber *)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(NSString *)arg1;
- (void)remoteControllerDidChangeViewState:(NSNumber *)arg1;
@end

