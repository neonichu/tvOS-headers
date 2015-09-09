//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/ImageRowReading-Protocol.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject <ImageRowReading>
{
    unsigned long long height;
    unsigned long long width;
    unsigned long long bpr;
    void *data;
    short red;
    short green;
    short blue;
    short alpha;
    struct CGColorSpace *cs;
}

+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)forImage:(id)arg1 usingContext:(id)arg2;
+ (id)withDictionary:(id)arg1;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2;
+ (id)fromImage:(struct CGImage *)arg1;
+ (id)fromImageFile:(id)arg1;
- (unsigned int)bytesPerPixel;
- (const char *)rowAtIndex:(unsigned int)arg1;
- (short)alpha;
- (short)blue;
- (short)green;
- (short)red;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)dealloc;
- (id)init;
- (void)dumpImageAsDict:(id)arg1;
- (void)dumpImageAsDeviceRGB:(id)arg1;
- (void)dumpImage:(id)arg1;
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;

@end

