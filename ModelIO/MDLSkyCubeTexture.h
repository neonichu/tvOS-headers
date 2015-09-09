//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLSkyCubeTexture : MDLTexture
{
    float _turbidity;
    float _sunElevation;
    float _upperAtmosphereScattering;
    float _groundAlbedo;
    float _gamma;
    float _exposure;
    float _brightness;
    float _contrast;
    float _saturation;
    // Error parsing type: , name: _highDynamicRangeCompression
    float _highDynamicRangeCompressionLimit;
    struct CGColor *_groundColor;
    struct SkyDescriptor *_sky;
    float _horizonElevation;
}

@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
@property(nonatomic) float gamma; // @synthesize gamma=_gamma;
@property(nonatomic) float horizonElevation; // @synthesize horizonElevation=_horizonElevation;
// Error parsing type for property highDynamicRangeCompression:
// Property attributes: T,N,V_highDynamicRangeCompression

@property(nonatomic) float saturation; // @synthesize saturation=_saturation;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(nonatomic) float groundAlbedo; // @synthesize groundAlbedo=_groundAlbedo;
@property(nonatomic) float upperAtmosphereScattering; // @synthesize upperAtmosphereScattering=_upperAtmosphereScattering;
@property(nonatomic) float sunElevation; // @synthesize sunElevation=_sunElevation;
@property(nonatomic) float turbidity; // @synthesize turbidity=_turbidity;
- (void)updateTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 upperAtmosphereScattering:(float)arg6 groundAlbedo: /* Error: Ran out of types for this method. */;
@property(nonatomic) struct CGColor *groundColor;

@end

