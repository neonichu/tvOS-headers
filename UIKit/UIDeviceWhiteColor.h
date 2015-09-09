//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

__attribute__((visibility("hidden")))
@interface UIDeviceWhiteColor : UIColor
{
    double whiteComponent;
    double alphaComponent;
    struct CGColor *cachedColor;
    long long cachedColorOnceToken;
}

- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (double)alphaComponent;
- (struct CGColor *)CGColor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)colorSpaceName;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(double)arg1;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;

@end

