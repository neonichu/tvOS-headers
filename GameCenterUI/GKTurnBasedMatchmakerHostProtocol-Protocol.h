//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKServiceViewControllerDelegate-Protocol.h>

@class GKTurnBasedMatchInternal, NSError;

@protocol GKTurnBasedMatchmakerHostProtocol <GKServiceViewControllerDelegate>
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)finishWithError:(NSError *)arg1;
- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
@end

