//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVPlaybackProgressAnimation.h>

@protocol TVConstantRatePlaybackProgressAnimationDelegate;

@interface TVConstantRatePlaybackProgressAnimation : TVPlaybackProgressAnimation
{
    id <TVConstantRatePlaybackProgressAnimationDelegate> _delegate;
}

@property(nonatomic) __weak id <TVConstantRatePlaybackProgressAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (double)currentPlaybackTime;

@end

