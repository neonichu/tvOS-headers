//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKShieldArtwork.h>

__attribute__((visibility("hidden")))
@interface _VKScaledFallbackShieldArtwork : VKShieldArtwork
{
    VKShieldArtwork *_artwork;
}

- (struct CGImage *)newImageWithShieldText:(id)arg1 allowMultiline:(_Bool)arg2 widthPaddingMultiple:(double)arg3 centerPoint:(struct CGPoint *)arg4;
- (void)dealloc;
- (id)initWithShieldArtwork:(id)arg1 scale:(double)arg2;

@end

