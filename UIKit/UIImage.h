//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class CIImage, NSArray, UIImageAsset, UITraitCollection;

@interface UIImage : NSObject <NSSecureCoding>
{
    void *_imageRef;
    double _scale;
    struct {
        unsigned int named:1;
        unsigned int imageOrientation:3;
        unsigned int cached:1;
        unsigned int hasPattern:1;
        unsigned int isCIImage:1;
        unsigned int renderingMode:2;
        unsigned int suppressesAccessibilityHairlineThickening:1;
        unsigned int hasDecompressionInfo:1;
    } _imageFlags;
    _Bool _flipsForRightToLeftLayoutDirection;
    UITraitCollection *_traitCollection;
    UIImageAsset *_imageAsset;
    struct UIEdgeInsets _alignmentRectInsets;
}

+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (void)_clearAssetCaches;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)_animatedResizableImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 capInsets:(struct UIEdgeInsets)arg4 resizingMode:(long long)arg5 duration:(double)arg6;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 resizingMode:(long long)arg3 duration:(double)arg4;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 duration:(double)arg3;
+ (id)_animatedImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 duration:(double)arg4;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (struct UIEdgeInsets)_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2;
+ (long long)_mirroredImageOrientationForOrientation:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)imageNamed:(id)arg1;
+ (void)initialize;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(_Bool)arg5;
+ (id)_defaultBackgroundGradient;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)kitImageNamed:(id)arg1;
+ (id)imageAtPath:(id)arg1;
+ (long long)_idiomDefinedByPath:(id)arg1;
+ (unsigned long long)_scaleDefinedByPath:(id)arg1;
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double *)arg2;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(CDUnknownBlockType)arg2;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets)arg6;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (struct CGSize)_legibilityImageSizeForSize:(struct CGSize)arg1 style:(long long)arg2;
@property(readonly, nonatomic) _Bool flipsForRightToLeftLayoutDirection; // @synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection;
@property(retain, nonatomic) UIImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (_Bool)_representsLayeredImage;
- (void)_setIsFlippedInRightToLeft;
- (id)imageFlippedForRightToLeftLayoutDirection;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_primitiveImageAsset;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSArray *images;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void)_setSuppressesAccessibilityHairlineThickening:(_Bool)arg1;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_cachedImageStyledWithPresets:(id)arg1 forTintColor:(id)arg2;
@property(readonly, nonatomic) long long renderingMode;
- (id)imageWithRenderingMode:(long long)arg1;
@property(readonly, nonatomic) long long resizingMode;
@property(readonly, nonatomic) struct UIEdgeInsets capInsets;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (_Bool)_isResizable;
- (_Bool)_isSubimage;
- (struct CGRect)_contentRectInPixels;
- (struct CGRect)_contentStretchInPixels;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) long long imageOrientation;
- (long long)_imageOrientationConsideringRTLForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_imageOrientationConsideringRTL;
- (struct CGSize)_sizeInPixels;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) CIImage *CIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (_Bool)_canEncodeWithName:(id)arg1 coder:(id)arg2;
- (id)_initWithOtherImage:(id)arg1;
- (void)_configureImage:(id)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (_Bool)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_saveDecompressedImage:(struct CGImage *)arg1;
- (void)_decompressionFallbackImageCreation;
- (void)_decompressionComplete;
- (id)_decompressionInfo;
- (void)_setDecompressionInfo:(id)arg1;
- (id)imageFlippedForRightToLeft;
- (_Bool)_suppressesAccessibilityHairlineThickening;
- (id)_imageThatSuppressesAccessibilityHairlineThickening;
- (id)_flatImageWithColor:(id)arg1;
- (CDStruct_afa449f9)_calculateStatistics;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets)arg1 resizeInsets:(struct UIEdgeInsets)arg2;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (_Bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2;
- (id)_initWithData:(id)arg1 scale:(double)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2 cache:(_Bool)arg3;
- (id)initWithContentsOfFile:(id)arg1 cache:(_Bool)arg2;
@property(readonly, nonatomic) long long topCapHeight;
@property(readonly, nonatomic) long long leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (struct CGColor *)_tiledPatternColor;
- (id)patternColor;
- (struct CGColor *)_patternColor;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2 operation:(int)arg3;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2;
- (void)draw1PartImageInRect:(struct CGRect)arg1;
- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;
- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2;
- (void)draw9PartImageWithSliceRects:(CDStruct_f8849c67)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw9PartImageWithSliceRects:(CDStruct_f8849c67)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;
- (void)draw9PartImageWithSliceRects:(CDStruct_f8849c67)arg1 inRect:(struct CGRect)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2 fraction:(double)arg3;
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)compositeToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;
- (struct CGImage *)imageRef;
- (id)initWithData:(id)arg1 cache:(_Bool)arg2;
- (id)_serializedData;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;
- (_Bool)_isInvisibleAndGetIsTranslucent:(_Bool *)arg1;
- (_Bool)_isNamed;
- (void)_setNamed:(_Bool)arg1;
- (_Bool)_isCached;
- (void)_setCached:(_Bool)arg1;
- (id)_resizableImageWithCapMask:(int)arg1;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2 scale:(double)arg3;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2;
- (void)_preheatBitmapData;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(_Bool)arg5;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 allowImageResizing:(_Bool)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(_Bool)arg2;
- (id)_subimageInRect:(struct CGRect)arg1;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (id)_tabBarItemImageWithTintColor:(id)arg1 selected:(_Bool)arg2 metrics:(long long)arg3 style:(long long)arg4 forScreenScale:(double)arg5;
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize)arg3;
- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize)arg2;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;
- (id)_imageForLegibilityStyle:(long long)arg1;

@end

