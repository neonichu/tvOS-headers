//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    _Bool _usesIOSurface;
    struct CGSize _framebufferSize;
    struct __C3DFramebuffer *_framebuffer;
}

- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;
- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(_Bool)arg4;
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;
- (void)cleanup:(struct __C3DRendererContext *)arg1;

@end
