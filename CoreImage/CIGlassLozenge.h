//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGlassLozenge : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputRadius;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CILozengeRefraction;

@end

