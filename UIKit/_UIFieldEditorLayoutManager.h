//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSLayoutManager.h>

__attribute__((visibility("hidden")))
@interface _UIFieldEditorLayoutManager : NSLayoutManager
{
    _Bool _needsExtraBulletRendering;
}

@property _Bool needsExtraBulletRendering; // @synthesize needsExtraBulletRendering=_needsExtraBulletRendering;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;

@end

