//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class NSString, TVLHeaderElement, TVSImageProxy, UIImageView, UILabel;

@interface TVLMenuHeaderView : UIView <ATVUpdatable>
{
    TVLHeaderElement *_headerElement;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    TVSImageProxy *_imageProxy;
}

+ (id)subtitleFont;
+ (id)titleFont;
@property(retain, nonatomic) TVSImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
- (void)_createTitleLabel;
- (void)layoutSubviews;
- (void)_setHeaderImage:(id)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UILabel *titleLabel;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (id)initWithHeaderElement:(id)arg1;

@end

