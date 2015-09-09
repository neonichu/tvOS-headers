//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView
{
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    _Bool _showingFrontFace;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    struct {
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

@property(nonatomic, getter=isShowingFrontFace) _Bool showingFrontFace; // @synthesize showingFrontFace=_showingFrontFace;
- (_Bool)transitionIsVisible;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)rebuildMoreIntlKeys;
- (void)updateMoreIntlKey:(id)arg1 asStart:(_Bool)arg2 withRect:(struct CGRect)arg3 showIntl:(_Bool)arg4 showDictKey:(_Bool)arg5;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)rebuildTransition;
- (void)rebuildBackgroundTransition;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (void)_flipToFront:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

