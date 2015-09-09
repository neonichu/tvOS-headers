//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/_UIBackdropViewObserver-Protocol.h>

@class NSString, _UIBackdropView, _UILegibilitySettingsProvider, _UILegibilityView;

@interface CMKPanoramaLabel : UIView <_UIBackdropViewObserver>
{
    _UIBackdropView *_backdropView;
    _UILegibilityView *_legibilityView;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateLegibilityView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

