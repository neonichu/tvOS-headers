//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreUI/FMDynamicTypeButton.h>

@class UIColor;

@interface FMBorderedButton : FMDynamicTypeButton
{
    _Bool _hairlineBorder;
    UIColor *_borderColor;
}

@property(nonatomic) _Bool hairlineBorder; // @synthesize hairlineBorder=_hairlineBorder;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)_bbUpdateLayer;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double borderWidth;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)prepareForInterfaceBuilder;
- (void)awakeFromNib;

@end

