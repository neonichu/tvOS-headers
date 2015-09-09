//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PKShapeLayerPathState : NSObject
{
    double _strokeStartT0;
    double _strokeStartT1;
    double _strokeEndT0;
    double _strokeEndT1;
}

- (double)progressForShapeLayer:(id)arg1;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(CDUnknownBlockType)arg3;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2;
- (double)strokeEndAtProgress:(double)arg1;
- (double)strokeStartAtProgress:(double)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4;
- (id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2;
- (id)initWithShapeLayer:(id)arg1 reverse:(_Bool)arg2;
- (id)initWithShapeLayer:(id)arg1;
- (id)init;

@end

