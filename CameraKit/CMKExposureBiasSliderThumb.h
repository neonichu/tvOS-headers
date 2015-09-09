//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CMKExposureBiasSliderThumb : UIView
{
    float _normalizedExposureValue;
}

@property(nonatomic) float normalizedExposureValue; // @synthesize normalizedExposureValue=_normalizedExposureValue;
- (double)_sunRaySpacing;
- (double)_sunRayLength;
- (double)_sunRadius;
- (double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double maxRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

