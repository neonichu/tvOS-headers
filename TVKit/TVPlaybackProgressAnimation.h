//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSDate;

@interface TVPlaybackProgressAnimation : NSObject
{
    NSDate *_animationStartDate;
    double _animationDuration;
    double _fromPlaybackTime;
    double _toPlaybackTime;
    CAMediaTimingFunction *_mediaTimingFunction;
    NSDate *_currentDate;
}

@property(copy, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double toPlaybackTime; // @synthesize toPlaybackTime=_toPlaybackTime;
@property(nonatomic) double fromPlaybackTime; // @synthesize fromPlaybackTime=_fromPlaybackTime;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(copy, nonatomic) NSDate *animationStartDate; // @synthesize animationStartDate=_animationStartDate;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (double)currentPlaybackTime;

@end

