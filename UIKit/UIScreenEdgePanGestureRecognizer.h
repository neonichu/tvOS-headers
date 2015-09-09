//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import <UIKit/_UIScreenEdgePanRecognizerDelegate-Protocol.h>

@class NSString, _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate>
{
    _UIScreenEdgePanRecognizer *_recognizer;
}

+ (_Bool)_shouldSupportStylusTouches;
+ (_Bool)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (void)_setHysteresis:(double)arg1;
- (void)_setEdgeRegionSize:(double)arg1;
- (double)_edgeRegionSize;
- (_Bool)isRequiringLongPress;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldUseGrapeFlags;
- (long long)_touchInterfaceOrientation;
- (struct CGPoint)_locationForTouch:(id)arg1;
@property(nonatomic) unsigned long long edges;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

