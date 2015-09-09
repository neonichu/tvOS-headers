//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/NSObject-Protocol.h>

@class TVPlaybackProgressAnimator;

@protocol TVPlaybackProgressAnimatorDelegate <NSObject>
- (void)playbackProgressAnimator:(TVPlaybackProgressAnimator *)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3;

@optional
- (double)currentElapsedTimeForPlaybackProgressAnimator:(TVPlaybackProgressAnimator *)arg1;
- (void)playbackProgressAnimator:(TVPlaybackProgressAnimator *)arg1 didFinishAnimatingToElapsedTime:(double)arg2;
- (void)playbackProgressAnimator:(TVPlaybackProgressAnimator *)arg1 didPresentElapsedTime:(double)arg2;
@end

