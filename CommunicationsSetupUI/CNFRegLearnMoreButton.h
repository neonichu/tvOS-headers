//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface CNFRegLearnMoreButton : UIButton
{
    long long _style;
    NSString *_buttonText;
    _Bool _alwaysUnderline;
    _Bool _usesImage;
}

+ (id)roundedButtonWithText:(id)arg1 color:(id)arg2;
@property(nonatomic) _Bool alwaysUnderline; // @synthesize alwaysUnderline=_alwaysUnderline;
@property(nonatomic) _Bool usesImage; // @synthesize usesImage=_usesImage;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupArrowImageForCurrentStyle;
- (void)_setupLearnMoreTextForCurrentStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 text:(id)arg3;

@end

