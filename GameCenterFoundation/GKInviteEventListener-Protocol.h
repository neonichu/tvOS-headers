//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GKInvite, GKPlayer, NSArray;

@protocol GKInviteEventListener

@optional
- (void)player:(GKPlayer *)arg1 didRequestMatchWithPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithRecipients:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didAcceptInvite:(GKInvite *)arg2;
@end

