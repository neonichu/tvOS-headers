//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIColorScheme, UIControl, UISegmentedControl, _UIBackdropView;

@interface SKUIProductPageHeaderFloatingView : UIView
{
    UISegmentedControl *_sectionControl;
    SKUIColorScheme *_colorScheme;
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    _Bool _isPad;
}

@property(readonly, nonatomic) UIControl *sectionControl; // @synthesize sectionControl=_sectionControl;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (void)_reloadBackdropView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long selectedSectionIndex;
@property(nonatomic) double backdropAlpha;
- (id)initWithSectionTitles:(id)arg1 isPad:(_Bool)arg2;

@end

