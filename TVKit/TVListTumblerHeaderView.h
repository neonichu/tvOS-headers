//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIImageView, UILabel;

@interface TVListTumblerHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_leftArrowView;
    UIImageView *_rightArrowView;
}

@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UIImageView *leftArrowView; // @synthesize leftArrowView=_leftArrowView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_animateLabel:(id)arg1 withNewText:(id)arg2 inDirection:(struct CGSize)arg3;
- (struct CGSize)_normalizedVector:(struct CGSize)arg1;
- (struct CGSize)_vectorFromEdge:(unsigned long long)arg1;
- (id)_arrowImage:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isRightArrowHidden) _Bool rightArrowHidden;
@property(nonatomic, getter=isLeftArrowHidden) _Bool leftArrowHidden;
- (void)setAttributedSubtitle:(id)arg1 animatedFromEdge:(unsigned long long)arg2;
- (void)setAttributedTitle:(id)arg1 animatedFromEdge:(unsigned long long)arg2;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

