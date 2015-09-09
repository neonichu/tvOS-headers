//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface TVSImage : NSObject
{
    struct CGImage *_image;
    struct CGImageSource *_imageSource;
    double _imageWidth;
    double _imageHeight;
    int _imageOrientation;
    _Bool _enableCache;
    _Bool _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    _Bool _imageBufferInMemory;
    _Bool _isOldAssetImage;
    _Bool _rotationEnabled;
}

+ (id)imageWithRotationFromPath:(id)arg1;
+ (id)imageWithRotationFromURL:(id)arg1;
+ (id)imageWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithPath:(id)arg1 cacheImmediately:(_Bool)arg2;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;
+ (id)imageWithURL:(id)arg1;
@property(readonly, nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(readonly, nonatomic) int orientation; // @synthesize orientation=_imageOrientation;
- (void).cxx_destruct;
- (_Bool)isImageBufferInMemory;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1;
- (struct CGRect)largestSquareRect;
- (id)croppedImageForSize:(struct CGSize)arg1;
- (id)mapImageWithSourceRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2;
- (id)mapImageWithSourceRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2 drawInContextBlock:(CDUnknownBlockType)arg3;
- (id)deletterboxedImage;
- (_Bool)enableCache;
- (void)setEnableCache:(_Bool)arg1;
- (_Bool)sourceRequiresRotation;
- (_Bool)isPowerOfTwo;
- (float)aspectRatio;
- (struct CGSize)pixelBounds;
- (_Bool)hasAlpha;
- (id)imageType;
- (struct CGImage *)image;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;
- (void)_drawTintedImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 tintColor:(struct CGColor *)arg3;
- (void)_initializeCGImageWithRotation;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource *)arg1;

@end

