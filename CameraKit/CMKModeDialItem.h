//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSAttributedString, NSString, UIFont;

@interface CMKModeDialItem : UIView
{
    _Bool _selected;
    NSString *_title;
    UIFont *_font;
    CAShapeLayer *__scalableTextLayer;
}

@property(readonly, nonatomic) CAShapeLayer *_scalableTextLayer; // @synthesize _scalableTextLayer=__scalableTextLayer;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (struct CGPath *)_pathForAttributedString:(id)arg1;
- (void)_updateScalableTextPathFromAttributedTitle;
- (struct CGColor *)_textColor;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSAttributedString *_attributedTitle;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKModeDialItemInitialization;

@end

