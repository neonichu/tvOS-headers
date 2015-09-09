//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SBFWallpaperDefaults : NSObject
{
}

+ (id)defaults;
- (id)nameForVariant:(long long)arg1;
- (void)setName:(id)arg1 forLocations:(long long)arg2;
- (void)resetNameDefaults;
- (double)stillTimeInVideo;
- (void)setStillTimeInVideo:(double)arg1;
- (void)resetStillTimeInVideoDefaults;
- (_Bool)hasVideo;
- (void)setHasVideo:(_Bool)arg1;
- (void)resetHasVideoDefaults;
- (_Bool)isPortraitForVariant:(long long)arg1;
- (void)setPortrait:(_Bool)arg1 forLocations:(long long)arg2;
- (void)resetPortraitDefaults;
- (_Bool)magnifyEnabledForVariant:(long long)arg1;
- (void)setMagnifyEnabled:(_Bool)arg1 forLocations:(long long)arg2;
- (void)resetMagnifyDefaults;
- (_Bool)supportsCroppingForVariant:(long long)arg1;
- (void)setSupportsCropping:(_Bool)arg1 forLocations:(long long)arg2;
- (struct CGRect)cropRectForVariant:(long long)arg1;
- (void)setCropRect:(struct CGRect)arg1 forLocations:(long long)arg2;
- (void)resetCroppingDefaults;
- (double)zoomScaleForVariant:(long long)arg1;
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2;
- (void)resetZoomScaleDefaults;
- (double)parallaxFactorForVariant:(long long)arg1;
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2;
- (void)resetParallaxFactorDefaults;
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2;
- (void)resetDefaults;
- (id)description;

@end

