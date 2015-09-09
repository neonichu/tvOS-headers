//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLImageBuffer.h>

@class CIImage, EAGLContext;

@interface BLTextureImageBuffer : BLImageBuffer
{
    unsigned int _accumlatorTexture;
    unsigned int _accumlatorFramebuffer;
    EAGLContext *_eaglContext;
    CIImage *_ciImage;
}

- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end

