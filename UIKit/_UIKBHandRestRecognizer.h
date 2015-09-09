//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, UIDelayedAction, UITouch;
@protocol _UIKBHandRestRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIKBHandRestRecognizer : NSObject
{
    NSMutableSet *_possibleTouches;
    NSMutableSet *_restingTouches;
    NSMutableSet *_failedTouches;
    double _setDownTime;
    double _lastKeystrokeTimestamp;
    UITouch *_initialSetDownTouch;
    UIDelayedAction *_updateAction;
    id <_UIKBHandRestRecognizerDelegate> _delegate;
}

@property(nonatomic) id <_UIKBHandRestRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getSetdownThreshold:(int)arg1;
- (void)_handleGestureTimingUpdate;
- (void)_processTouchUp:(id)arg1;
- (void)_processTouchDown:(id)arg1;
- (void)_endTrackingTouches:(id)arg1;
- (void)_releaseFailedTouches:(id)arg1;
- (_Bool)touchHasAlreadyFailed:(id)arg1;
- (void)incorporateTouch:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

