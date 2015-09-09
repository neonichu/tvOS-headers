//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIShapeView, UIColor, UIImage, UIImageView, UILabel;

@interface SKUIOnboardingProgressView : UIView
{
    SKUIShapeView *_borderView;
    UIImageView *_imageView;
    double _progress;
    SKUIShapeView *_progressView;
    UILabel *_titleLabel;
}

+ (struct CGSize)preferredImageSizeForViewSize:(struct CGSize)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)_borderColor;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) UIColor *fillColor;
@property(readonly, nonatomic) struct CGSize preferredImageSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

