//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)_row4ControlSegmentWidth;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)displayContentsForKey:(id)arg1;
- (_Bool)_onLeftSide:(id)arg1 onKeyplane:(id)arg2;
- (_Bool)_isFullHeightKeyFor:(id)arg1 onKeyplane:(id)arg2;
- (_Bool)iPadFudgeLayout;
- (struct CGSize)defaultVariantGeometrySize;
- (struct CGPoint)dualStringKeyTopTextOffset:(_Bool)arg1;
- (double)dualStringKeyTopFontSize:(_Bool)arg1;
- (struct CGPoint)dualStringKeyBottomTextOffset:(_Bool)arg1;
- (double)dualStringKeyBottomFontSize:(_Bool)arg1;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)moreKeyOffset;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)iPadFudgeControlKeyOffset;
- (double)controlKeyFontSize;
- (double)deleteKeyFontSize;
- (double)moreKeyFontSize;
- (double)spaceKeyFontSize;
- (struct CGPoint)stringKeyOffset:(_Bool)arg1;
- (double)stringKeyFontSize:(_Bool)arg1;

@end

