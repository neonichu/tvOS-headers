//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

@interface SKUIRedeemCameraLandingView : UIView
{
    UILabel *_bodyLabel;
    UIButton *_button;
    UILabel *_headerLabel;
    UIImageView *_imageView;
    long long _spacingStyle;
}

@property(nonatomic) long long spacingStyle; // @synthesize spacingStyle=_spacingStyle;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *image;
- (id)initWithClientContext:(id)arg1;

@end

