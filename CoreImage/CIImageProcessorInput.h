//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIImageProcessorInput : NSObject
{
    void *_priv;
}

- (id)metalTexture;
- (const void *)getBaseAddress;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
- (struct __IOSurface *)surface;
@property(readonly, nonatomic) struct CGRect region;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 bounds:(struct CGRect)arg3 context:(struct Context *)arg4;

@end

