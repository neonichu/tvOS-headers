//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <NSCoding>
{
    unsigned long long _numberOfTouchesRequired;
    unsigned long long _numberOfTapsRequired;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    int _numberOfTouchesForCurrentTap;
    struct CGPoint _location;
    struct CGPoint _startPoint;
    struct CGPoint _digitizerLocation;
    double _allowableMovement;
    double _allowableSeparation;
    double _allowableTouchTimeSeparation;
    double _maximumSingleTapDuration;
    double _maximumTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray *_touches;
    long long _strongestDirectionalAxis;
    double _strongestDirectionalForce;
    unsigned int _timerOn:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _noNewTouches:1;
    id <UITapRecognizerDelegate> _delegate;
    long long _exclusiveDirectionalAxis;
}

@property(nonatomic) long long exclusiveDirectionalAxis; // @synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis;
@property(nonatomic) double allowableTouchTimeSeparation; // @synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation;
@property(nonatomic) double maximumTapDuration; // @synthesize maximumTapDuration=_maximumTapDuration;
@property(nonatomic) __weak id <UITapRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
- (void).cxx_destruct;
- (void)_updateDigitizerLocationForEvent:(id)arg1;
- (struct CGPoint)_digitizerLocation;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)_locationInSceneReferenceSpace;
@property(nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property(nonatomic) double maximumSingleTapDuration;
@property(nonatomic) double allowableSeparation;
@property(nonatomic) double allowableMovement;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_interactionEndedTouch:(_Bool)arg1;
- (void)_beginInteraction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)activeTouchesExceedAllowableSeparation;
- (double)_effectiveAllowableMovement;
- (void)multitouchExpired:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)clearMultitouchTimer;
- (void)tooSlow:(id)arg1;
- (void)startTapTimer:(double)arg1;
- (void)clearTapTimer;
- (void)_reset;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

