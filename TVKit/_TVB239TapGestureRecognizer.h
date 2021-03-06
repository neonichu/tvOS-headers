//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableDictionary;

@interface _TVB239TapGestureRecognizer : UIGestureRecognizer
{
    NSMutableDictionary *_actions;
    NSMutableDictionary *_targets;
    _Bool _usingGestureTargets;
    double _beginTime;
    long long _senderType;
    double _maximumPressDuration;
    struct CGPoint _digitizerLocation;
}

+ (_Bool)_shouldDefaultToTouches;
@property(nonatomic) double maximumPressDuration; // @synthesize maximumPressDuration=_maximumPressDuration;
@property(readonly, nonatomic) long long senderType; // @synthesize senderType=_senderType;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
- (void).cxx_destruct;
- (long long)_gestureTypeForCurrentDigitizerLocation;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resolveAction;
- (void)addTarget:(id)arg1 action:(SEL)arg2 gestureType:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

