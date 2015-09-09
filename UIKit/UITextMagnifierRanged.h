//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UITextMagnifier
{
    double _touchOffsetFromMagnificationPoint;
    double _magnifierOffsetFromTouch;
    _Bool _isHorizontal;
    _Bool _isAnimating;
    long long _delayedAnimationType;
}

+ (id)sharedRangedMagnifier;
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=_isHorizontal;
- (struct CGPoint)snappedPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectClosestToPoint:(struct CGPoint)arg1 withinSelection:(_Bool)arg2;
- (struct CGRect)caretRectClosestToPoint:(struct CGPoint)arg1;
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)stopMagnifying:(_Bool)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)updateFrame;
- (double)offsetFromMagnificationPoint;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)setAutoscrollDirections:(int)arg1;
- (int)horizontalMovement;
- (_Bool)wasPlacedCarefullyAtTime:(double)arg1;
- (int)horizontalMovementAtTime:(double)arg1;
- (_Bool)terminalPointPlacedCarefully;
- (void)setMagnificationPoint:(struct CGPoint)arg1;
- (id)initWithFrame;

@end

