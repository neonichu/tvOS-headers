//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

__attribute__((visibility("hidden")))
@interface WebGLLayer : CAEAGLLayer
{
    struct GraphicsContext3D *_context;
    float _devicePixelRatio;
}

@property(nonatomic) struct GraphicsContext3D *context; // @synthesize context=_context;
- (void)display;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;
- (id)initWithGraphicsContext3D:(struct GraphicsContext3D *)arg1;

@end

