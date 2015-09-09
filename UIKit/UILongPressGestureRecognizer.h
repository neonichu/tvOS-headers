//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <UIKit/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSObservation, NSString, UIDelayedAction, UIHeldAction, UITapRecognizer;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>
{
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    struct CGPoint _startPointScreen;
    struct CGPoint _lastCentroidScreen;
    UIHeldAction *_enoughTimeElapsed;
    UIDelayedAction *_tooMuchTimeElapsed;
    UITapRecognizer *_imp;
    NSObservation *_touchForceObservation;
    long long _impulseObservations;
    double _currentImpulse;
    double _lastForce;
    double _lastForceTimestamp;
    unsigned int _gotTouchEnd:1;
    unsigned int _gotTooMany:1;
    unsigned int _gotEnoughTaps:1;
    unsigned int _cancelPastAllowableMovement:1;
    unsigned int _allowsDynamicTouchesList:1;
    _Bool _requiresQuietImpulse;
    long long _buttonType;
}

@property(nonatomic, setter=_setRequiresQuietImpulse:) _Bool _requiresQuietImpulse; // @synthesize _requiresQuietImpulse;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double delay; // @synthesize delay=_minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (double)_touchSloppinessFactor;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceivePress:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
- (struct CGPoint)_translationInView:(id)arg1;
@property(readonly, nonatomic) struct CGPoint startPoint;
- (struct CGPoint)_startPointInView:(id)arg1;
@property(readonly, nonatomic) struct CGPoint _centroidScreen;
@property(readonly, nonatomic) struct CGPoint centroid;
- (struct CGPoint)_centroidInView:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(_Bool)arg1;
- (void)_resetImpulseQuietness;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (_Bool)_impulseQuietEnough;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_changeTouchesListTo:(id)arg1;
- (void)_startTapFinishedTimer;
- (void)startTimer;
- (void)clearTimer;
- (void)tooMuchElapsed:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (_Bool)activeTouchesExceedAllowableSeparation;
- (void)_resetGestureRecognizer;
- (void)setView:(id)arg1;
- (void)_setAllowableSeparation:(double)arg1;
- (double)_allowableSeparation;
- (void)_setAllowsDynamicTouchesList:(_Bool)arg1;
- (_Bool)_allowsDynamicTouchesList;
@property(nonatomic) _Bool cancelPastAllowableMovement;
@property(nonatomic) double minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTapsRequired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

