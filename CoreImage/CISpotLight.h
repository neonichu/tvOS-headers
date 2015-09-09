//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISpotLight : CIFilter
{
    CIImage *inputImage;
    CIVector *inputLightPosition;
    CIVector *inputLightPointsAt;
    NSNumber *inputBrightness;
    NSNumber *inputConcentration;
    CIColor *inputColor;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CISpotLight;

@end

