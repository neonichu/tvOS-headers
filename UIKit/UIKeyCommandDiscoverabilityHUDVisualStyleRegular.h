//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle
{
    UIColor *_titleColor;
    UIColor *_inputColor;
    UIColor *_dividerColor;
}

@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *inputColor; // @synthesize inputColor=_inputColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (double)minimumFontScaleBeforeTruncation;
- (double)summaryLineSpacing;
- (double)summaryLineHeight;
- (id)summaryFont;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)summaryYPadding;
- (double)summaryXPadding;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)columnDividerWidth;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)HUDPageControlBottomMargin;
- (struct UIEdgeInsets)HUDViewInsets;
- (id)init;

@end

