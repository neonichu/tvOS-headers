//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface PKReticleView : UIView
{
    CAShapeLayer *_shapeLayer;
    struct CGPath *_bouncePathSquare;
    struct CGPath *_bouncePathRectangle;
    struct CGColor *_shadowColorDefault;
    struct CGColor *_shadowColorSuccess;
    struct CGColor *_shadowColorFailure;
}

+ (Class)layerClass;
- (struct CGPath *)_createReticlePathForPoints:(struct CGPoint *)arg1;
- (struct CGPoint *)_makeSanitizedCorners:(struct CGPoint *)arg1;
- (void)blinkForSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)positionWithCorners:(struct CGPoint *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

