//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface ABLabelViewWithVariablePositioning : UIView
{
    UILabel *_label;
    double _topPadding;
    double _bottomPadding;
    double _horizontalPadding;
}

@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void)layoutSubviews;
- (void)setLabelShadowOffset:(struct CGSize)arg1;
- (void)setLabelShadowColor:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

