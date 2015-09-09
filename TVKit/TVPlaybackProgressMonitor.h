//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TVPlaybackProgressMonitorDelegate, TVSPlayback;

@interface TVPlaybackProgressMonitor : NSObject
{
    id <TVSPlayback> _player;
    id <TVPlaybackProgressMonitorDelegate> _delegate;
    NSString *_elapsedTimeText;
    NSString *_remainingTimeText;
    id _elapsedTimeObserverToken;
}

+ (float)_progressWithElapsedTime:(double)arg1 duration:(double)arg2;
+ (id)_stringForTimeInterval:(double)arg1;
@property(retain, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property(copy, nonatomic) NSString *remainingTimeText; // @synthesize remainingTimeText=_remainingTimeText;
@property(copy, nonatomic) NSString *elapsedTimeText; // @synthesize elapsedTimeText=_elapsedTimeText;
@property(nonatomic) __weak id <TVPlaybackProgressMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TVSPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_playbackStateDidChange:(id)arg1;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)updateBoundRate;
- (void)updateBoundDuration;
- (void)_updateProgressImmediately;
- (void)_elapsedTimeDidChangeToTime:(double)arg1 withDuration:(double)arg2 discontinuity:(_Bool)arg3;
- (void)_expectsProgress:(double)arg1 afterDuration:(double)arg2;
@property(readonly, nonatomic) double progress;
- (void)dealloc;
- (void)tvs_bindRateBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;
- (id)RateBinding;
- (void)tvs_bindDurationBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;
- (id)DurationBinding;

@end

