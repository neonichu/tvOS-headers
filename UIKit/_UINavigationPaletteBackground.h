//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate-Protocol.h>

@class UIColor, UIImageView, UINavigationBar, _UIBackdropView, _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate>
{
    UIColor *_barTintColor;
    UIImageView *_shadowView;
    _UINavigationControllerPalette *_palette;
    UINavigationBar *_bar;
    _UIBackdropView *_adaptiveBackdrop;
    struct {
        unsigned int barTranslucence:3;
        unsigned int barStyle:3;
        unsigned int paletteWantsAdaptiveBackdrop:1;
    } _navbarFlags;
}

@property(retain, nonatomic, getter=_shadowView, setter=_setShadowView:) UIView *shadowView; // @synthesize shadowView=_shadowView;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)updateBackgroundView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
@property(nonatomic) _Bool paletteWantsAdaptiveBackdrop;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(nonatomic) long long barStyle;
@property(retain, nonatomic) UIColor *barTintColor;
- (void)dealloc;
- (void)_syncWithBarStyles;
- (id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2;

@end

