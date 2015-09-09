//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVAnimatedLabel, TVBadgeOverlayView, TVImageStackView, TVLPosterElement, TVSImage, TVSImageProxy;

@interface TVLImageStackPosterView : UIView
{
    TVSImageProxy *_imageProxy;
    TVImageStackView *_imageStackView;
    TVLPosterElement *_posterElement;
    struct CGSize _posterSize;
    struct CGSize _displayPosterSize;
    TVAnimatedLabel *_subtitleLabel;
    TVAnimatedLabel *_titleLabel;
    _Bool _selected;
    _Bool _collectionBasedLayout;
    TVSImage *_defaultImage;
    long long _titleStyle;
    TVBadgeOverlayView *_badgeOverlayView;
    struct CGPoint _focusDirection;
}

+ (double)_titleOffsetForPosterSize:(struct CGSize)arg1 selected:(_Bool)arg2;
+ (double)_heightForTitleStyle:(long long)arg1 alwaysShowTitles:(_Bool)arg2 isRelated:(_Bool)arg3;
+ (long long)titleStyleForElement:(id)arg1;
@property(retain, nonatomic) TVBadgeOverlayView *badgeOverlayView; // @synthesize badgeOverlayView=_badgeOverlayView;
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
- (void).cxx_destruct;
- (void)_setImageFromURL:(id)arg1 overlayView:(id)arg2;
- (void)updateBadgeValue;
- (void)setTitleStyle:(long long)arg1 alwaysShowTitles:(_Bool)arg2;
- (void)setPosterElement:(id)arg1 withinCollection:(id)arg2;
- (void)setPosterElement:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPosterElement:(id)arg1 withinCollection:(id)arg2;
- (id)initWithPosterElement:(id)arg1;
- (void)dealloc;

@end

