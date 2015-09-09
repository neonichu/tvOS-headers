//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBackdropView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UICalloutBarBackground : _UIBackdropView
{
    double m_dividerOffsets[24];
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    _UIBackdropView *_separatorView;
    struct CGRect _highlightRect;
}

@property(nonatomic) struct CGRect highlightRect; // @synthesize highlightRect=_highlightRect;
@property(retain, nonatomic) _UIBackdropView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *tintMaskView; // @synthesize tintMaskView=_tintMaskView;
@property(retain, nonatomic) UIImageView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
- (void).cxx_destruct;
- (void)setBlurDisabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 forFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setDividerOffsets:(double *)arg1;
- (id)init;

@end

