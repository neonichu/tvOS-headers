//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IKColor, SKUIGridViewGradientDecorationBackgroundView, UIView;

@interface SKUIGridViewGradientDecorationView : UICollectionReusableView
{
    SKUIGridViewGradientDecorationBackgroundView *_backgroundView;
    IKColor *_kolor;
}

@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

