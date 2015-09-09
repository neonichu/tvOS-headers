//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBlurEffect.h>

@class UIColor, _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface _UICustomBlurEffect : UIBlurEffect
{
    _UIBackdropViewSettings *_blurEffect;
    double _colorBurnTintLevel;
    double _saturationDeltaFactor;
}

+ (id)effectWithStyle:(long long)arg1;
@property(nonatomic) double saturationDeltaFactor; // @synthesize saturationDeltaFactor=_saturationDeltaFactor;
@property(nonatomic) double colorBurnTintLevel; // @synthesize colorBurnTintLevel=_colorBurnTintLevel;
- (void).cxx_destruct;
- (id)effectSettings;
@property(nonatomic) double zoom;
@property(nonatomic) double scale;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool darkenWithSourceOver;
@property(nonatomic) double darkeningTintSaturation;
@property(nonatomic) double darkeningTintHue;
@property(nonatomic) double darkeningTintAlpha;
@property(nonatomic) double colorBurnTintAlpha;
@property(nonatomic) double colorTintAlpha;
@property(retain, nonatomic) UIColor *colorTint;
@property(nonatomic) _Bool lightenGrayscaleWithSourceOver;
@property(nonatomic) double grayscaleTintAlpha;
@property(nonatomic) double grayscaleTintLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

